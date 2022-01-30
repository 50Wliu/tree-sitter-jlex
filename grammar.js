// Regex portions adapated from tree-sitter-regex
const quantifierRule = prefix => $ => prefix($)

const SYNTAX_CHARS = [
  ...'?*+|()^$.[]{}"\\'
]

const SYNTAX_CHARS_ESCAPED = SYNTAX_CHARS.map(
  char => `\\${char}`
).join('')

module.exports = grammar({
  name: 'jlex',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/, // whitespace
  ],

  inline: $ => [
    $._character_escape,
    $._class_atom,
  ],

  rules: {
    source_file: $ => seq(
      $.user_code,
      $.directives,
      $.rules,
    ),

    user_code: $ => seq(
      $.java_code,
      $.section_separator,
    ),

    directives: $ => seq(
      repeat(choice(
        $.code,
        $.macro_def,
        $.state_decl,
        $.directive,
      )),
      $.section_separator,
    ),

    // TODO: Any way to make sure that the two idents match?
    code: $ => seq(
      /%(\w)+?\{/,
      $.java_code,
      /%(\w)+?}/,
    ),

    macro_def: $ => seq(
      $.identifier,
      '=',
      $.regex,
    ),

    state_decl: $ => seq(
      '%state',
      repeatWithDelimiter1($.identifier, ','),
    ),

    directive: $ => seq(
      /%\w+/,
      optional(/.+/),
    ),

    rules: $ => repeat1($.rule),

    rule: $ => seq(
      optional($.state),
      $.regex,
      $.action,
    ),

    state: $ => seq(
      '<',
      repeatWithDelimiter($.identifier, ','),
      '>',
    ),

    regex: $ => choice(
      $.disjunction,
      $.term,
    ),

    disjunction: $ => seq(
      optional($.term),
      repeat1(seq('|', optional($.term))),
    ),

    term: $ => prec.right(repeat1(seq( // TODO: Is prec.right the correct choice here?
      choice(
        $.start_assertion,
        $.end_assertion,
        $.pattern_character,
        $.character_class,
        $.any_character,
        $.verbatim,
        $.macro,
        $._character_escape,
        $.group,
      ),
      optional(choice(
        $.zero_or_more,
        $.one_or_more,
        $.optional,
      )),
    ))),

    any_character: $ => '.',

    start_assertion: $ => '^',
    end_assertion: $ => '$',

    pattern_character: $ => new RegExp(`[^${SYNTAX_CHARS_ESCAPED}\\n]`),

    character_class: $ => seq(
      '[',
      optional('^'),
      repeat(choice(
        $.class_range,
        $._class_atom
      )),
      ']',
    ),

    class_range: $ => prec.right(1,
      seq($._class_atom, '-', $._class_atom),
    ),

    _class_atom: $ => choice(
      alias('-', $.class_character),
      $.class_character,
      $.verbatim,
      $.macro,
      alias('\\-', $.identity_escape),
      $._character_escape,
    ),

    class_character: $ => /[^\\\]\-]/, // NOT: \ ] or -

    group: $ => seq('(', $.regex, ')'),

    zero_or_more: quantifierRule($ => '*'),
    one_or_more: quantifierRule($ => '+'),
    optional: quantifierRule($ => '?'),

    verbatim: $ => seq(
      '"',
      repeat(choice(
        alias('\\"', $.identity_escape),
        /./,
      )),
      '"',
    ),

    macro: $ => seq(
      '{',
      $.identifier,
      '}',
    ),

    _character_escape: $ => choice(
      $.control_escape,
      $.control_letter_escape,
      $.digit_escape,
      $.identity_escape
    ),

    control_escape: $ => /\\[bntfr]/,

    control_letter_escape: $ => /\\\^C/,

    digit_escape: $ => choice(
      /\\\d{3}/,
      /\\x\d{2}/,
      /\\u\d{4}/,
    ),

    identity_escape: $ => token(seq('\\', /[^bntfrdxu]/)),

    action: $ => seq(
      '{',
      $.java_code,
      '}'
    ),

    // This should probably be /^%%/ but tree-sitter doesn't support assertions yet
    section_separator: $ => seq(
      /%%/,
      optional($.comment),
    ),

    identifier: $ => {
      const alpha = /[A-Za-z_]/
      const alpha_numeric = /[A-Za-z0-9_]/

      return token(seq(alpha, repeat(alpha_numeric)))
    },

    java_code: $ => 'hello', // TODO

    comment: $ => token(choice(
      /\/\/.*/, // slash comment
      // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),
  }
});

function repeatWithDelimiter1 (rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}

function repeatWithDelimiter (rule, delimiter) {
  return optional(repeatWithDelimiter1(rule, delimiter));
}
