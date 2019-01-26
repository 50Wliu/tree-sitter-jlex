#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 130
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH = 1,
  aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_RBRACE_SLASH = 2,
  anon_sym_EQ = 3,
  anon_sym_PERCENTstate = 4,
  anon_sym_COMMA = 5,
  aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH = 6,
  aux_sym_SLASH_DOT_PLUS_SLASH = 7,
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
  aux_sym_SLASH_DOT_SLASH = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  sym_control_escape = 30,
  sym_control_letter_escape = 31,
  aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH = 32,
  aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH = 33,
  aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH = 34,
  sym_identity_escape = 35,
  aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH = 36,
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
  alias_sym_class_character = 69,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = "/%(\\w)+?{/",
  [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_RBRACE_SLASH] = "/%(\\w)+?}/",
  [anon_sym_EQ] = "=",
  [anon_sym_PERCENTstate] = "%state",
  [anon_sym_COMMA] = ",",
  [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = "/%\\w+/",
  [aux_sym_SLASH_DOT_PLUS_SLASH] = "/.+/",
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
  [aux_sym_SLASH_DOT_SLASH] = "/./",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_control_escape] = "control_escape",
  [sym_control_letter_escape] = "control_letter_escape",
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = "/\\\\\\d{3}/",
  [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = "/\\\\x\\d{2}/",
  [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = "/\\\\u\\d{4}/",
  [sym_identity_escape] = "identity_escape",
  [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = "/^%%/",
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
  [alias_sym_class_character] = "class_character",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_RBRACE_SLASH] = {
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
  [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DOT_PLUS_SLASH] = {
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
  [aux_sym_SLASH_DOT_SLASH] = {
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
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_identity_escape] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = {
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
  [alias_sym_class_character] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_class_character,
  },
  [2] = {
    [0] = alias_sym_class_character,
    [2] = alias_sym_class_character,
  },
  [3] = {
    [2] = alias_sym_class_character,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(27);
      if (lookahead == '>')
        ADVANCE(28);
      if (lookahead == '?')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(31);
      if (lookahead == ']')
        ADVANCE(49);
      if (lookahead == '^')
        ADVANCE(50);
      if (lookahead == 'h')
        ADVANCE(53);
      if (lookahead == '{')
        ADVANCE(59);
      if (lookahead == '|')
        ADVANCE(60);
      if (lookahead == '}')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 4:
      if (lookahead == 's')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(6);
      if (lookahead == 't')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '{')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_RBRACE_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(6);
      if (lookahead == 'a')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(6);
      if (lookahead == 't')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(6);
      if (lookahead == 'e')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PERCENTstate);
      if (lookahead == '?')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_zero_or_more);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_any_character);
      END_STATE();
    case 21:
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(24);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      if (lookahead == '\"')
        ADVANCE(32);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == 'x')
        ADVANCE(41);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != 'd')
        ADVANCE(48);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BSLASH_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identity_escape);
      if (lookahead == 'C')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_control_letter_escape);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_control_escape);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identity_escape);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identity_escape);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '%')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '%')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_java_code);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 62:
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == 'h')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == 'e')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'l')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'o')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_java_code);
      END_STATE();
    case 68:
      if (lookahead == '%')
        ADVANCE(69);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 69:
      if (lookahead == 's')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 't')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == '{')
        ADVANCE(7);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 't')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PERCENTstate);
      if (lookahead == '?')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '%')
        ADVANCE(51);
      END_STATE();
    case 78:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(78);
      END_STATE();
    case 79:
      if (lookahead == '\n')
        SKIP(79);
      if (lookahead == '%')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == '^')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(97);
      if (lookahead != 0)
        ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(82);
      if (lookahead == 't')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(82);
      if (lookahead == 'a')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(82);
      if (lookahead == 't')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(82);
      if (lookahead == 'e')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PERCENTstate);
      if (lookahead == '?')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(91);
      if (lookahead == '/')
        ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(22);
      if (lookahead == '*')
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(22);
      if (lookahead == '*')
        ADVANCE(92);
      if (lookahead == '/')
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '%')
        ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '%')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(90);
      if (lookahead == '^')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(98);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == '<')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(100);
      if (lookahead == '^')
        ADVANCE(101);
      if (lookahead == '{')
        ADVANCE(59);
      if (lookahead == '|')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(102);
      if ((lookahead < '(' || lookahead > '+') &&
          lookahead != '?' &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_pattern_character);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 100:
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == 'x')
        ADVANCE(41);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != 'd')
        ADVANCE(48);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_pattern_character);
      END_STATE();
    case 103:
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(104);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == '?')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == '}')
        ADVANCE(8);
      END_STATE();
    case 108:
      if (lookahead == '\n')
        SKIP(108);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == '?')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(100);
      if (lookahead == '^')
        ADVANCE(101);
      if (lookahead == '{')
        ADVANCE(59);
      if (lookahead == '|')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '^') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 110:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(111);
      if (lookahead == '\\')
        ADVANCE(112);
      if (lookahead == ']')
        ADVANCE(49);
      if (lookahead == '^')
        ADVANCE(101);
      if (lookahead == '{')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_class_character);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 112:
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == 'u')
        ADVANCE(36);
      if (lookahead == 'x')
        ADVANCE(41);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != 'd')
        ADVANCE(48);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_class_character);
      END_STATE();
    case 114:
      if (lookahead == '\n')
        SKIP(114);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(115);
      if (lookahead == '\\')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(117);
      if (lookahead != 0)
        ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(32);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      END_STATE();
    case 118:
      if (lookahead == '%')
        ADVANCE(69);
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(59);
      if (lookahead == '|')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 119:
      if (lookahead == '\n')
        SKIP(119);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(120);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(17);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(99);
      if (lookahead == '?')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(100);
      if (lookahead == '^')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(59);
      if (lookahead == '|')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '(' || lookahead > '+') &&
          (lookahead < 'A' || lookahead > '_') &&
          (lookahead < 'a' || lookahead > '}'))
        ADVANCE(102);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_pattern_character);
      if (lookahead == 's')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_pattern_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 122:
      if (lookahead == '%')
        ADVANCE(69);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    case 123:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(111);
      if (lookahead == '\\')
        ADVANCE(112);
      if (lookahead == ']')
        ADVANCE(49);
      if (lookahead == '{')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(113);
      END_STATE();
    case 124:
      if (lookahead == ')')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(124);
      END_STATE();
    case 125:
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(125);
      END_STATE();
    case 126:
      if (lookahead == '%')
        ADVANCE(69);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(58);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 78},
  [4] = {.lex_state = 68},
  [5] = {.lex_state = 68},
  [6] = {.lex_state = 68},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 79},
  [10] = {.lex_state = 98},
  [11] = {.lex_state = 103},
  [12] = {.lex_state = 98},
  [13] = {.lex_state = 98},
  [14] = {.lex_state = 68},
  [15] = {.lex_state = 68},
  [16] = {.lex_state = 104},
  [17] = {.lex_state = 68},
  [18] = {.lex_state = 68},
  [19] = {.lex_state = 98},
  [20] = {.lex_state = 108},
  [21] = {.lex_state = 109},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 108},
  [24] = {.lex_state = 108},
  [25] = {.lex_state = 110},
  [26] = {.lex_state = 108},
  [27] = {.lex_state = 114},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 108},
  [30] = {.lex_state = 78},
  [31] = {.lex_state = 108},
  [32] = {.lex_state = 118},
  [33] = {.lex_state = 118},
  [34] = {.lex_state = 118},
  [35] = {.lex_state = 98},
  [36] = {.lex_state = 118},
  [37] = {.lex_state = 108},
  [38] = {.lex_state = 98},
  [39] = {.lex_state = 68},
  [40] = {.lex_state = 68},
  [41] = {.lex_state = 68},
  [42] = {.lex_state = 68},
  [43] = {.lex_state = 119},
  [44] = {.lex_state = 119},
  [45] = {.lex_state = 119},
  [46] = {.lex_state = 110},
  [47] = {.lex_state = 108},
  [48] = {.lex_state = 114},
  [49] = {.lex_state = 68},
  [50] = {.lex_state = 119},
  [51] = {.lex_state = 68},
  [52] = {.lex_state = 122},
  [53] = {.lex_state = 122},
  [54] = {.lex_state = 119},
  [55] = {.lex_state = 108},
  [56] = {.lex_state = 109},
  [57] = {.lex_state = 118},
  [58] = {.lex_state = 108},
  [59] = {.lex_state = 123},
  [60] = {.lex_state = 108},
  [61] = {.lex_state = 123},
  [62] = {.lex_state = 123},
  [63] = {.lex_state = 114},
  [64] = {.lex_state = 68},
  [65] = {.lex_state = 123},
  [66] = {.lex_state = 123},
  [67] = {.lex_state = 108},
  [68] = {.lex_state = 124},
  [69] = {.lex_state = 124},
  [70] = {.lex_state = 124},
  [71] = {.lex_state = 108},
  [72] = {.lex_state = 108},
  [73] = {.lex_state = 114},
  [74] = {.lex_state = 125},
  [75] = {.lex_state = 118},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 98},
  [78] = {.lex_state = 118},
  [79] = {.lex_state = 98},
  [80] = {.lex_state = 118},
  [81] = {.lex_state = 108},
  [82] = {.lex_state = 126},
  [83] = {.lex_state = 68},
  [84] = {.lex_state = 119},
  [85] = {.lex_state = 123},
  [86] = {.lex_state = 119},
  [87] = {.lex_state = 123},
  [88] = {.lex_state = 124},
  [89] = {.lex_state = 119},
  [90] = {.lex_state = 114},
  [91] = {.lex_state = 125},
  [92] = {.lex_state = 122},
  [93] = {.lex_state = 122},
  [94] = {.lex_state = 119},
  [95] = {.lex_state = 108},
  [96] = {.lex_state = 109},
  [97] = {.lex_state = 108},
  [98] = {.lex_state = 123},
  [99] = {.lex_state = 123},
  [100] = {.lex_state = 123},
  [101] = {.lex_state = 123},
  [102] = {.lex_state = 114},
  [103] = {.lex_state = 125},
  [104] = {.lex_state = 123},
  [105] = {.lex_state = 108},
  [106] = {.lex_state = 124},
  [107] = {.lex_state = 124},
  [108] = {.lex_state = 108},
  [109] = {.lex_state = 108},
  [110] = {.lex_state = 114},
  [111] = {.lex_state = 108},
  [112] = {.lex_state = 98},
  [113] = {.lex_state = 125},
  [114] = {.lex_state = 119},
  [115] = {.lex_state = 123},
  [116] = {.lex_state = 119},
  [117] = {.lex_state = 119},
  [118] = {.lex_state = 119},
  [119] = {.lex_state = 108},
  [120] = {.lex_state = 109},
  [121] = {.lex_state = 108},
  [122] = {.lex_state = 123},
  [123] = {.lex_state = 123},
  [124] = {.lex_state = 123},
  [125] = {.lex_state = 123},
  [126] = {.lex_state = 123},
  [127] = {.lex_state = 123},
  [128] = {.lex_state = 98},
  [129] = {.lex_state = 119},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_RBRACE_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PERCENTstate] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_any_character] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(3),
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
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(1),
    [sym_identity_escape] = ACTIONS(3),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [sym_java_code] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_user_code] = STATE(4),
    [sym_java_code] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym_section_separator] = STATE(6),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
  },
  [4] = {
    [sym_directives] = STATE(12),
    [sym_code] = STATE(14),
    [sym_macro_def] = STATE(14),
    [sym_state_decl] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_section_separator] = STATE(13),
    [aux_sym_directives_repeat1] = STATE(14),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(13),
    [anon_sym_PERCENTstate] = ACTIONS(15),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(7),
  },
  [5] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(23),
    [anon_sym_PERCENTstate] = ACTIONS(25),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
    [sym_comment] = ACTIONS(27),
  },
  [6] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(30),
    [anon_sym_PERCENTstate] = ACTIONS(32),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(7),
  },
  [7] = {
    [sym_java_code] = ACTIONS(34),
    [sym_comment] = ACTIONS(7),
  },
  [8] = {
    [sym_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(7),
  },
  [9] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(38),
    [anon_sym_PERCENTstate] = ACTIONS(38),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(42),
  },
  [10] = {
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(25),
    [sym_any_character] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(25),
    [sym_end_assertion] = ACTIONS(25),
    [sym_pattern_character] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_control_escape] = ACTIONS(25),
    [sym_control_letter_escape] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(25),
    [sym_identity_escape] = ACTIONS(25),
    [sym_comment] = ACTIONS(44),
  },
  [11] = {
    [anon_sym_EQ] = ACTIONS(47),
    [sym_comment] = ACTIONS(7),
  },
  [12] = {
    [sym_rules] = STATE(30),
    [sym_rule] = STATE(35),
    [sym_state] = STATE(31),
    [sym_regex] = STATE(32),
    [sym_disjunction] = STATE(33),
    [sym_term] = STATE(34),
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_rules_repeat1] = STATE(35),
    [aux_sym_disjunction_repeat1] = STATE(36),
    [aux_sym_term_repeat1] = STATE(37),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_any_character] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_end_assertion] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(65),
    [sym_identity_escape] = ACTIONS(53),
    [sym_comment] = ACTIONS(42),
  },
  [13] = {
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [sym_any_character] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(67),
    [sym_end_assertion] = ACTIONS(67),
    [sym_pattern_character] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_control_escape] = ACTIONS(67),
    [sym_control_letter_escape] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(67),
    [sym_identity_escape] = ACTIONS(67),
    [sym_comment] = ACTIONS(42),
  },
  [14] = {
    [sym_code] = STATE(39),
    [sym_macro_def] = STATE(39),
    [sym_state_decl] = STATE(39),
    [sym_directive] = STATE(39),
    [sym_section_separator] = STATE(38),
    [aux_sym_directives_repeat1] = STATE(39),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(13),
    [anon_sym_PERCENTstate] = ACTIONS(15),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(7),
  },
  [15] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(69),
    [anon_sym_PERCENTstate] = ACTIONS(71),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(71),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(7),
  },
  [16] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_RBRACE_SLASH] = ACTIONS(73),
    [sym_comment] = ACTIONS(7),
  },
  [17] = {
    [aux_sym_state_decl_repeat1] = STATE(42),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(75),
    [anon_sym_PERCENTstate] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(79),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [sym_comment] = ACTIONS(7),
  },
  [18] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(81),
    [anon_sym_PERCENTstate] = ACTIONS(83),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(81),
    [sym_identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(7),
  },
  [19] = {
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [sym_any_character] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
    [sym_end_assertion] = ACTIONS(71),
    [sym_pattern_character] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [sym_control_escape] = ACTIONS(71),
    [sym_control_letter_escape] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(71),
    [sym_identity_escape] = ACTIONS(71),
    [sym_comment] = ACTIONS(42),
  },
  [20] = {
    [sym_regex] = STATE(51),
    [sym_disjunction] = STATE(33),
    [sym_term] = STATE(52),
    [sym_start_assertion] = STATE(44),
    [sym_character_class] = STATE(44),
    [sym_group] = STATE(44),
    [sym_verbatim] = STATE(44),
    [sym_macro] = STATE(44),
    [sym_digit_escape] = STATE(44),
    [aux_sym_disjunction_repeat1] = STATE(53),
    [aux_sym_term_repeat1] = STATE(54),
    [anon_sym_PIPE] = ACTIONS(85),
    [sym_any_character] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_end_assertion] = ACTIONS(87),
    [sym_pattern_character] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_control_escape] = ACTIONS(87),
    [sym_control_letter_escape] = ACTIONS(87),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(99),
    [sym_identity_escape] = ACTIONS(87),
    [sym_comment] = ACTIONS(42),
  },
  [21] = {
    [anon_sym_GT] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [sym_comment] = ACTIONS(7),
  },
  [22] = {
    [sym_term] = STATE(57),
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_term_repeat1] = STATE(37),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_any_character] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_end_assertion] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(65),
    [sym_identity_escape] = ACTIONS(53),
    [sym_comment] = ACTIONS(42),
  },
  [23] = {
    [anon_sym_PIPE] = ACTIONS(110),
    [sym_any_character] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [sym_end_assertion] = ACTIONS(110),
    [sym_pattern_character] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [sym_zero_or_more] = ACTIONS(112),
    [sym_one_or_more] = ACTIONS(112),
    [sym_optional] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [sym_control_escape] = ACTIONS(110),
    [sym_control_letter_escape] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(110),
    [sym_identity_escape] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [24] = {
    [anon_sym_PIPE] = ACTIONS(114),
    [sym_any_character] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [sym_end_assertion] = ACTIONS(114),
    [sym_pattern_character] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [sym_zero_or_more] = ACTIONS(114),
    [sym_one_or_more] = ACTIONS(114),
    [sym_optional] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(114),
    [sym_control_escape] = ACTIONS(114),
    [sym_control_letter_escape] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(114),
    [sym_identity_escape] = ACTIONS(114),
    [sym_comment] = ACTIONS(42),
  },
  [25] = {
    [sym_class_range] = STATE(66),
    [sym_verbatim] = STATE(62),
    [sym_macro] = STATE(62),
    [sym_digit_escape] = STATE(62),
    [aux_sym_character_class_repeat1] = STATE(66),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_BSLASH_DASH] = ACTIONS(122),
    [sym_class_character] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(122),
    [sym_control_letter_escape] = ACTIONS(122),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
  },
  [26] = {
    [sym_regex] = STATE(68),
    [sym_disjunction] = STATE(33),
    [sym_term] = STATE(69),
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_disjunction_repeat1] = STATE(70),
    [aux_sym_term_repeat1] = STATE(71),
    [anon_sym_PIPE] = ACTIONS(130),
    [sym_any_character] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_end_assertion] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(65),
    [sym_identity_escape] = ACTIONS(53),
    [sym_comment] = ACTIONS(42),
  },
  [27] = {
    [aux_sym_verbatim_repeat1] = STATE(73),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(134),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(42),
  },
  [28] = {
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(7),
  },
  [29] = {
    [anon_sym_PIPE] = ACTIONS(138),
    [sym_any_character] = ACTIONS(138),
    [anon_sym_CARET] = ACTIONS(138),
    [sym_end_assertion] = ACTIONS(138),
    [sym_pattern_character] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [sym_zero_or_more] = ACTIONS(138),
    [sym_one_or_more] = ACTIONS(138),
    [sym_optional] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(138),
    [sym_control_escape] = ACTIONS(138),
    [sym_control_letter_escape] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(138),
    [sym_identity_escape] = ACTIONS(138),
    [sym_comment] = ACTIONS(42),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_comment] = ACTIONS(7),
  },
  [31] = {
    [sym_regex] = STATE(75),
    [sym_disjunction] = STATE(33),
    [sym_term] = STATE(34),
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_disjunction_repeat1] = STATE(36),
    [aux_sym_term_repeat1] = STATE(37),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_any_character] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_end_assertion] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(65),
    [sym_identity_escape] = ACTIONS(53),
    [sym_comment] = ACTIONS(42),
  },
  [32] = {
    [sym_action] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(142),
    [sym_comment] = ACTIONS(7),
  },
  [33] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(144),
    [anon_sym_PERCENTstate] = ACTIONS(146),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(144),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(7),
  },
  [34] = {
    [aux_sym_disjunction_repeat1] = STATE(78),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(144),
    [sym_comment] = ACTIONS(7),
  },
  [35] = {
    [sym_rule] = STATE(79),
    [sym_state] = STATE(31),
    [sym_regex] = STATE(32),
    [sym_disjunction] = STATE(33),
    [sym_term] = STATE(34),
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_rules_repeat1] = STATE(79),
    [aux_sym_disjunction_repeat1] = STATE(36),
    [aux_sym_term_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_any_character] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_end_assertion] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(65),
    [sym_identity_escape] = ACTIONS(53),
    [sym_comment] = ACTIONS(42),
  },
  [36] = {
    [aux_sym_disjunction_repeat1] = STATE(80),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(7),
  },
  [37] = {
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_term_repeat1] = STATE(81),
    [anon_sym_PIPE] = ACTIONS(154),
    [sym_any_character] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_end_assertion] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(65),
    [sym_identity_escape] = ACTIONS(53),
    [sym_comment] = ACTIONS(42),
  },
  [38] = {
    [anon_sym_LT] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(156),
    [sym_any_character] = ACTIONS(156),
    [anon_sym_CARET] = ACTIONS(156),
    [sym_end_assertion] = ACTIONS(156),
    [sym_pattern_character] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [sym_control_escape] = ACTIONS(156),
    [sym_control_letter_escape] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(156),
    [sym_identity_escape] = ACTIONS(156),
    [sym_comment] = ACTIONS(42),
  },
  [39] = {
    [sym_code] = STATE(39),
    [sym_macro_def] = STATE(39),
    [sym_state_decl] = STATE(39),
    [sym_directive] = STATE(39),
    [aux_sym_directives_repeat1] = STATE(39),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(158),
    [anon_sym_PERCENTstate] = ACTIONS(161),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(167),
    [sym_identifier] = ACTIONS(169),
    [sym_comment] = ACTIONS(7),
  },
  [40] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(172),
    [anon_sym_PERCENTstate] = ACTIONS(174),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(172),
    [sym_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(7),
  },
  [41] = {
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(7),
  },
  [42] = {
    [aux_sym_state_decl_repeat1] = STATE(83),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(178),
    [anon_sym_PERCENTstate] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(79),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(178),
    [sym_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(7),
  },
  [43] = {
    [sym_term] = STATE(57),
    [sym_start_assertion] = STATE(44),
    [sym_character_class] = STATE(44),
    [sym_group] = STATE(44),
    [sym_verbatim] = STATE(44),
    [sym_macro] = STATE(44),
    [sym_digit_escape] = STATE(44),
    [aux_sym_term_repeat1] = STATE(54),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(105),
    [anon_sym_PERCENTstate] = ACTIONS(105),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_any_character] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_end_assertion] = ACTIONS(87),
    [sym_pattern_character] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_control_escape] = ACTIONS(87),
    [sym_control_letter_escape] = ACTIONS(87),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(99),
    [sym_identity_escape] = ACTIONS(87),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [sym_comment] = ACTIONS(42),
  },
  [44] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(110),
    [anon_sym_PERCENTstate] = ACTIONS(110),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [sym_any_character] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [sym_end_assertion] = ACTIONS(110),
    [sym_pattern_character] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [sym_zero_or_more] = ACTIONS(182),
    [sym_one_or_more] = ACTIONS(182),
    [sym_optional] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [sym_control_escape] = ACTIONS(110),
    [sym_control_letter_escape] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(110),
    [sym_identity_escape] = ACTIONS(110),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(110),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [45] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(114),
    [anon_sym_PERCENTstate] = ACTIONS(114),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [sym_any_character] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [sym_end_assertion] = ACTIONS(114),
    [sym_pattern_character] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(114),
    [sym_zero_or_more] = ACTIONS(114),
    [sym_one_or_more] = ACTIONS(114),
    [sym_optional] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(114),
    [sym_control_escape] = ACTIONS(114),
    [sym_control_letter_escape] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(114),
    [sym_identity_escape] = ACTIONS(114),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(114),
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(42),
  },
  [46] = {
    [sym_class_range] = STATE(87),
    [sym_verbatim] = STATE(62),
    [sym_macro] = STATE(62),
    [sym_digit_escape] = STATE(62),
    [aux_sym_character_class_repeat1] = STATE(87),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_RBRACK] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_BSLASH_DASH] = ACTIONS(122),
    [sym_class_character] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(122),
    [sym_control_letter_escape] = ACTIONS(122),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
  },
  [47] = {
    [sym_regex] = STATE(88),
    [sym_disjunction] = STATE(33),
    [sym_term] = STATE(69),
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_disjunction_repeat1] = STATE(70),
    [aux_sym_term_repeat1] = STATE(71),
    [anon_sym_PIPE] = ACTIONS(130),
    [sym_any_character] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_end_assertion] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(65),
    [sym_identity_escape] = ACTIONS(53),
    [sym_comment] = ACTIONS(42),
  },
  [48] = {
    [aux_sym_verbatim_repeat1] = STATE(90),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(190),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(42),
  },
  [49] = {
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(7),
  },
  [50] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(138),
    [anon_sym_PERCENTstate] = ACTIONS(138),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(138),
    [sym_any_character] = ACTIONS(138),
    [anon_sym_CARET] = ACTIONS(138),
    [sym_end_assertion] = ACTIONS(138),
    [sym_pattern_character] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_zero_or_more] = ACTIONS(138),
    [sym_one_or_more] = ACTIONS(138),
    [sym_optional] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(138),
    [sym_control_escape] = ACTIONS(138),
    [sym_control_letter_escape] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(138),
    [sym_identity_escape] = ACTIONS(138),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(138),
    [sym_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(42),
  },
  [51] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(194),
    [anon_sym_PERCENTstate] = ACTIONS(196),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(194),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(7),
  },
  [52] = {
    [aux_sym_disjunction_repeat1] = STATE(92),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(144),
    [anon_sym_PERCENTstate] = ACTIONS(146),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(198),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(144),
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(7),
  },
  [53] = {
    [aux_sym_disjunction_repeat1] = STATE(93),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(152),
    [anon_sym_PERCENTstate] = ACTIONS(200),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(198),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(152),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(7),
  },
  [54] = {
    [sym_start_assertion] = STATE(44),
    [sym_character_class] = STATE(44),
    [sym_group] = STATE(44),
    [sym_verbatim] = STATE(44),
    [sym_macro] = STATE(44),
    [sym_digit_escape] = STATE(44),
    [aux_sym_term_repeat1] = STATE(94),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(154),
    [anon_sym_PERCENTstate] = ACTIONS(154),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [sym_any_character] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_end_assertion] = ACTIONS(87),
    [sym_pattern_character] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_control_escape] = ACTIONS(87),
    [sym_control_letter_escape] = ACTIONS(87),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(99),
    [sym_identity_escape] = ACTIONS(87),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(154),
    [sym_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(42),
  },
  [55] = {
    [anon_sym_PIPE] = ACTIONS(202),
    [sym_any_character] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [sym_end_assertion] = ACTIONS(202),
    [sym_pattern_character] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [sym_control_escape] = ACTIONS(202),
    [sym_control_letter_escape] = ACTIONS(202),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(202),
    [sym_identity_escape] = ACTIONS(202),
    [sym_comment] = ACTIONS(42),
  },
  [56] = {
    [aux_sym_state_decl_repeat1] = STATE(96),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(204),
    [sym_comment] = ACTIONS(7),
  },
  [57] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(206),
    [anon_sym_PERCENTstate] = ACTIONS(208),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(206),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(7),
  },
  [58] = {
    [anon_sym_PIPE] = ACTIONS(210),
    [sym_any_character] = ACTIONS(210),
    [anon_sym_CARET] = ACTIONS(210),
    [sym_end_assertion] = ACTIONS(210),
    [sym_pattern_character] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [sym_control_escape] = ACTIONS(210),
    [sym_control_letter_escape] = ACTIONS(210),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(210),
    [sym_identity_escape] = ACTIONS(210),
    [sym_comment] = ACTIONS(42),
  },
  [59] = {
    [sym_class_range] = STATE(98),
    [sym_verbatim] = STATE(62),
    [sym_macro] = STATE(62),
    [sym_digit_escape] = STATE(62),
    [aux_sym_character_class_repeat1] = STATE(98),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_BSLASH_DASH] = ACTIONS(122),
    [sym_class_character] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(122),
    [sym_control_letter_escape] = ACTIONS(122),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
  },
  [60] = {
    [anon_sym_PIPE] = ACTIONS(214),
    [sym_any_character] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [sym_end_assertion] = ACTIONS(214),
    [sym_pattern_character] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [sym_zero_or_more] = ACTIONS(214),
    [sym_one_or_more] = ACTIONS(214),
    [sym_optional] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(214),
    [sym_control_escape] = ACTIONS(214),
    [sym_control_letter_escape] = ACTIONS(214),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(214),
    [sym_identity_escape] = ACTIONS(214),
    [sym_comment] = ACTIONS(42),
  },
  [61] = {
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_BSLASH_DASH] = ACTIONS(216),
    [sym_class_character] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [sym_control_escape] = ACTIONS(216),
    [sym_control_letter_escape] = ACTIONS(216),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(216),
    [sym_identity_escape] = ACTIONS(216),
    [sym_comment] = ACTIONS(42),
  },
  [62] = {
    [anon_sym_RBRACK] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_BSLASH_DASH] = ACTIONS(220),
    [sym_class_character] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [sym_control_escape] = ACTIONS(220),
    [sym_control_letter_escape] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(220),
    [sym_identity_escape] = ACTIONS(220),
    [sym_comment] = ACTIONS(42),
  },
  [63] = {
    [aux_sym_verbatim_repeat1] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(226),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(42),
  },
  [64] = {
    [sym_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(7),
  },
  [65] = {
    [anon_sym_RBRACK] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_BSLASH_DASH] = ACTIONS(138),
    [sym_class_character] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(138),
    [sym_control_escape] = ACTIONS(138),
    [sym_control_letter_escape] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(138),
    [sym_identity_escape] = ACTIONS(138),
    [sym_comment] = ACTIONS(42),
  },
  [66] = {
    [sym_class_range] = STATE(104),
    [sym_verbatim] = STATE(62),
    [sym_macro] = STATE(62),
    [sym_digit_escape] = STATE(62),
    [aux_sym_character_class_repeat1] = STATE(104),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_BSLASH_DASH] = ACTIONS(122),
    [sym_class_character] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(122),
    [sym_control_letter_escape] = ACTIONS(122),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
  },
  [67] = {
    [sym_term] = STATE(57),
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_term_repeat1] = STATE(71),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_any_character] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_end_assertion] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(65),
    [sym_identity_escape] = ACTIONS(53),
    [sym_comment] = ACTIONS(42),
  },
  [68] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [sym_comment] = ACTIONS(7),
  },
  [69] = {
    [aux_sym_disjunction_repeat1] = STATE(106),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(144),
    [sym_comment] = ACTIONS(7),
  },
  [70] = {
    [aux_sym_disjunction_repeat1] = STATE(107),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(152),
    [sym_comment] = ACTIONS(7),
  },
  [71] = {
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_term_repeat1] = STATE(108),
    [anon_sym_PIPE] = ACTIONS(154),
    [sym_any_character] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_end_assertion] = ACTIONS(53),
    [sym_pattern_character] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_control_escape] = ACTIONS(53),
    [sym_control_letter_escape] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(65),
    [sym_identity_escape] = ACTIONS(53),
    [sym_comment] = ACTIONS(42),
  },
  [72] = {
    [anon_sym_PIPE] = ACTIONS(234),
    [sym_any_character] = ACTIONS(234),
    [anon_sym_CARET] = ACTIONS(234),
    [sym_end_assertion] = ACTIONS(234),
    [sym_pattern_character] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [sym_zero_or_more] = ACTIONS(234),
    [sym_one_or_more] = ACTIONS(234),
    [sym_optional] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [sym_control_escape] = ACTIONS(234),
    [sym_control_letter_escape] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(234),
    [sym_identity_escape] = ACTIONS(234),
    [sym_comment] = ACTIONS(42),
  },
  [73] = {
    [aux_sym_verbatim_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(238),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(238),
    [sym_comment] = ACTIONS(42),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(240),
    [sym_comment] = ACTIONS(7),
  },
  [75] = {
    [sym_action] = STATE(112),
    [anon_sym_LBRACE] = ACTIONS(142),
    [sym_comment] = ACTIONS(7),
  },
  [76] = {
    [sym_java_code] = ACTIONS(242),
    [sym_comment] = ACTIONS(7),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(246),
    [sym_any_character] = ACTIONS(246),
    [anon_sym_CARET] = ACTIONS(246),
    [sym_end_assertion] = ACTIONS(246),
    [sym_pattern_character] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(246),
    [sym_control_escape] = ACTIONS(246),
    [sym_control_letter_escape] = ACTIONS(246),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(246),
    [sym_identity_escape] = ACTIONS(246),
    [sym_comment] = ACTIONS(42),
  },
  [78] = {
    [aux_sym_disjunction_repeat1] = STATE(80),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(248),
    [sym_comment] = ACTIONS(7),
  },
  [79] = {
    [sym_rule] = STATE(79),
    [sym_state] = STATE(31),
    [sym_regex] = STATE(32),
    [sym_disjunction] = STATE(33),
    [sym_term] = STATE(34),
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_rules_repeat1] = STATE(79),
    [aux_sym_disjunction_repeat1] = STATE(36),
    [aux_sym_term_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(255),
    [sym_any_character] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(261),
    [sym_end_assertion] = ACTIONS(258),
    [sym_pattern_character] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(273),
    [sym_control_escape] = ACTIONS(258),
    [sym_control_letter_escape] = ACTIONS(258),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(276),
    [sym_identity_escape] = ACTIONS(258),
    [sym_comment] = ACTIONS(42),
  },
  [80] = {
    [aux_sym_disjunction_repeat1] = STATE(80),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(206),
    [sym_comment] = ACTIONS(7),
  },
  [81] = {
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_term_repeat1] = STATE(81),
    [anon_sym_PIPE] = ACTIONS(210),
    [sym_any_character] = ACTIONS(282),
    [anon_sym_CARET] = ACTIONS(285),
    [sym_end_assertion] = ACTIONS(282),
    [sym_pattern_character] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(297),
    [sym_control_escape] = ACTIONS(282),
    [sym_control_letter_escape] = ACTIONS(282),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(300),
    [sym_identity_escape] = ACTIONS(282),
    [sym_comment] = ACTIONS(42),
  },
  [82] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(303),
    [anon_sym_PERCENTstate] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(303),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(303),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(303),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(7),
  },
  [83] = {
    [aux_sym_state_decl_repeat1] = STATE(83),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(303),
    [anon_sym_PERCENTstate] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(307),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(303),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(7),
  },
  [84] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(210),
    [anon_sym_PERCENTstate] = ACTIONS(210),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [sym_any_character] = ACTIONS(210),
    [anon_sym_CARET] = ACTIONS(210),
    [sym_end_assertion] = ACTIONS(210),
    [sym_pattern_character] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [sym_control_escape] = ACTIONS(210),
    [sym_control_letter_escape] = ACTIONS(210),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(210),
    [sym_identity_escape] = ACTIONS(210),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(210),
    [sym_identifier] = ACTIONS(210),
    [sym_comment] = ACTIONS(42),
  },
  [85] = {
    [sym_class_range] = STATE(115),
    [sym_verbatim] = STATE(62),
    [sym_macro] = STATE(62),
    [sym_digit_escape] = STATE(62),
    [aux_sym_character_class_repeat1] = STATE(115),
    [anon_sym_RBRACK] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_BSLASH_DASH] = ACTIONS(122),
    [sym_class_character] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(122),
    [sym_control_letter_escape] = ACTIONS(122),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
  },
  [86] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(214),
    [anon_sym_PERCENTstate] = ACTIONS(214),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(214),
    [sym_any_character] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [sym_end_assertion] = ACTIONS(214),
    [sym_pattern_character] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(214),
    [sym_zero_or_more] = ACTIONS(214),
    [sym_one_or_more] = ACTIONS(214),
    [sym_optional] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(214),
    [sym_control_escape] = ACTIONS(214),
    [sym_control_letter_escape] = ACTIONS(214),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(214),
    [sym_identity_escape] = ACTIONS(214),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(214),
    [sym_identifier] = ACTIONS(214),
    [sym_comment] = ACTIONS(42),
  },
  [87] = {
    [sym_class_range] = STATE(104),
    [sym_verbatim] = STATE(62),
    [sym_macro] = STATE(62),
    [sym_digit_escape] = STATE(62),
    [aux_sym_character_class_repeat1] = STATE(104),
    [anon_sym_RBRACK] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_BSLASH_DASH] = ACTIONS(122),
    [sym_class_character] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(122),
    [sym_control_letter_escape] = ACTIONS(122),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(312),
    [sym_comment] = ACTIONS(7),
  },
  [89] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(234),
    [anon_sym_PERCENTstate] = ACTIONS(234),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(234),
    [sym_any_character] = ACTIONS(234),
    [anon_sym_CARET] = ACTIONS(234),
    [sym_end_assertion] = ACTIONS(234),
    [sym_pattern_character] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(234),
    [sym_zero_or_more] = ACTIONS(234),
    [sym_one_or_more] = ACTIONS(234),
    [sym_optional] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [sym_control_escape] = ACTIONS(234),
    [sym_control_letter_escape] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(234),
    [sym_identity_escape] = ACTIONS(234),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(234),
    [sym_identifier] = ACTIONS(234),
    [sym_comment] = ACTIONS(42),
  },
  [90] = {
    [aux_sym_verbatim_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(238),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(238),
    [sym_comment] = ACTIONS(42),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(316),
    [sym_comment] = ACTIONS(7),
  },
  [92] = {
    [aux_sym_disjunction_repeat1] = STATE(93),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(248),
    [anon_sym_PERCENTstate] = ACTIONS(318),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(198),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(7),
  },
  [93] = {
    [aux_sym_disjunction_repeat1] = STATE(93),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(206),
    [anon_sym_PERCENTstate] = ACTIONS(208),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(320),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(206),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(7),
  },
  [94] = {
    [sym_start_assertion] = STATE(44),
    [sym_character_class] = STATE(44),
    [sym_group] = STATE(44),
    [sym_verbatim] = STATE(44),
    [sym_macro] = STATE(44),
    [sym_digit_escape] = STATE(44),
    [aux_sym_term_repeat1] = STATE(94),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(210),
    [anon_sym_PERCENTstate] = ACTIONS(210),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [sym_any_character] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(326),
    [sym_end_assertion] = ACTIONS(323),
    [sym_pattern_character] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(338),
    [sym_control_escape] = ACTIONS(323),
    [sym_control_letter_escape] = ACTIONS(323),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(341),
    [sym_identity_escape] = ACTIONS(323),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(210),
    [sym_identifier] = ACTIONS(210),
    [sym_comment] = ACTIONS(42),
  },
  [95] = {
    [anon_sym_PIPE] = ACTIONS(344),
    [sym_any_character] = ACTIONS(344),
    [anon_sym_CARET] = ACTIONS(344),
    [sym_end_assertion] = ACTIONS(344),
    [sym_pattern_character] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(344),
    [sym_control_escape] = ACTIONS(344),
    [sym_control_letter_escape] = ACTIONS(344),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(344),
    [sym_identity_escape] = ACTIONS(344),
    [sym_comment] = ACTIONS(42),
  },
  [96] = {
    [aux_sym_state_decl_repeat1] = STATE(120),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(346),
    [sym_comment] = ACTIONS(7),
  },
  [97] = {
    [anon_sym_PIPE] = ACTIONS(348),
    [sym_any_character] = ACTIONS(348),
    [anon_sym_CARET] = ACTIONS(348),
    [sym_end_assertion] = ACTIONS(348),
    [sym_pattern_character] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [sym_zero_or_more] = ACTIONS(348),
    [sym_one_or_more] = ACTIONS(348),
    [sym_optional] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [sym_control_escape] = ACTIONS(348),
    [sym_control_letter_escape] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(348),
    [sym_identity_escape] = ACTIONS(348),
    [sym_comment] = ACTIONS(42),
  },
  [98] = {
    [sym_class_range] = STATE(104),
    [sym_verbatim] = STATE(62),
    [sym_macro] = STATE(62),
    [sym_digit_escape] = STATE(62),
    [aux_sym_character_class_repeat1] = STATE(104),
    [anon_sym_RBRACK] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_BSLASH_DASH] = ACTIONS(122),
    [sym_class_character] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(122),
    [sym_control_letter_escape] = ACTIONS(122),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
  },
  [99] = {
    [sym_verbatim] = STATE(123),
    [sym_macro] = STATE(123),
    [sym_digit_escape] = STATE(123),
    [anon_sym_DASH] = ACTIONS(352),
    [anon_sym_BSLASH_DASH] = ACTIONS(354),
    [sym_class_character] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(354),
    [sym_control_letter_escape] = ACTIONS(354),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(354),
    [sym_comment] = ACTIONS(42),
  },
  [100] = {
    [sym_verbatim] = STATE(125),
    [sym_macro] = STATE(125),
    [sym_digit_escape] = STATE(125),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_BSLASH_DASH] = ACTIONS(358),
    [sym_class_character] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(358),
    [sym_control_letter_escape] = ACTIONS(358),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(358),
    [sym_comment] = ACTIONS(42),
  },
  [101] = {
    [anon_sym_RBRACK] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(234),
    [anon_sym_BSLASH_DASH] = ACTIONS(234),
    [sym_class_character] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [sym_control_escape] = ACTIONS(234),
    [sym_control_letter_escape] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(234),
    [sym_identity_escape] = ACTIONS(234),
    [sym_comment] = ACTIONS(42),
  },
  [102] = {
    [aux_sym_verbatim_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(360),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(238),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(238),
    [sym_comment] = ACTIONS(42),
  },
  [103] = {
    [anon_sym_RBRACE] = ACTIONS(362),
    [sym_comment] = ACTIONS(7),
  },
  [104] = {
    [sym_class_range] = STATE(104),
    [sym_verbatim] = STATE(62),
    [sym_macro] = STATE(62),
    [sym_digit_escape] = STATE(62),
    [aux_sym_character_class_repeat1] = STATE(104),
    [anon_sym_RBRACK] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(366),
    [anon_sym_BSLASH_DASH] = ACTIONS(369),
    [sym_class_character] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(375),
    [sym_control_escape] = ACTIONS(369),
    [sym_control_letter_escape] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(378),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(378),
    [sym_identity_escape] = ACTIONS(369),
    [sym_comment] = ACTIONS(42),
  },
  [105] = {
    [anon_sym_PIPE] = ACTIONS(381),
    [sym_any_character] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(381),
    [sym_end_assertion] = ACTIONS(381),
    [sym_pattern_character] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [sym_zero_or_more] = ACTIONS(381),
    [sym_one_or_more] = ACTIONS(381),
    [sym_optional] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [sym_control_escape] = ACTIONS(381),
    [sym_control_letter_escape] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(381),
    [sym_identity_escape] = ACTIONS(381),
    [sym_comment] = ACTIONS(42),
  },
  [106] = {
    [aux_sym_disjunction_repeat1] = STATE(107),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(248),
    [sym_comment] = ACTIONS(7),
  },
  [107] = {
    [aux_sym_disjunction_repeat1] = STATE(107),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(206),
    [sym_comment] = ACTIONS(7),
  },
  [108] = {
    [sym_start_assertion] = STATE(23),
    [sym_character_class] = STATE(23),
    [sym_group] = STATE(23),
    [sym_verbatim] = STATE(23),
    [sym_macro] = STATE(23),
    [sym_digit_escape] = STATE(23),
    [aux_sym_term_repeat1] = STATE(108),
    [anon_sym_PIPE] = ACTIONS(210),
    [sym_any_character] = ACTIONS(282),
    [anon_sym_CARET] = ACTIONS(285),
    [sym_end_assertion] = ACTIONS(282),
    [sym_pattern_character] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(297),
    [sym_control_escape] = ACTIONS(282),
    [sym_control_letter_escape] = ACTIONS(282),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(300),
    [sym_identity_escape] = ACTIONS(282),
    [sym_comment] = ACTIONS(42),
  },
  [109] = {
    [anon_sym_PIPE] = ACTIONS(386),
    [sym_any_character] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(386),
    [sym_end_assertion] = ACTIONS(386),
    [sym_pattern_character] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [sym_zero_or_more] = ACTIONS(386),
    [sym_one_or_more] = ACTIONS(386),
    [sym_optional] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [anon_sym_LBRACE] = ACTIONS(386),
    [sym_control_escape] = ACTIONS(386),
    [sym_control_letter_escape] = ACTIONS(386),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(386),
    [sym_identity_escape] = ACTIONS(386),
    [sym_comment] = ACTIONS(42),
  },
  [110] = {
    [aux_sym_verbatim_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(390),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(390),
    [sym_comment] = ACTIONS(42),
  },
  [111] = {
    [anon_sym_PIPE] = ACTIONS(393),
    [sym_any_character] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(393),
    [sym_end_assertion] = ACTIONS(393),
    [sym_pattern_character] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [sym_zero_or_more] = ACTIONS(393),
    [sym_one_or_more] = ACTIONS(393),
    [sym_optional] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [sym_control_escape] = ACTIONS(393),
    [sym_control_letter_escape] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(393),
    [sym_identity_escape] = ACTIONS(393),
    [sym_comment] = ACTIONS(42),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [sym_any_character] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(397),
    [sym_end_assertion] = ACTIONS(397),
    [sym_pattern_character] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [sym_control_escape] = ACTIONS(397),
    [sym_control_letter_escape] = ACTIONS(397),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(397),
    [sym_identity_escape] = ACTIONS(397),
    [sym_comment] = ACTIONS(42),
  },
  [113] = {
    [anon_sym_RBRACE] = ACTIONS(399),
    [sym_comment] = ACTIONS(7),
  },
  [114] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(348),
    [anon_sym_PERCENTstate] = ACTIONS(348),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(348),
    [anon_sym_PIPE] = ACTIONS(348),
    [sym_any_character] = ACTIONS(348),
    [anon_sym_CARET] = ACTIONS(348),
    [sym_end_assertion] = ACTIONS(348),
    [sym_pattern_character] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [sym_zero_or_more] = ACTIONS(348),
    [sym_one_or_more] = ACTIONS(348),
    [sym_optional] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [sym_control_escape] = ACTIONS(348),
    [sym_control_letter_escape] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(348),
    [sym_identity_escape] = ACTIONS(348),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(348),
    [sym_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(42),
  },
  [115] = {
    [sym_class_range] = STATE(104),
    [sym_verbatim] = STATE(62),
    [sym_macro] = STATE(62),
    [sym_digit_escape] = STATE(62),
    [aux_sym_character_class_repeat1] = STATE(104),
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_BSLASH_DASH] = ACTIONS(122),
    [sym_class_character] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_control_escape] = ACTIONS(122),
    [sym_control_letter_escape] = ACTIONS(122),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(128),
    [sym_identity_escape] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
  },
  [116] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(381),
    [anon_sym_PERCENTstate] = ACTIONS(381),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [sym_any_character] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(381),
    [sym_end_assertion] = ACTIONS(381),
    [sym_pattern_character] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [sym_zero_or_more] = ACTIONS(381),
    [sym_one_or_more] = ACTIONS(381),
    [sym_optional] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [sym_control_escape] = ACTIONS(381),
    [sym_control_letter_escape] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(381),
    [sym_identity_escape] = ACTIONS(381),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(381),
    [sym_identifier] = ACTIONS(381),
    [sym_comment] = ACTIONS(42),
  },
  [117] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(386),
    [anon_sym_PERCENTstate] = ACTIONS(386),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [sym_any_character] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(386),
    [sym_end_assertion] = ACTIONS(386),
    [sym_pattern_character] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_LPAREN] = ACTIONS(386),
    [sym_zero_or_more] = ACTIONS(386),
    [sym_one_or_more] = ACTIONS(386),
    [sym_optional] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [anon_sym_LBRACE] = ACTIONS(386),
    [sym_control_escape] = ACTIONS(386),
    [sym_control_letter_escape] = ACTIONS(386),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(386),
    [sym_identity_escape] = ACTIONS(386),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(386),
    [sym_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(42),
  },
  [118] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(393),
    [anon_sym_PERCENTstate] = ACTIONS(393),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [sym_any_character] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(393),
    [sym_end_assertion] = ACTIONS(393),
    [sym_pattern_character] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(393),
    [sym_zero_or_more] = ACTIONS(393),
    [sym_one_or_more] = ACTIONS(393),
    [sym_optional] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [sym_control_escape] = ACTIONS(393),
    [sym_control_letter_escape] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(393),
    [sym_identity_escape] = ACTIONS(393),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(393),
    [sym_identifier] = ACTIONS(393),
    [sym_comment] = ACTIONS(42),
  },
  [119] = {
    [anon_sym_PIPE] = ACTIONS(403),
    [sym_any_character] = ACTIONS(403),
    [anon_sym_CARET] = ACTIONS(403),
    [sym_end_assertion] = ACTIONS(403),
    [sym_pattern_character] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(403),
    [sym_control_escape] = ACTIONS(403),
    [sym_control_letter_escape] = ACTIONS(403),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(403),
    [sym_identity_escape] = ACTIONS(403),
    [sym_comment] = ACTIONS(42),
  },
  [120] = {
    [aux_sym_state_decl_repeat1] = STATE(120),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(303),
    [sym_comment] = ACTIONS(7),
  },
  [121] = {
    [anon_sym_PIPE] = ACTIONS(405),
    [sym_any_character] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(405),
    [sym_end_assertion] = ACTIONS(405),
    [sym_pattern_character] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [sym_zero_or_more] = ACTIONS(405),
    [sym_one_or_more] = ACTIONS(405),
    [sym_optional] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [sym_control_escape] = ACTIONS(405),
    [sym_control_letter_escape] = ACTIONS(405),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(405),
    [sym_identity_escape] = ACTIONS(405),
    [sym_comment] = ACTIONS(42),
  },
  [122] = {
    [anon_sym_RBRACK] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [anon_sym_BSLASH_DASH] = ACTIONS(407),
    [sym_class_character] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [sym_control_escape] = ACTIONS(407),
    [sym_control_letter_escape] = ACTIONS(407),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(407),
    [sym_identity_escape] = ACTIONS(407),
    [sym_comment] = ACTIONS(42),
  },
  [123] = {
    [anon_sym_RBRACK] = ACTIONS(409),
    [anon_sym_DASH] = ACTIONS(409),
    [anon_sym_BSLASH_DASH] = ACTIONS(409),
    [sym_class_character] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [sym_control_escape] = ACTIONS(409),
    [sym_control_letter_escape] = ACTIONS(409),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(409),
    [sym_identity_escape] = ACTIONS(409),
    [sym_comment] = ACTIONS(42),
  },
  [124] = {
    [anon_sym_RBRACK] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_BSLASH_DASH] = ACTIONS(411),
    [sym_class_character] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [sym_control_escape] = ACTIONS(411),
    [sym_control_letter_escape] = ACTIONS(411),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(411),
    [sym_identity_escape] = ACTIONS(411),
    [sym_comment] = ACTIONS(42),
  },
  [125] = {
    [anon_sym_RBRACK] = ACTIONS(413),
    [anon_sym_DASH] = ACTIONS(413),
    [anon_sym_BSLASH_DASH] = ACTIONS(413),
    [sym_class_character] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [sym_control_escape] = ACTIONS(413),
    [sym_control_letter_escape] = ACTIONS(413),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(413),
    [sym_identity_escape] = ACTIONS(413),
    [sym_comment] = ACTIONS(42),
  },
  [126] = {
    [anon_sym_RBRACK] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_BSLASH_DASH] = ACTIONS(386),
    [sym_class_character] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [anon_sym_LBRACE] = ACTIONS(386),
    [sym_control_escape] = ACTIONS(386),
    [sym_control_letter_escape] = ACTIONS(386),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(386),
    [sym_identity_escape] = ACTIONS(386),
    [sym_comment] = ACTIONS(42),
  },
  [127] = {
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_BSLASH_DASH] = ACTIONS(393),
    [sym_class_character] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [sym_control_escape] = ACTIONS(393),
    [sym_control_letter_escape] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(393),
    [sym_identity_escape] = ACTIONS(393),
    [sym_comment] = ACTIONS(42),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [sym_any_character] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(417),
    [sym_end_assertion] = ACTIONS(417),
    [sym_pattern_character] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [sym_control_escape] = ACTIONS(417),
    [sym_control_letter_escape] = ACTIONS(417),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(417),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(417),
    [sym_identity_escape] = ACTIONS(417),
    [sym_comment] = ACTIONS(42),
  },
  [129] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(405),
    [anon_sym_PERCENTstate] = ACTIONS(405),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [sym_any_character] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(405),
    [sym_end_assertion] = ACTIONS(405),
    [sym_pattern_character] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_LPAREN] = ACTIONS(405),
    [sym_zero_or_more] = ACTIONS(405),
    [sym_one_or_more] = ACTIONS(405),
    [sym_optional] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [sym_control_escape] = ACTIONS(405),
    [sym_control_letter_escape] = ACTIONS(405),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHd_LBRACE3_RBRACE_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_BSLASH_BSLASHx_BSLASHd_LBRACE2_RBRACE_SLASH] = ACTIONS(405),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASHd_LBRACE4_RBRACE_SLASH] = ACTIONS(405),
    [sym_identity_escape] = ACTIONS(405),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(405),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(42),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_section_separator, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_section_separator, 1),
  [27] = {.count = 2, .reusable = true}, SHIFT(15), SHIFT_EXTRA(),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_user_code, 2),
  [32] = {.count = 1, .reusable = false}, REDUCE(sym_user_code, 2),
  [34] = {.count = 1, .reusable = true}, SHIFT(16),
  [36] = {.count = 1, .reusable = true}, SHIFT(17),
  [38] = {.count = 1, .reusable = false}, REDUCE(sym_directive, 1),
  [40] = {.count = 1, .reusable = false}, SHIFT(18),
  [42] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [44] = {.count = 2, .reusable = false}, SHIFT(19), SHIFT_EXTRA(),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = false}, SHIFT(21),
  [51] = {.count = 1, .reusable = false}, SHIFT(22),
  [53] = {.count = 1, .reusable = false}, SHIFT(23),
  [55] = {.count = 1, .reusable = false}, SHIFT(24),
  [57] = {.count = 1, .reusable = false}, SHIFT(25),
  [59] = {.count = 1, .reusable = false}, SHIFT(26),
  [61] = {.count = 1, .reusable = false}, SHIFT(27),
  [63] = {.count = 1, .reusable = false}, SHIFT(28),
  [65] = {.count = 1, .reusable = false}, SHIFT(29),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_directives, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_section_separator, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_section_separator, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(40),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_state_decl, 2),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_state_decl, 2),
  [79] = {.count = 1, .reusable = true}, SHIFT(41),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_directive, 2),
  [85] = {.count = 1, .reusable = false}, SHIFT(43),
  [87] = {.count = 1, .reusable = false}, SHIFT(44),
  [89] = {.count = 1, .reusable = false}, SHIFT(45),
  [91] = {.count = 1, .reusable = false}, SHIFT(46),
  [93] = {.count = 1, .reusable = false}, SHIFT(47),
  [95] = {.count = 1, .reusable = false}, SHIFT(48),
  [97] = {.count = 1, .reusable = false}, SHIFT(49),
  [99] = {.count = 1, .reusable = false}, SHIFT(50),
  [101] = {.count = 1, .reusable = true}, SHIFT(55),
  [103] = {.count = 1, .reusable = true}, SHIFT(56),
  [105] = {.count = 1, .reusable = false}, REDUCE(aux_sym_disjunction_repeat1, 1),
  [107] = {.count = 2, .reusable = false}, REDUCE(aux_sym_disjunction_repeat1, 1), SHIFT_REPEAT(28),
  [110] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 1),
  [112] = {.count = 1, .reusable = false}, SHIFT(58),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_start_assertion, 1),
  [116] = {.count = 1, .reusable = false}, SHIFT(59),
  [118] = {.count = 1, .reusable = false}, SHIFT(60),
  [120] = {.count = 1, .reusable = false}, SHIFT(61),
  [122] = {.count = 1, .reusable = false}, SHIFT(62),
  [124] = {.count = 1, .reusable = false}, SHIFT(63),
  [126] = {.count = 1, .reusable = false}, SHIFT(64),
  [128] = {.count = 1, .reusable = false}, SHIFT(65),
  [130] = {.count = 1, .reusable = false}, SHIFT(67),
  [132] = {.count = 1, .reusable = false}, SHIFT(72),
  [134] = {.count = 1, .reusable = false}, SHIFT(73),
  [136] = {.count = 1, .reusable = true}, SHIFT(74),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_digit_escape, 1),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [142] = {.count = 1, .reusable = true}, SHIFT(76),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [148] = {.count = 1, .reusable = true}, SHIFT(22),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_rules, 1),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 1),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_term, 1),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_directives, 2),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(7),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(8),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(9),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym_directives_repeat1, 2),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(11),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_code, 3),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_code, 3),
  [176] = {.count = 1, .reusable = true}, SHIFT(82),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_state_decl, 3),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_state_decl, 3),
  [182] = {.count = 1, .reusable = false}, SHIFT(84),
  [184] = {.count = 1, .reusable = false}, SHIFT(85),
  [186] = {.count = 1, .reusable = false}, SHIFT(86),
  [188] = {.count = 1, .reusable = false}, SHIFT(89),
  [190] = {.count = 1, .reusable = false}, SHIFT(90),
  [192] = {.count = 1, .reusable = true}, SHIFT(91),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_macro_def, 3),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_macro_def, 3),
  [198] = {.count = 1, .reusable = true}, SHIFT(43),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_disjunction, 1),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_state, 2),
  [204] = {.count = 1, .reusable = true}, SHIFT(95),
  [206] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [208] = {.count = 1, .reusable = false}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [210] = {.count = 1, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2),
  [212] = {.count = 1, .reusable = false}, SHIFT(97),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 2),
  [216] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1, .alias_sequence_id = 1),
  [218] = {.count = 1, .reusable = false}, SHIFT(99),
  [220] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 1),
  [222] = {.count = 1, .reusable = false}, SHIFT(100),
  [224] = {.count = 1, .reusable = false}, SHIFT(101),
  [226] = {.count = 1, .reusable = false}, SHIFT(102),
  [228] = {.count = 1, .reusable = true}, SHIFT(103),
  [230] = {.count = 1, .reusable = true}, SHIFT(105),
  [232] = {.count = 1, .reusable = true}, SHIFT(67),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim, 2),
  [236] = {.count = 1, .reusable = false}, SHIFT(109),
  [238] = {.count = 1, .reusable = false}, SHIFT(110),
  [240] = {.count = 1, .reusable = true}, SHIFT(111),
  [242] = {.count = 1, .reusable = true}, SHIFT(113),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 2),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [250] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rules_repeat1, 2),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(21),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(22),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(23),
  [261] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(24),
  [264] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(25),
  [267] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(26),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(27),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(28),
  [276] = {.count = 2, .reusable = false}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(29),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(23),
  [285] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(24),
  [288] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(25),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(26),
  [294] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(27),
  [297] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(28),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(29),
  [303] = {.count = 1, .reusable = true}, REDUCE(aux_sym_state_decl_repeat1, 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(aux_sym_state_decl_repeat1, 2),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_state_decl_repeat1, 2), SHIFT_REPEAT(41),
  [310] = {.count = 1, .reusable = false}, SHIFT(114),
  [312] = {.count = 1, .reusable = true}, SHIFT(116),
  [314] = {.count = 1, .reusable = false}, SHIFT(117),
  [316] = {.count = 1, .reusable = true}, SHIFT(118),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_disjunction, 2),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(43),
  [323] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(44),
  [326] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(45),
  [329] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(46),
  [332] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(47),
  [335] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(48),
  [338] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(49),
  [341] = {.count = 2, .reusable = false}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(50),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_state, 3),
  [346] = {.count = 1, .reusable = true}, SHIFT(119),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 3),
  [350] = {.count = 1, .reusable = false}, SHIFT(121),
  [352] = {.count = 1, .reusable = false}, SHIFT(122),
  [354] = {.count = 1, .reusable = false}, SHIFT(123),
  [356] = {.count = 1, .reusable = false}, SHIFT(124),
  [358] = {.count = 1, .reusable = false}, SHIFT(125),
  [360] = {.count = 1, .reusable = false}, SHIFT(126),
  [362] = {.count = 1, .reusable = true}, SHIFT(127),
  [364] = {.count = 1, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2),
  [366] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(61),
  [369] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(62),
  [372] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(63),
  [375] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(64),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(65),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(67),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim, 3),
  [388] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_repeat1, 2),
  [390] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_repeat1, 2), SHIFT_REPEAT(110),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 3),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_rule, 3),
  [399] = {.count = 1, .reusable = true}, SHIFT(128),
  [401] = {.count = 1, .reusable = false}, SHIFT(129),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_state, 4),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_character_class, 4),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 2),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 1),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3, .alias_sequence_id = 3),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_class_range, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_action, 3),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_action, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jlex() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
