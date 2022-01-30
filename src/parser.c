#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  aux_sym_code_token1 = 1,
  aux_sym_code_token2 = 2,
  anon_sym_EQ = 3,
  anon_sym_PERCENTstate = 4,
  anon_sym_COMMA = 5,
  aux_sym_directive_token1 = 6,
  aux_sym_directive_token2 = 7,
  anon_sym_LT = 8,
  anon_sym_GT = 9,
  anon_sym_PIPE = 10,
  sym_any_character = 11,
  anon_sym_CARET = 12,
  sym_end_assertion = 13,
  sym_pattern_character = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_DASH = 17,
  anon_sym_BSLASH_DASH = 18,
  sym_class_character = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  sym_zero_or_more = 22,
  sym_one_or_more = 23,
  sym_optional = 24,
  anon_sym_DQUOTE = 25,
  anon_sym_BSLASH_DQUOTE = 26,
  aux_sym_verbatim_token1 = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  sym_control_escape = 30,
  sym_control_letter_escape = 31,
  aux_sym_digit_escape_token1 = 32,
  aux_sym_digit_escape_token2 = 33,
  aux_sym_digit_escape_token3 = 34,
  sym_identity_escape = 35,
  aux_sym_section_separator_token1 = 36,
  sym_identifier = 37,
  sym_java_code = 38,
  sym_comment = 39,
  sym_source_file = 40,
  sym_user_code = 41,
  sym_directives = 42,
  sym_code = 43,
  sym_macro_def = 44,
  sym_state_decl = 45,
  sym_directive = 46,
  sym_rules = 47,
  sym_rule = 48,
  sym_state = 49,
  sym_regex = 50,
  sym_disjunction = 51,
  sym_term = 52,
  sym_start_assertion = 53,
  sym_character_class = 54,
  sym_class_range = 55,
  sym_group = 56,
  sym_verbatim = 57,
  sym_macro = 58,
  sym_digit_escape = 59,
  sym_action = 60,
  sym_section_separator = 61,
  aux_sym_directives_repeat1 = 62,
  aux_sym_state_decl_repeat1 = 63,
  aux_sym_rules_repeat1 = 64,
  aux_sym_disjunction_repeat1 = 65,
  aux_sym_term_repeat1 = 66,
  aux_sym_character_class_repeat1 = 67,
  aux_sym_verbatim_repeat1 = 68,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_code_token1] = "code_token1",
  [aux_sym_code_token2] = "code_token2",
  [anon_sym_EQ] = "=",
  [anon_sym_PERCENTstate] = "%state",
  [anon_sym_COMMA] = ",",
  [aux_sym_directive_token1] = "directive_token1",
  [aux_sym_directive_token2] = "directive_token2",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PIPE] = "|",
  [sym_any_character] = "any_character",
  [anon_sym_CARET] = "^",
  [sym_end_assertion] = "end_assertion",
  [sym_pattern_character] = "pattern_character",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_BSLASH_DASH] = "identity_escape",
  [sym_class_character] = "class_character",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_zero_or_more] = "zero_or_more",
  [sym_one_or_more] = "one_or_more",
  [sym_optional] = "optional",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_DQUOTE] = "identity_escape",
  [aux_sym_verbatim_token1] = "verbatim_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_control_escape] = "control_escape",
  [sym_control_letter_escape] = "control_letter_escape",
  [aux_sym_digit_escape_token1] = "digit_escape_token1",
  [aux_sym_digit_escape_token2] = "digit_escape_token2",
  [aux_sym_digit_escape_token3] = "digit_escape_token3",
  [sym_identity_escape] = "identity_escape",
  [aux_sym_section_separator_token1] = "section_separator_token1",
  [sym_identifier] = "identifier",
  [sym_java_code] = "java_code",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_user_code] = "user_code",
  [sym_directives] = "directives",
  [sym_code] = "code",
  [sym_macro_def] = "macro_def",
  [sym_state_decl] = "state_decl",
  [sym_directive] = "directive",
  [sym_rules] = "rules",
  [sym_rule] = "rule",
  [sym_state] = "state",
  [sym_regex] = "regex",
  [sym_disjunction] = "disjunction",
  [sym_term] = "term",
  [sym_start_assertion] = "start_assertion",
  [sym_character_class] = "character_class",
  [sym_class_range] = "class_range",
  [sym_group] = "group",
  [sym_verbatim] = "verbatim",
  [sym_macro] = "macro",
  [sym_digit_escape] = "digit_escape",
  [sym_action] = "action",
  [sym_section_separator] = "section_separator",
  [aux_sym_directives_repeat1] = "directives_repeat1",
  [aux_sym_state_decl_repeat1] = "state_decl_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
  [aux_sym_verbatim_repeat1] = "verbatim_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [aux_sym_code_token2] = aux_sym_code_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PERCENTstate] = anon_sym_PERCENTstate,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [aux_sym_directive_token2] = aux_sym_directive_token2,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_any_character] = sym_any_character,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_end_assertion] = sym_end_assertion,
  [sym_pattern_character] = sym_pattern_character,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BSLASH_DASH] = sym_identity_escape,
  [sym_class_character] = sym_class_character,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_zero_or_more] = sym_zero_or_more,
  [sym_one_or_more] = sym_one_or_more,
  [sym_optional] = sym_optional,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_DQUOTE] = sym_identity_escape,
  [aux_sym_verbatim_token1] = aux_sym_verbatim_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_control_escape] = sym_control_escape,
  [sym_control_letter_escape] = sym_control_letter_escape,
  [aux_sym_digit_escape_token1] = aux_sym_digit_escape_token1,
  [aux_sym_digit_escape_token2] = aux_sym_digit_escape_token2,
  [aux_sym_digit_escape_token3] = aux_sym_digit_escape_token3,
  [sym_identity_escape] = sym_identity_escape,
  [aux_sym_section_separator_token1] = aux_sym_section_separator_token1,
  [sym_identifier] = sym_identifier,
  [sym_java_code] = sym_java_code,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_user_code] = sym_user_code,
  [sym_directives] = sym_directives,
  [sym_code] = sym_code,
  [sym_macro_def] = sym_macro_def,
  [sym_state_decl] = sym_state_decl,
  [sym_directive] = sym_directive,
  [sym_rules] = sym_rules,
  [sym_rule] = sym_rule,
  [sym_state] = sym_state,
  [sym_regex] = sym_regex,
  [sym_disjunction] = sym_disjunction,
  [sym_term] = sym_term,
  [sym_start_assertion] = sym_start_assertion,
  [sym_character_class] = sym_character_class,
  [sym_class_range] = sym_class_range,
  [sym_group] = sym_group,
  [sym_verbatim] = sym_verbatim,
  [sym_macro] = sym_macro,
  [sym_digit_escape] = sym_digit_escape,
  [sym_action] = sym_action,
  [sym_section_separator] = sym_section_separator,
  [aux_sym_directives_repeat1] = aux_sym_directives_repeat1,
  [aux_sym_state_decl_repeat1] = aux_sym_state_decl_repeat1,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_disjunction_repeat1] = aux_sym_disjunction_repeat1,
  [aux_sym_term_repeat1] = aux_sym_term_repeat1,
  [aux_sym_character_class_repeat1] = aux_sym_character_class_repeat1,
  [aux_sym_verbatim_repeat1] = aux_sym_verbatim_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTstate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_any_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_end_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [sym_class_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_verbatim_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_control_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_control_letter_escape] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_digit_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_digit_escape_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_digit_escape_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_identity_escape] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_section_separator_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_java_code] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_user_code] = {
    .visible = true,
    .named = true,
  },
  [sym_directives] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_def] = {
    .visible = true,
    .named = true,
  },
  [sym_state_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_state] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_start_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_character_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_range] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_digit_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_section_separator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_directives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_class_character,
  },
  [2] = {
    [0] = sym_class_character,
    [2] = sym_class_character,
  },
  [3] = {
    [2] = sym_class_character,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_pattern_character_character_set_1(int32_t c) {
  return (c < '('
    ? (c < '"'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '"' || c == '$'))
    : (c <= '+' || (c < '['
      ? (c < '?'
        ? c == '.'
        : c <= '?')
      : (c <= '^' || (c >= '{' && c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == '^') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(98);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '^') ADVANCE(59);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '^') ADVANCE(59);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(84);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == '^') ADVANCE(59);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(73);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(74);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '^') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != 'd') ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '^') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != 'd') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == '^') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != 'd') ADVANCE(94);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '^') ADVANCE(59);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < ')' || '+' < lookahead) &&
          lookahead != '?' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_code_token2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENTstate);
      if (lookahead == '{') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PERCENTstate);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == '{') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '{') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '{') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '{') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_any_character);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_pattern_character);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_pattern_character);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (!sym_pattern_character_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_pattern_character);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_pattern_character);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(65);
      if (!sym_pattern_character_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_pattern_character);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(66);
      if (!sym_pattern_character_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_pattern_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '^') ADVANCE(59);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(72);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_zero_or_more);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_verbatim_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_verbatim_token1);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_verbatim_token1);
      if (lookahead == '"') ADVANCE(82);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_verbatim_token1);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_control_letter_escape);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_digit_escape_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_digit_escape_token2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_digit_escape_token3);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identity_escape);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identity_escape);
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identity_escape);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_section_separator_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_java_code);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_java_code);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PERCENTstate] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_directive_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_any_character] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_zero_or_more] = ACTIONS(1),
    [sym_one_or_more] = ACTIONS(1),
    [sym_optional] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_control_escape] = ACTIONS(1),
    [sym_control_letter_escape] = ACTIONS(1),
    [aux_sym_digit_escape_token1] = ACTIONS(1),
    [aux_sym_digit_escape_token2] = ACTIONS(1),
    [aux_sym_digit_escape_token3] = ACTIONS(1),
    [sym_identity_escape] = ACTIONS(1),
    [aux_sym_section_separator_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_java_code] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(124),
    [sym_user_code] = STATE(61),
    [sym_java_code] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_comment,
    STATE(11), 1,
      sym_state,
    STATE(17), 1,
      aux_sym_term_repeat1,
    STATE(79), 1,
      sym_disjunction,
    STATE(96), 1,
      sym_term,
    STATE(98), 1,
      aux_sym_disjunction_repeat1,
    STATE(106), 1,
      sym_regex,
    STATE(4), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    ACTIONS(25), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(13), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [71] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_comment,
    STATE(11), 1,
      sym_state,
    STATE(17), 1,
      aux_sym_term_repeat1,
    STATE(79), 1,
      sym_disjunction,
    STATE(96), 1,
      sym_term,
    STATE(98), 1,
      aux_sym_disjunction_repeat1,
    STATE(106), 1,
      sym_regex,
    STATE(110), 1,
      sym_rules,
    STATE(2), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    ACTIONS(25), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(13), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [142] = 19,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
      anon_sym_PIPE,
    ACTIONS(40), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_state,
    STATE(17), 1,
      aux_sym_term_repeat1,
    STATE(79), 1,
      sym_disjunction,
    STATE(96), 1,
      sym_term,
    STATE(98), 1,
      aux_sym_disjunction_repeat1,
    STATE(106), 1,
      sym_regex,
    STATE(4), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    ACTIONS(55), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(37), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [213] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_CARET,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      aux_sym_term_repeat1,
    STATE(73), 1,
      sym_term,
    ACTIONS(72), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(58), 6,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      aux_sym_section_separator_token1,
      sym_identifier,
    ACTIONS(60), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(13), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [267] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_CARET,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym_term_repeat1,
    ACTIONS(94), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(74), 6,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      aux_sym_section_separator_token1,
      sym_identifier,
    ACTIONS(76), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(13), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [318] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_CARET,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym_term_repeat1,
    ACTIONS(72), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(60), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    ACTIONS(97), 6,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      aux_sym_section_separator_token1,
      sym_identifier,
    STATE(13), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [369] = 15,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_CARET,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    STATE(7), 1,
      aux_sym_term_repeat1,
    STATE(74), 1,
      sym_term,
    STATE(79), 1,
      sym_disjunction,
    STATE(81), 1,
      aux_sym_disjunction_repeat1,
    STATE(88), 1,
      sym_regex,
    ACTIONS(72), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(60), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(13), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [427] = 15,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      aux_sym_term_repeat1,
    STATE(79), 1,
      sym_disjunction,
    STATE(102), 1,
      sym_term,
    STATE(103), 1,
      aux_sym_disjunction_repeat1,
    STATE(120), 1,
      sym_regex,
    ACTIONS(25), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(13), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [485] = 15,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      aux_sym_term_repeat1,
    STATE(79), 1,
      sym_disjunction,
    STATE(102), 1,
      sym_term,
    STATE(103), 1,
      aux_sym_disjunction_repeat1,
    STATE(117), 1,
      sym_regex,
    ACTIONS(25), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(13), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [543] = 15,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_term_repeat1,
    STATE(79), 1,
      sym_disjunction,
    STATE(96), 1,
      sym_term,
    STATE(98), 1,
      aux_sym_disjunction_repeat1,
    STATE(108), 1,
      sym_regex,
    ACTIONS(25), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(13), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [601] = 12,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_term_repeat1,
    STATE(73), 1,
      sym_term,
    ACTIONS(58), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(25), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(13), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [651] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(105), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(103), 20,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [682] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(107), 23,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [711] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(109), 23,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [740] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym_term_repeat1,
    ACTIONS(74), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(129), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(111), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [787] = 11,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_term_repeat1,
    ACTIONS(97), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(25), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(13), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [834] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(132), 23,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [863] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(134), 23,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [892] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(136), 23,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [921] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(138), 23,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [950] = 12,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym_term_repeat1,
    STATE(73), 1,
      sym_term,
    ACTIONS(25), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    ACTIONS(13), 6,
      sym_any_character,
      sym_end_assertion,
      sym_pattern_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
    STATE(32), 6,
      sym_start_assertion,
      sym_character_class,
      sym_group,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
  [999] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(143), 23,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [1028] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(145), 23,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [1057] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(147), 23,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [1086] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(74), 20,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
      aux_sym_section_separator_token1,
      sym_identifier,
  [1112] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(147), 19,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1137] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(145), 19,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1162] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(107), 19,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1187] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(109), 19,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1212] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(132), 19,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1237] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(149), 3,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
    ACTIONS(103), 16,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1264] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(136), 19,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1289] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(143), 19,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1314] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(138), 19,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1339] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(134), 19,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_zero_or_more,
      sym_one_or_more,
      sym_optional,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1364] = 10,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_CARET,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    STATE(40), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(60), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(157), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1404] = 10,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(44), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(60), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(157), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1444] = 9,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(41), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(60), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(157), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1481] = 9,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(60), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(157), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1518] = 9,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(60), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(157), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1555] = 9,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(46), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(60), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(157), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1592] = 9,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(177), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    STATE(43), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(189), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(60), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(180), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1629] = 9,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(60), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(157), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1666] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 16,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1691] = 9,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_class_range,
      aux_sym_character_class_repeat1,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(60), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(157), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1728] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 16,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1753] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 16,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1778] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 16,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1800] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(74), 16,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1822] = 2,
    ACTIONS(210), 1,
      sym_comment,
    ACTIONS(208), 16,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1844] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(212), 16,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1866] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(214), 16,
      anon_sym_LT,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1888] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 15,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1909] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(218), 15,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1930] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(220), 15,
      anon_sym_PIPE,
      sym_any_character,
      anon_sym_CARET,
      sym_end_assertion,
      sym_pattern_character,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [1951] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_DASH,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(63), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(224), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [1981] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(163), 3,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
    STATE(59), 3,
      sym_verbatim,
      sym_macro,
      sym_digit_escape,
    ACTIONS(228), 5,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      sym_control_escape,
      sym_control_letter_escape,
      sym_identity_escape,
  [2011] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(230), 12,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2029] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DASH,
    ACTIONS(232), 11,
      anon_sym_RBRACK,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2049] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_code_token1,
    ACTIONS(238), 1,
      anon_sym_PERCENTstate,
    ACTIONS(240), 1,
      aux_sym_directive_token1,
    ACTIONS(242), 1,
      aux_sym_section_separator_token1,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(3), 1,
      sym_directives,
    STATE(52), 1,
      sym_section_separator,
    STATE(70), 5,
      sym_code,
      sym_macro_def,
      sym_state_decl,
      sym_directive,
      aux_sym_directives_repeat1,
  [2081] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(109), 12,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2099] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(246), 12,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2117] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_DASH,
    ACTIONS(248), 11,
      anon_sym_RBRACK,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2137] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(252), 12,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2155] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(254), 12,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2173] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(136), 12,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2191] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(138), 12,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2209] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(134), 12,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BSLASH_DASH,
      sym_class_character,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      sym_control_escape,
      sym_control_letter_escape,
      aux_sym_digit_escape_token1,
      aux_sym_digit_escape_token2,
      aux_sym_digit_escape_token3,
      sym_identity_escape,
  [2227] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_code_token1,
    ACTIONS(238), 1,
      anon_sym_PERCENTstate,
    ACTIONS(240), 1,
      aux_sym_directive_token1,
    ACTIONS(242), 1,
      aux_sym_section_separator_token1,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(49), 1,
      sym_section_separator,
    STATE(71), 5,
      sym_code,
      sym_macro_def,
      sym_state_decl,
      sym_directive,
      aux_sym_directives_repeat1,
  [2256] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_code_token1,
    ACTIONS(259), 1,
      anon_sym_PERCENTstate,
    ACTIONS(262), 1,
      aux_sym_directive_token1,
    ACTIONS(265), 1,
      aux_sym_section_separator_token1,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(71), 5,
      sym_code,
      sym_macro_def,
      sym_state_decl,
      sym_directive,
      aux_sym_directives_repeat1,
  [2282] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_state_decl_repeat1,
    ACTIONS(272), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(270), 4,
      aux_sym_code_token1,
      anon_sym_GT,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(277), 6,
      aux_sym_code_token1,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(283), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(281), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_state_decl_repeat1,
    ACTIONS(289), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(287), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_PIPE,
    STATE(76), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(279), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(277), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(270), 5,
      aux_sym_code_token1,
      anon_sym_COMMA,
      anon_sym_GT,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PIPE,
    STATE(76), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(298), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(296), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(281), 5,
      aux_sym_code_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_state_decl_repeat1,
    ACTIONS(302), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(300), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PIPE,
    STATE(76), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(306), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(304), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2462] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_directive_token2,
    ACTIONS(308), 5,
      aux_sym_code_token1,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2476] = 3,
    ACTIONS(314), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(312), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(316), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(320), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(322), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(326), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_PERCENTstate,
      aux_sym_directive_token1,
    ACTIONS(330), 3,
      aux_sym_code_token1,
      aux_sym_section_separator_token1,
      sym_identifier,
  [2554] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_verbatim_repeat1,
    ACTIONS(336), 2,
      anon_sym_BSLASH_DQUOTE,
      aux_sym_verbatim_token1,
  [2568] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_verbatim_repeat1,
    ACTIONS(341), 2,
      anon_sym_BSLASH_DQUOTE,
      aux_sym_verbatim_token1,
  [2582] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_verbatim_repeat1,
    ACTIONS(341), 2,
      anon_sym_BSLASH_DQUOTE,
      aux_sym_verbatim_token1,
  [2596] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_verbatim_repeat1,
    ACTIONS(347), 2,
      anon_sym_BSLASH_DQUOTE,
      aux_sym_verbatim_token1,
  [2610] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_verbatim_repeat1,
    ACTIONS(341), 2,
      anon_sym_BSLASH_DQUOTE,
      aux_sym_verbatim_token1,
  [2624] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_verbatim_repeat1,
    ACTIONS(353), 2,
      anon_sym_BSLASH_DQUOTE,
      aux_sym_verbatim_token1,
  [2638] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      aux_sym_verbatim_repeat1,
    ACTIONS(357), 2,
      anon_sym_BSLASH_DQUOTE,
      aux_sym_verbatim_token1,
  [2652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(99), 1,
      aux_sym_disjunction_repeat1,
  [2665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      aux_sym_disjunction_repeat1,
  [2678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      aux_sym_disjunction_repeat1,
  [2691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      aux_sym_disjunction_repeat1,
  [2704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_GT,
    STATE(72), 1,
      aux_sym_state_decl_repeat1,
  [2717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_GT,
    STATE(100), 1,
      aux_sym_state_decl_repeat1,
  [2730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_PIPE,
    STATE(104), 1,
      aux_sym_disjunction_repeat1,
  [2743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym_disjunction_repeat1,
  [2756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym_disjunction_repeat1,
  [2769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym_disjunction_repeat1,
  [2782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_action,
  [2792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_GT,
    ACTIONS(377), 1,
      sym_identifier,
  [2802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_action,
  [2812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_section_separator_token1,
    STATE(87), 1,
      sym_section_separator,
  [2822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [2829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_EQ,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_code_token2,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_identifier,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_java_code,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_identifier,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [2899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_java_code,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_identifier,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 267,
  [SMALL_STATE(7)] = 318,
  [SMALL_STATE(8)] = 369,
  [SMALL_STATE(9)] = 427,
  [SMALL_STATE(10)] = 485,
  [SMALL_STATE(11)] = 543,
  [SMALL_STATE(12)] = 601,
  [SMALL_STATE(13)] = 651,
  [SMALL_STATE(14)] = 682,
  [SMALL_STATE(15)] = 711,
  [SMALL_STATE(16)] = 740,
  [SMALL_STATE(17)] = 787,
  [SMALL_STATE(18)] = 834,
  [SMALL_STATE(19)] = 863,
  [SMALL_STATE(20)] = 892,
  [SMALL_STATE(21)] = 921,
  [SMALL_STATE(22)] = 950,
  [SMALL_STATE(23)] = 999,
  [SMALL_STATE(24)] = 1028,
  [SMALL_STATE(25)] = 1057,
  [SMALL_STATE(26)] = 1086,
  [SMALL_STATE(27)] = 1112,
  [SMALL_STATE(28)] = 1137,
  [SMALL_STATE(29)] = 1162,
  [SMALL_STATE(30)] = 1187,
  [SMALL_STATE(31)] = 1212,
  [SMALL_STATE(32)] = 1237,
  [SMALL_STATE(33)] = 1264,
  [SMALL_STATE(34)] = 1289,
  [SMALL_STATE(35)] = 1314,
  [SMALL_STATE(36)] = 1339,
  [SMALL_STATE(37)] = 1364,
  [SMALL_STATE(38)] = 1404,
  [SMALL_STATE(39)] = 1444,
  [SMALL_STATE(40)] = 1481,
  [SMALL_STATE(41)] = 1518,
  [SMALL_STATE(42)] = 1555,
  [SMALL_STATE(43)] = 1592,
  [SMALL_STATE(44)] = 1629,
  [SMALL_STATE(45)] = 1666,
  [SMALL_STATE(46)] = 1691,
  [SMALL_STATE(47)] = 1728,
  [SMALL_STATE(48)] = 1753,
  [SMALL_STATE(49)] = 1778,
  [SMALL_STATE(50)] = 1800,
  [SMALL_STATE(51)] = 1822,
  [SMALL_STATE(52)] = 1844,
  [SMALL_STATE(53)] = 1866,
  [SMALL_STATE(54)] = 1888,
  [SMALL_STATE(55)] = 1909,
  [SMALL_STATE(56)] = 1930,
  [SMALL_STATE(57)] = 1951,
  [SMALL_STATE(58)] = 1981,
  [SMALL_STATE(59)] = 2011,
  [SMALL_STATE(60)] = 2029,
  [SMALL_STATE(61)] = 2049,
  [SMALL_STATE(62)] = 2081,
  [SMALL_STATE(63)] = 2099,
  [SMALL_STATE(64)] = 2117,
  [SMALL_STATE(65)] = 2137,
  [SMALL_STATE(66)] = 2155,
  [SMALL_STATE(67)] = 2173,
  [SMALL_STATE(68)] = 2191,
  [SMALL_STATE(69)] = 2209,
  [SMALL_STATE(70)] = 2227,
  [SMALL_STATE(71)] = 2256,
  [SMALL_STATE(72)] = 2282,
  [SMALL_STATE(73)] = 2302,
  [SMALL_STATE(74)] = 2318,
  [SMALL_STATE(75)] = 2337,
  [SMALL_STATE(76)] = 2356,
  [SMALL_STATE(77)] = 2375,
  [SMALL_STATE(78)] = 2390,
  [SMALL_STATE(79)] = 2409,
  [SMALL_STATE(80)] = 2424,
  [SMALL_STATE(81)] = 2443,
  [SMALL_STATE(82)] = 2462,
  [SMALL_STATE(83)] = 2476,
  [SMALL_STATE(84)] = 2489,
  [SMALL_STATE(85)] = 2502,
  [SMALL_STATE(86)] = 2515,
  [SMALL_STATE(87)] = 2528,
  [SMALL_STATE(88)] = 2541,
  [SMALL_STATE(89)] = 2554,
  [SMALL_STATE(90)] = 2568,
  [SMALL_STATE(91)] = 2582,
  [SMALL_STATE(92)] = 2596,
  [SMALL_STATE(93)] = 2610,
  [SMALL_STATE(94)] = 2624,
  [SMALL_STATE(95)] = 2638,
  [SMALL_STATE(96)] = 2652,
  [SMALL_STATE(97)] = 2665,
  [SMALL_STATE(98)] = 2678,
  [SMALL_STATE(99)] = 2691,
  [SMALL_STATE(100)] = 2704,
  [SMALL_STATE(101)] = 2717,
  [SMALL_STATE(102)] = 2730,
  [SMALL_STATE(103)] = 2743,
  [SMALL_STATE(104)] = 2756,
  [SMALL_STATE(105)] = 2769,
  [SMALL_STATE(106)] = 2782,
  [SMALL_STATE(107)] = 2792,
  [SMALL_STATE(108)] = 2802,
  [SMALL_STATE(109)] = 2812,
  [SMALL_STATE(110)] = 2822,
  [SMALL_STATE(111)] = 2829,
  [SMALL_STATE(112)] = 2836,
  [SMALL_STATE(113)] = 2843,
  [SMALL_STATE(114)] = 2850,
  [SMALL_STATE(115)] = 2857,
  [SMALL_STATE(116)] = 2864,
  [SMALL_STATE(117)] = 2871,
  [SMALL_STATE(118)] = 2878,
  [SMALL_STATE(119)] = 2885,
  [SMALL_STATE(120)] = 2892,
  [SMALL_STATE(121)] = 2899,
  [SMALL_STATE(122)] = 2906,
  [SMALL_STATE(123)] = 2913,
  [SMALL_STATE(124)] = 2920,
  [SMALL_STATE(125)] = 2927,
  [SMALL_STATE(126)] = 2934,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(107),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(22),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(32),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(29),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(38),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(95),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(114),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(30),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(13),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(14),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(37),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(92),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(125),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(15),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_assertion, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit_escape, 1),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(32),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(29),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(38),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(9),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(95),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(114),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(30),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim, 3),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disjunction_repeat1, 1), SHIFT_REPEAT(114),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(64),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(60),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(94),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(126),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(62),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directives, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_separator, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directives, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_separator, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3, .production_id = 3),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(115),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(113),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(82),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directives_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(111),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_decl_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_decl_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_decl_repeat1, 2), SHIFT_REPEAT(118),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_decl, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_decl, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disjunction, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_decl, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_decl, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disjunction, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_separator, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_separator, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_code, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_code, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_def, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_repeat1, 2), SHIFT_REPEAT(89),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(12),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [409] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jlex(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
