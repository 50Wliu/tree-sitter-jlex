module.exports = grammar({
  name: 'jlex',

  extras: $ => [
		$.comment,
		/[\s\uFEFF\u2060\u200B\u00A0]/, // whitespace
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
      /%(\w)+?{/,
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

    regex: $ => 'hello', // TODO

    action: $ => seq(
      '{',
      $.java_code,
      '}'
    ),

    section_separator: $ => seq(
      /^%%/,
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
