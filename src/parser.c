#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 49
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

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
  anon_sym_hello = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH = 13,
  sym_identifier = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym_user_code = 17,
  sym_directives = 18,
  sym_code = 19,
  sym_macro_def = 20,
  sym_state_decl = 21,
  sym_directive = 22,
  sym_rules = 23,
  sym_rule = 24,
  sym_state = 25,
  sym_regex = 26,
  sym_action = 27,
  sym_section_separator = 28,
  sym_java_code = 29,
  aux_sym_directives_repeat1 = 30,
  aux_sym_state_decl_repeat1 = 31,
  aux_sym_rules_repeat1 = 32,
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
  [anon_sym_hello] = "hello",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = "/^%%/",
  [sym_identifier] = "identifier",
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
  [sym_action] = "action",
  [sym_section_separator] = "section_separator",
  [sym_java_code] = "java_code",
  [aux_sym_directives_repeat1] = "directives_repeat1",
  [aux_sym_state_decl_repeat1] = "state_decl_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
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
  [anon_sym_hello] = {
    .visible = true,
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
  [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_section_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_java_code] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == 'h')
        ADVANCE(23);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 's')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(5);
      if (lookahead == 't')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '{')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(5);
      if (lookahead == 't')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(5);
      if (lookahead == 'e')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PERCENTstate);
      if (lookahead == '?')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(2);
      END_STATE();
    case 14:
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      if (lookahead == '%')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '%')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'l')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'l')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'o')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_hello);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == 'h')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(32);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(31);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '?')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '}')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_RBRACE_SLASH);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n')
        SKIP(39);
      if (lookahead == '#')
        ADVANCE(40);
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '^')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == 't')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == 't')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(43);
      if (lookahead == 'e')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PERCENTstate);
      if (lookahead == '?')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH);
      if (lookahead == '?')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '*')
        ADVANCE(52);
      if (lookahead == '/')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(53);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '%')
        ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '%')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '#')
        ADVANCE(40);
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '^')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(32);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 62:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(28);
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
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(64);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 59},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 60},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 60},
  [36] = {.lex_state = 62},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 63},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 60},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 64},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 60},
  [48] = {.lex_state = 30},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PERCENTstate] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_hello] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_user_code] = STATE(4),
    [sym_java_code] = STATE(5),
    [anon_sym_hello] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_RBRACE_SLASH] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
  },
  [4] = {
    [sym_directives] = STATE(11),
    [sym_code] = STATE(13),
    [sym_macro_def] = STATE(13),
    [sym_state_decl] = STATE(13),
    [sym_directive] = STATE(13),
    [sym_section_separator] = STATE(12),
    [aux_sym_directives_repeat1] = STATE(13),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(13),
    [anon_sym_PERCENTstate] = ACTIONS(15),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(7),
  },
  [5] = {
    [sym_section_separator] = STATE(15),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(23),
    [sym_comment] = ACTIONS(7),
  },
  [6] = {
    [sym_java_code] = STATE(16),
    [anon_sym_hello] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [7] = {
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(7),
  },
  [8] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(27),
    [anon_sym_PERCENTstate] = ACTIONS(27),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(29),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(31),
  },
  [9] = {
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_hello] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [10] = {
    [anon_sym_EQ] = ACTIONS(38),
    [sym_comment] = ACTIONS(7),
  },
  [11] = {
    [sym_rules] = STATE(23),
    [sym_rule] = STATE(26),
    [sym_state] = STATE(24),
    [sym_regex] = STATE(25),
    [aux_sym_rules_repeat1] = STATE(26),
    [anon_sym_LT] = ACTIONS(40),
    [anon_sym_hello] = ACTIONS(42),
    [sym_comment] = ACTIONS(7),
  },
  [12] = {
    [anon_sym_LT] = ACTIONS(44),
    [anon_sym_hello] = ACTIONS(44),
    [sym_comment] = ACTIONS(7),
  },
  [13] = {
    [sym_code] = STATE(28),
    [sym_macro_def] = STATE(28),
    [sym_state_decl] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_section_separator] = STATE(27),
    [aux_sym_directives_repeat1] = STATE(28),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(13),
    [anon_sym_PERCENTstate] = ACTIONS(15),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(7),
  },
  [14] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(33),
    [anon_sym_PERCENTstate] = ACTIONS(46),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(33),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(48),
  },
  [15] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(51),
    [anon_sym_PERCENTstate] = ACTIONS(53),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(7),
  },
  [16] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_RBRACE_SLASH] = ACTIONS(55),
    [sym_comment] = ACTIONS(7),
  },
  [17] = {
    [aux_sym_state_decl_repeat1] = STATE(32),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(57),
    [anon_sym_PERCENTstate] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(61),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(7),
  },
  [18] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(63),
    [anon_sym_PERCENTstate] = ACTIONS(65),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(63),
    [sym_identifier] = ACTIONS(63),
    [sym_comment] = ACTIONS(7),
  },
  [19] = {
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_hello] = ACTIONS(67),
    [sym_comment] = ACTIONS(7),
  },
  [20] = {
    [sym_regex] = STATE(33),
    [anon_sym_hello] = ACTIONS(42),
    [sym_comment] = ACTIONS(7),
  },
  [21] = {
    [anon_sym_GT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym_comment] = ACTIONS(7),
  },
  [22] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(73),
    [anon_sym_PERCENTstate] = ACTIONS(75),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(73),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [sym_comment] = ACTIONS(7),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_comment] = ACTIONS(7),
  },
  [24] = {
    [sym_regex] = STATE(36),
    [anon_sym_hello] = ACTIONS(42),
    [sym_comment] = ACTIONS(7),
  },
  [25] = {
    [sym_action] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(7),
  },
  [26] = {
    [sym_rule] = STATE(39),
    [sym_state] = STATE(24),
    [sym_regex] = STATE(25),
    [aux_sym_rules_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(40),
    [anon_sym_hello] = ACTIONS(42),
    [sym_comment] = ACTIONS(7),
  },
  [27] = {
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_hello] = ACTIONS(83),
    [sym_comment] = ACTIONS(7),
  },
  [28] = {
    [sym_code] = STATE(28),
    [sym_macro_def] = STATE(28),
    [sym_state_decl] = STATE(28),
    [sym_directive] = STATE(28),
    [aux_sym_directives_repeat1] = STATE(28),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(85),
    [anon_sym_PERCENTstate] = ACTIONS(88),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(7),
  },
  [29] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(67),
    [anon_sym_PERCENTstate] = ACTIONS(99),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(67),
    [sym_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(7),
  },
  [30] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(101),
    [anon_sym_PERCENTstate] = ACTIONS(103),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(7),
  },
  [31] = {
    [sym_identifier] = ACTIONS(105),
    [sym_comment] = ACTIONS(7),
  },
  [32] = {
    [aux_sym_state_decl_repeat1] = STATE(41),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(107),
    [anon_sym_PERCENTstate] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(61),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [sym_comment] = ACTIONS(7),
  },
  [33] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(111),
    [anon_sym_PERCENTstate] = ACTIONS(113),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(111),
    [sym_identifier] = ACTIONS(111),
    [sym_comment] = ACTIONS(7),
  },
  [34] = {
    [anon_sym_hello] = ACTIONS(115),
    [sym_comment] = ACTIONS(7),
  },
  [35] = {
    [aux_sym_state_decl_repeat1] = STATE(43),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(117),
    [sym_comment] = ACTIONS(7),
  },
  [36] = {
    [sym_action] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(7),
  },
  [37] = {
    [sym_java_code] = STATE(45),
    [anon_sym_hello] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(119),
    [anon_sym_hello] = ACTIONS(119),
    [sym_comment] = ACTIONS(7),
  },
  [39] = {
    [sym_rule] = STATE(39),
    [sym_state] = STATE(24),
    [sym_regex] = STATE(25),
    [aux_sym_rules_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_hello] = ACTIONS(126),
    [sym_comment] = ACTIONS(7),
  },
  [40] = {
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(129),
    [anon_sym_PERCENTstate] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(129),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(129),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [sym_comment] = ACTIONS(7),
  },
  [41] = {
    [aux_sym_state_decl_repeat1] = STATE(41),
    [aux_sym_SLASH_PERCENT_LPAREN_BSLASHw_RPAREN_PLUS_QMARK_LBRACE_SLASH] = ACTIONS(129),
    [anon_sym_PERCENTstate] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(133),
    [aux_sym_SLASH_PERCENT_BSLASHw_PLUS_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_CARET_PERCENT_PERCENT_SLASH] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [sym_comment] = ACTIONS(7),
  },
  [42] = {
    [anon_sym_hello] = ACTIONS(136),
    [sym_comment] = ACTIONS(7),
  },
  [43] = {
    [aux_sym_state_decl_repeat1] = STATE(47),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(138),
    [sym_comment] = ACTIONS(7),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_hello] = ACTIONS(140),
    [sym_comment] = ACTIONS(7),
  },
  [45] = {
    [anon_sym_RBRACE] = ACTIONS(142),
    [sym_comment] = ACTIONS(7),
  },
  [46] = {
    [anon_sym_hello] = ACTIONS(144),
    [sym_comment] = ACTIONS(7),
  },
  [47] = {
    [aux_sym_state_decl_repeat1] = STATE(47),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(129),
    [sym_comment] = ACTIONS(7),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_hello] = ACTIONS(146),
    [sym_comment] = ACTIONS(7),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_java_code, 1),
  [11] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = false}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(17),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_directive, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(18),
  [31] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_section_separator, 1),
  [35] = {.count = 2, .reusable = true}, SHIFT(19), SHIFT_EXTRA(),
  [38] = {.count = 1, .reusable = true}, SHIFT(20),
  [40] = {.count = 1, .reusable = true}, SHIFT(21),
  [42] = {.count = 1, .reusable = true}, SHIFT(22),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_directives, 1),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_section_separator, 1),
  [48] = {.count = 2, .reusable = true}, SHIFT(29), SHIFT_EXTRA(),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_user_code, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_user_code, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(30),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_state_decl, 2),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_state_decl, 2),
  [61] = {.count = 1, .reusable = true}, SHIFT(31),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_directive, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_section_separator, 2),
  [69] = {.count = 1, .reusable = true}, SHIFT(34),
  [71] = {.count = 1, .reusable = true}, SHIFT(35),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [79] = {.count = 1, .reusable = true}, SHIFT(37),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_rules, 1),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_directives, 2),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(6),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(7),
  [91] = {.count = 2, .reusable = false}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(8),
  [94] = {.count = 1, .reusable = true}, REDUCE(aux_sym_directives_repeat1, 2),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_directives_repeat1, 2), SHIFT_REPEAT(10),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_section_separator, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_code, 3),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_code, 3),
  [105] = {.count = 1, .reusable = true}, SHIFT(40),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_state_decl, 3),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_state_decl, 3),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_macro_def, 3),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_macro_def, 3),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_state, 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(42),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rules_repeat1, 2),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(21),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(22),
  [129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_state_decl_repeat1, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(aux_sym_state_decl_repeat1, 2),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_state_decl_repeat1, 2), SHIFT_REPEAT(31),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_state, 3),
  [138] = {.count = 1, .reusable = true}, SHIFT(46),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 3),
  [142] = {.count = 1, .reusable = true}, SHIFT(48),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_state, 4),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_action, 3),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
