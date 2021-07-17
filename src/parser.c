#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 21

enum {
  anon_sym_COLON_DASH = 1,
  anon_sym_DOT = 2,
  anon_sym_QMARK_DASH = 3,
  anon_sym_COLON = 4,
  anon_sym_COMMA = 5,
  anon_sym_DASH_DASH_GT = 6,
  anon_sym_DASH_DASH_GT_GT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACE_PIPE = 10,
  anon_sym_PIPE_PIPE = 11,
  aux_sym_quasiquote_token1 = 12,
  anon_sym_PIPE_RBRACE = 13,
  aux_sym_dict_op_term_token1 = 14,
  aux_sym_dict_operator_token1 = 15,
  aux_sym_dict_operator_token2 = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_LPAREN2 = 19,
  aux_sym_atom_token1 = 20,
  aux_sym_atom_token2 = 21,
  anon_sym_DOT_DOT = 22,
  sym__sym_atom = 23,
  aux_sym_var_token1 = 24,
  anon_sym_BSLASH = 25,
  anon_sym_BSLASH_PLUS = 26,
  anon_sym_dynamic = 27,
  anon_sym_discontiguous = 28,
  anon_sym_initialization = 29,
  anon_sym_meta_predicate = 30,
  anon_sym_module_transparent = 31,
  anon_sym_multifile = 32,
  anon_sym_public = 33,
  anon_sym_thread_local = 34,
  anon_sym_thread_initialization = 35,
  anon_sym_volatile = 36,
  anon_sym_CARET = 37,
  anon_sym_STAR_STAR = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_SLASH_SLASH = 41,
  anon_sym_div = 42,
  anon_sym_rdiv = 43,
  anon_sym_LT_LT = 44,
  anon_sym_GT_GT = 45,
  anon_sym_mod = 46,
  anon_sym_rem = 47,
  anon_sym_PLUS = 48,
  anon_sym_DASH = 49,
  anon_sym_SLASH_BSLASH = 50,
  anon_sym_BSLASH_SLASH = 51,
  anon_sym_xor = 52,
  anon_sym_LT = 53,
  anon_sym_EQ = 54,
  anon_sym_EQ_DOT_DOT = 55,
  anon_sym_EQ_AT_EQ = 56,
  anon_sym_BSLASH_EQ_AT_EQ = 57,
  anon_sym_EQ_COLON_EQ = 58,
  anon_sym_EQ_LT = 59,
  anon_sym_EQ_EQ = 60,
  anon_sym_EQ_BSLASH_EQ = 61,
  anon_sym_GT = 62,
  anon_sym_GT_EQ = 63,
  anon_sym_AT_LT = 64,
  anon_sym_AT_EQ_LT = 65,
  anon_sym_AT_GT = 66,
  anon_sym_AT_GT_EQ = 67,
  anon_sym_BSLASH_EQ = 68,
  anon_sym_BSLASH_EQ_EQ = 69,
  anon_sym_as = 70,
  anon_sym_is = 71,
  anon_sym_GT_COLON_LT = 72,
  anon_sym_COLON_LT = 73,
  anon_sym_COLON_EQ = 74,
  anon_sym_DASH_GT = 75,
  anon_sym_STAR_DASH_GT = 76,
  anon_sym_SEMI = 77,
  anon_sym_PIPE = 78,
  sym_string = 79,
  sym_codes = 80,
  sym_comment = 81,
  sym_escape_sequence = 82,
  anon_sym_0_SQUOTE = 83,
  aux_sym_char_code_token1 = 84,
  aux_sym_number_token1 = 85,
  aux_sym_number_token2 = 86,
  aux_sym_number_token3 = 87,
  aux_sym_number_token4 = 88,
  aux_sym_number_token5 = 89,
  aux_sym_number_token6 = 90,
  aux_sym_number_token7 = 91,
  aux_sym_number_token8 = 92,
  aux_sym_number_token9 = 93,
  aux_sym_number_token10 = 94,
  anon_sym_LBRACK = 95,
  anon_sym_RBRACK = 96,
  anon_sym_LBRACE2 = 97,
  sym_source_file = 98,
  sym__topLevel = 99,
  sym_directive = 100,
  sym_query = 101,
  sym_predicate_definition = 102,
  sym_dcg_definition = 103,
  sym_values = 104,
  sym_term = 105,
  sym__simple_value = 106,
  sym_quasiquote = 107,
  sym_dict_op_term = 108,
  sym_dict_operator = 109,
  sym__value = 110,
  sym_curly_braced = 111,
  sym_parenthesized = 112,
  sym_atom = 113,
  sym_var = 114,
  sym_unary_op = 115,
  sym_binary_op = 116,
  sym_char_code = 117,
  sym_number = 118,
  sym_list = 119,
  sym_dict = 120,
  sym_dict_entries = 121,
  sym_dict_entry = 122,
  aux_sym_source_file_repeat1 = 123,
  aux_sym_values_repeat1 = 124,
  aux_sym_dict_entries_repeat1 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK_DASH] = "\?-",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_DASH_DASH_GT_GT] = "-->>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE_PIPE] = "{|",
  [anon_sym_PIPE_PIPE] = "||",
  [aux_sym_quasiquote_token1] = "string",
  [anon_sym_PIPE_RBRACE] = "|}",
  [aux_sym_dict_op_term_token1] = "atom",
  [aux_sym_dict_operator_token1] = "atom",
  [aux_sym_dict_operator_token2] = "var",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN2] = "(",
  [aux_sym_atom_token1] = "atom_token1",
  [aux_sym_atom_token2] = "atom_token2",
  [anon_sym_DOT_DOT] = "..",
  [sym__sym_atom] = "_sym_atom",
  [aux_sym_var_token1] = "var_token1",
  [anon_sym_BSLASH] = "atom",
  [anon_sym_BSLASH_PLUS] = "atom",
  [anon_sym_dynamic] = "atom",
  [anon_sym_discontiguous] = "atom",
  [anon_sym_initialization] = "atom",
  [anon_sym_meta_predicate] = "atom",
  [anon_sym_module_transparent] = "atom",
  [anon_sym_multifile] = "atom",
  [anon_sym_public] = "atom",
  [anon_sym_thread_local] = "atom",
  [anon_sym_thread_initialization] = "atom",
  [anon_sym_volatile] = "atom",
  [anon_sym_CARET] = "atom",
  [anon_sym_STAR_STAR] = "atom",
  [anon_sym_STAR] = "atom",
  [anon_sym_SLASH] = "atom",
  [anon_sym_SLASH_SLASH] = "atom",
  [anon_sym_div] = "atom",
  [anon_sym_rdiv] = "atom",
  [anon_sym_LT_LT] = "atom",
  [anon_sym_GT_GT] = "atom",
  [anon_sym_mod] = "atom",
  [anon_sym_rem] = "atom",
  [anon_sym_PLUS] = "atom",
  [anon_sym_DASH] = "atom",
  [anon_sym_SLASH_BSLASH] = "atom",
  [anon_sym_BSLASH_SLASH] = "atom",
  [anon_sym_xor] = "atom",
  [anon_sym_LT] = "atom",
  [anon_sym_EQ] = "atom",
  [anon_sym_EQ_DOT_DOT] = "atom",
  [anon_sym_EQ_AT_EQ] = "atom",
  [anon_sym_BSLASH_EQ_AT_EQ] = "atom",
  [anon_sym_EQ_COLON_EQ] = "atom",
  [anon_sym_EQ_LT] = "atom",
  [anon_sym_EQ_EQ] = "atom",
  [anon_sym_EQ_BSLASH_EQ] = "atom",
  [anon_sym_GT] = "atom",
  [anon_sym_GT_EQ] = "atom",
  [anon_sym_AT_LT] = "atom",
  [anon_sym_AT_EQ_LT] = "atom",
  [anon_sym_AT_GT] = "atom",
  [anon_sym_AT_GT_EQ] = "atom",
  [anon_sym_BSLASH_EQ] = "atom",
  [anon_sym_BSLASH_EQ_EQ] = "atom",
  [anon_sym_as] = "atom",
  [anon_sym_is] = "atom",
  [anon_sym_GT_COLON_LT] = "atom",
  [anon_sym_COLON_LT] = "atom",
  [anon_sym_COLON_EQ] = "atom",
  [anon_sym_DASH_GT] = "atom",
  [anon_sym_STAR_DASH_GT] = "atom",
  [anon_sym_SEMI] = "atom",
  [anon_sym_PIPE] = "|",
  [sym_string] = "string",
  [sym_codes] = "codes",
  [sym_comment] = "comment",
  [sym_escape_sequence] = ".",
  [anon_sym_0_SQUOTE] = "0'",
  [aux_sym_char_code_token1] = "char_code_token1",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [aux_sym_number_token5] = "number_token5",
  [aux_sym_number_token6] = "number_token6",
  [aux_sym_number_token7] = "number_token7",
  [aux_sym_number_token8] = "number_token8",
  [aux_sym_number_token9] = "number_token9",
  [aux_sym_number_token10] = "number_token10",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE2] = "{",
  [sym_source_file] = "source_file",
  [sym__topLevel] = "_topLevel",
  [sym_directive] = "directive",
  [sym_query] = "query",
  [sym_predicate_definition] = "predicate_definition",
  [sym_dcg_definition] = "dcg_definition",
  [sym_values] = "values",
  [sym_term] = "term",
  [sym__simple_value] = "_simple_value",
  [sym_quasiquote] = "quasiquote",
  [sym_dict_op_term] = "term",
  [sym_dict_operator] = "dict_operator",
  [sym__value] = "_value",
  [sym_curly_braced] = "curly_braced",
  [sym_parenthesized] = "parenthesized",
  [sym_atom] = "atom",
  [sym_var] = "var",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [sym_char_code] = "char_code",
  [sym_number] = "number",
  [sym_list] = "list",
  [sym_dict] = "dict",
  [sym_dict_entries] = "dict_entries",
  [sym_dict_entry] = "dict_entry",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_values_repeat1] = "values_repeat1",
  [aux_sym_dict_entries_repeat1] = "dict_entries_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK_DASH] = anon_sym_QMARK_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_DASH_DASH_GT_GT] = anon_sym_DASH_DASH_GT_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE_PIPE] = anon_sym_LBRACE_PIPE,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [aux_sym_quasiquote_token1] = sym_string,
  [anon_sym_PIPE_RBRACE] = anon_sym_PIPE_RBRACE,
  [aux_sym_dict_op_term_token1] = sym_atom,
  [aux_sym_dict_operator_token1] = sym_atom,
  [aux_sym_dict_operator_token2] = sym_var,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [aux_sym_atom_token1] = aux_sym_atom_token1,
  [aux_sym_atom_token2] = aux_sym_atom_token2,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym__sym_atom] = sym__sym_atom,
  [aux_sym_var_token1] = aux_sym_var_token1,
  [anon_sym_BSLASH] = sym_atom,
  [anon_sym_BSLASH_PLUS] = sym_atom,
  [anon_sym_dynamic] = sym_atom,
  [anon_sym_discontiguous] = sym_atom,
  [anon_sym_initialization] = sym_atom,
  [anon_sym_meta_predicate] = sym_atom,
  [anon_sym_module_transparent] = sym_atom,
  [anon_sym_multifile] = sym_atom,
  [anon_sym_public] = sym_atom,
  [anon_sym_thread_local] = sym_atom,
  [anon_sym_thread_initialization] = sym_atom,
  [anon_sym_volatile] = sym_atom,
  [anon_sym_CARET] = sym_atom,
  [anon_sym_STAR_STAR] = sym_atom,
  [anon_sym_STAR] = sym_atom,
  [anon_sym_SLASH] = sym_atom,
  [anon_sym_SLASH_SLASH] = sym_atom,
  [anon_sym_div] = sym_atom,
  [anon_sym_rdiv] = sym_atom,
  [anon_sym_LT_LT] = sym_atom,
  [anon_sym_GT_GT] = sym_atom,
  [anon_sym_mod] = sym_atom,
  [anon_sym_rem] = sym_atom,
  [anon_sym_PLUS] = sym_atom,
  [anon_sym_DASH] = sym_atom,
  [anon_sym_SLASH_BSLASH] = sym_atom,
  [anon_sym_BSLASH_SLASH] = sym_atom,
  [anon_sym_xor] = sym_atom,
  [anon_sym_LT] = sym_atom,
  [anon_sym_EQ] = sym_atom,
  [anon_sym_EQ_DOT_DOT] = sym_atom,
  [anon_sym_EQ_AT_EQ] = sym_atom,
  [anon_sym_BSLASH_EQ_AT_EQ] = sym_atom,
  [anon_sym_EQ_COLON_EQ] = sym_atom,
  [anon_sym_EQ_LT] = sym_atom,
  [anon_sym_EQ_EQ] = sym_atom,
  [anon_sym_EQ_BSLASH_EQ] = sym_atom,
  [anon_sym_GT] = sym_atom,
  [anon_sym_GT_EQ] = sym_atom,
  [anon_sym_AT_LT] = sym_atom,
  [anon_sym_AT_EQ_LT] = sym_atom,
  [anon_sym_AT_GT] = sym_atom,
  [anon_sym_AT_GT_EQ] = sym_atom,
  [anon_sym_BSLASH_EQ] = sym_atom,
  [anon_sym_BSLASH_EQ_EQ] = sym_atom,
  [anon_sym_as] = sym_atom,
  [anon_sym_is] = sym_atom,
  [anon_sym_GT_COLON_LT] = sym_atom,
  [anon_sym_COLON_LT] = sym_atom,
  [anon_sym_COLON_EQ] = sym_atom,
  [anon_sym_DASH_GT] = sym_atom,
  [anon_sym_STAR_DASH_GT] = sym_atom,
  [anon_sym_SEMI] = sym_atom,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_string] = sym_string,
  [sym_codes] = sym_codes,
  [sym_comment] = sym_comment,
  [sym_escape_sequence] = anon_sym_DOT,
  [anon_sym_0_SQUOTE] = anon_sym_0_SQUOTE,
  [aux_sym_char_code_token1] = aux_sym_char_code_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [aux_sym_number_token5] = aux_sym_number_token5,
  [aux_sym_number_token6] = aux_sym_number_token6,
  [aux_sym_number_token7] = aux_sym_number_token7,
  [aux_sym_number_token8] = aux_sym_number_token8,
  [aux_sym_number_token9] = aux_sym_number_token9,
  [aux_sym_number_token10] = aux_sym_number_token10,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [sym_source_file] = sym_source_file,
  [sym__topLevel] = sym__topLevel,
  [sym_directive] = sym_directive,
  [sym_query] = sym_query,
  [sym_predicate_definition] = sym_predicate_definition,
  [sym_dcg_definition] = sym_dcg_definition,
  [sym_values] = sym_values,
  [sym_term] = sym_term,
  [sym__simple_value] = sym__simple_value,
  [sym_quasiquote] = sym_quasiquote,
  [sym_dict_op_term] = sym_term,
  [sym_dict_operator] = sym_dict_operator,
  [sym__value] = sym__value,
  [sym_curly_braced] = sym_curly_braced,
  [sym_parenthesized] = sym_parenthesized,
  [sym_atom] = sym_atom,
  [sym_var] = sym_var,
  [sym_unary_op] = sym_unary_op,
  [sym_binary_op] = sym_binary_op,
  [sym_char_code] = sym_char_code,
  [sym_number] = sym_number,
  [sym_list] = sym_list,
  [sym_dict] = sym_dict,
  [sym_dict_entries] = sym_dict_entries,
  [sym_dict_entry] = sym_dict_entry,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_values_repeat1] = aux_sym_values_repeat1,
  [aux_sym_dict_entries_repeat1] = aux_sym_dict_entries_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quasiquote_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dict_op_term_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dict_operator_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dict_operator_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__sym_atom] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_var_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_discontiguous] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_initialization] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_meta_predicate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module_transparent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_multifile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_thread_local] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_thread_initialization] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rdiv] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_AT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_EQ_AT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_COLON_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_BSLASH_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_EQ_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_GT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_COLON_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_codes] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE2] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__topLevel] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_dcg_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_values] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_value] = {
    .visible = false,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_op_term] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_curly_braced] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_char_code] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_entries] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_entry] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_entries_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_body = 2,
  field_entries = 3,
  field_functor = 4,
  field_head = 5,
  field_key = 6,
  field_lhs = 7,
  field_module = 8,
  field_operator = 9,
  field_quotation = 10,
  field_rhs = 11,
  field_semicontext = 12,
  field_syntax = 13,
  field_tag = 14,
  field_tail = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_entries] = "entries",
  [field_functor] = "functor",
  [field_head] = "head",
  [field_key] = "key",
  [field_lhs] = "lhs",
  [field_module] = "module",
  [field_operator] = "operator",
  [field_quotation] = "quotation",
  [field_rhs] = "rhs",
  [field_semicontext] = "semicontext",
  [field_syntax] = "syntax",
  [field_tag] = "tag",
  [field_tail] = "tail",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 3},
  [5] = {.index = 3, .length = 3},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 3},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 3},
  [18] = {.index = 31, .length = 4},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_head, 0},
  [1] =
    {field_operator, 0},
    {field_rhs, 1},
  [3] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [6] =
    {field_tag, 0},
  [7] =
    {field_body, 1},
    {field_body, 2},
    {field_head, 0},
  [10] =
    {field_body, 2},
    {field_head, 0},
  [12] =
    {field_head, 2},
    {field_module, 0},
  [14] =
    {field_arguments, 2},
    {field_functor, 0},
  [16] =
    {field_tail, 1},
    {field_tail, 2},
  [18] =
    {field_arguments, 1},
    {field_functor, 0},
  [20] =
    {field_entries, 2},
    {field_tag, 0},
  [22] =
    {field_quotation, 3},
    {field_syntax, 1},
  [24] =
    {field_tail, 2},
    {field_tail, 3},
  [26] =
    {field_key, 0},
    {field_value, 2},
  [28] =
    {field_body, 4},
    {field_head, 0},
    {field_semicontext, 2},
  [31] =
    {field_body, 3},
    {field_body, 4},
    {field_head, 2},
    {field_module, 0},
  [35] =
    {field_body, 4},
    {field_head, 2},
    {field_module, 0},
  [38] =
    {field_body, 6},
    {field_head, 2},
    {field_module, 0},
    {field_semicontext, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_atom,
  },
  [4] = {
    [1] = sym_atom,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__sym_atom_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '$')
      : (c <= '+' || c == '-'))
    : (c <= '/' || (c < '\\'
      ? (c < '>'
        ? (c >= ':' && c <= ';')
        : c <= '@')
      : (c <= '\\' || c == '^'))));
}

static inline bool sym__sym_atom_character_set_2(int32_t c) {
  return (c < '/'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '$')
      : (c <= '+' || c == '-'))
    : (c <= '/' || (c < '\\'
      ? (c < '?'
        ? (c >= ':' && c <= '=')
        : c <= '@')
      : (c <= '\\' || c == '^'))));
}

static inline bool sym__sym_atom_character_set_3(int32_t c) {
  return (c < '/'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '$')
      : (c <= '+' || c == '-'))
    : (c <= '/' || (c < '\\'
      ? (c < '?'
        ? (c >= ':' && c <= ';')
        : c <= '@')
      : (c <= '\\' || c == '^'))));
}

static inline bool sym__sym_atom_character_set_4(int32_t c) {
  return (c < '/'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '$')
      : (c <= '+' || c == '-'))
    : (c <= '/' || (c < '\\'
      ? (c < '='
        ? (c >= ':' && c <= ';')
        : c <= '@')
      : (c <= '\\' || c == '^'))));
}

static inline bool sym__sym_atom_character_set_5(int32_t c) {
  return (c < '/'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '$')
      : (c <= '+' || c == '-'))
    : (c <= '/' || (c < '\\'
      ? (c < '>'
        ? (c >= ':' && c <= '<')
        : c <= '@')
      : (c <= '\\' || c == '^'))));
}

static inline bool sym__sym_atom_character_set_6(int32_t c) {
  return (c < '/'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '$')
      : (c <= '+' || c == '-'))
    : (c <= '/' || (c < '\\'
      ? (c < '?'
        ? (c >= ';' && c <= '<')
        : c <= '@')
      : (c <= '\\' || c == '^'))));
}

static inline bool sym__sym_atom_character_set_7(int32_t c) {
  return (c < '/'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '$')
      : (c <= '+' || c == '-'))
    : (c <= '/' || (c < '\\'
      ? (c < '>'
        ? (c >= ':' && c <= '<')
        : c <= '?')
      : (c <= '\\' || c == '^'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$') ADVANCE(239);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '|') ADVANCE(306);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(281);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(222);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '`') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(339);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == '|') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(92);
      END_STATE();
    case 29:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(332);
      END_STATE();
    case 30:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '?') ADVANCE(239);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 31:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '?') ADVANCE(239);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 32:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '?') ADVANCE(239);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 33:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '?') ADVANCE(239);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 34:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '?') ADVANCE(239);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(270);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 35:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '?') ADVANCE(239);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(270);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 36:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '?') ADVANCE(239);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(270);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 37:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '?') ADVANCE(239);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(270);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 39:
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(336);
      END_STATE();
    case 40:
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(337);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(331);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(338);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(240);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 45:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 46:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 47:
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '.') ADVANCE(223);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 62:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 65:
      if (eof) ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$') ADVANCE(239);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '<') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '[') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          (';' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(222);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '.') ADVANCE(223);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('>' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '<') ADVANCE(299);
      if (lookahead == '=') ADVANCE(300);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (sym__sym_atom_character_set_1(lookahead)) ADVANCE(239);
      if (lookahead == '<') ADVANCE(299);
      if (lookahead == '=') ADVANCE(300);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (sym__sym_atom_character_set_2(lookahead)) ADVANCE(239);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT_GT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_quasiquote_token1);
      if (lookahead == '%') ADVANCE(310);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_quasiquote_token1);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_quasiquote_token1);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_quasiquote_token1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_quasiquote_token1);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_dict_op_term_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_dict_operator_token1);
      if (lookahead == '(') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_dict_operator_token1);
      if (lookahead == '(') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_dict_operator_token1);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(96);
      if (lookahead == '(') ADVANCE(93);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_dict_operator_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '_') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '_') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '_') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'b') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'f') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'g') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'h') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'y') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'y') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'm') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 's') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'p') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'p') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 's') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 's') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 'v') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 's') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'u') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'u') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'u') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'u') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'v') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'v') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'z') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'z') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_atom_token2);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__sym_atom);
      if (sym__sym_atom_character_set_3(lookahead)) ADVANCE(239);
      if (lookahead == '<') ADVANCE(290);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__sym_atom);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(228);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__sym_atom);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '/') ADVANCE(277);
      if (lookahead == '=') ADVANCE(294);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__sym_atom);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '*') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__sym_atom);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(228);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__sym_atom);
      if (sym__sym_atom_character_set_4(lookahead)) ADVANCE(239);
      if (lookahead == '<') ADVANCE(298);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__sym_atom);
      if (sym__sym_atom_character_set_4(lookahead)) ADVANCE(239);
      if (lookahead == '<') ADVANCE(291);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__sym_atom);
      if (sym__sym_atom_character_set_5(lookahead)) ADVANCE(239);
      if (lookahead == '=') ADVANCE(284);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__sym_atom);
      if (sym__sym_atom_character_set_5(lookahead)) ADVANCE(239);
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__sym_atom);
      if (sym__sym_atom_character_set_5(lookahead)) ADVANCE(239);
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__sym_atom);
      if (sym__sym_atom_character_set_5(lookahead)) ADVANCE(239);
      if (lookahead == '=') ADVANCE(283);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__sym_atom);
      if (sym__sym_atom_character_set_2(lookahead)) ADVANCE(239);
      if (lookahead == '>') ADVANCE(302);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__sym_atom);
      if (sym__sym_atom_character_set_2(lookahead)) ADVANCE(239);
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__sym_atom);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__sym_atom);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__sym_atom);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__sym_atom);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '0') ADVANCE(325);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_var_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_var_token1);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(242);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_var_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_var_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '+') ADVANCE(247);
      if (lookahead == '/') ADVANCE(277);
      if (lookahead == '=') ADVANCE(294);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '+') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_dynamic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_discontiguous);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_initialization);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_meta_predicate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_module_transparent);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_multifile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_thread_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_thread_initialization);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '+' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(276);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_div);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_rdiv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == 'u') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_rem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '0') ADVANCE(325);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '0') ADVANCE(325);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '>') ADVANCE(301);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (sym__sym_atom_character_set_2(lookahead)) ADVANCE(239);
      if (lookahead == '0') ADVANCE(325);
      if (lookahead == '3') ADVANCE(322);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (sym__sym_atom_character_set_2(lookahead)) ADVANCE(239);
      if (lookahead == '>') ADVANCE(301);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_SLASH_BSLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_BSLASH_SLASH);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LT);
      if (sym__sym_atom_character_set_4(lookahead)) ADVANCE(239);
      if (lookahead == '<') ADVANCE(265);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '?' ||
          lookahead == '^') ADVANCE(239);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '<') ADVANCE(285);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(233);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_EQ_DOT_DOT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_EQ_AT_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BSLASH_EQ_AT_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_EQ_COLON_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_EQ_BSLASH_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_GT);
      if (sym__sym_atom_character_set_6(lookahead)) ADVANCE(239);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '>') ADVANCE(266);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_AT_LT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_AT_EQ_LT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_AT_GT);
      if (sym__sym_atom_character_set_5(lookahead)) ADVANCE(239);
      if (lookahead == '=') ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_AT_GT_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_BSLASH_EQ);
      if (sym__sym_atom_character_set_7(lookahead)) ADVANCE(239);
      if (lookahead == '=') ADVANCE(295);
      if (lookahead == '@') ADVANCE(234);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_BSLASH_EQ_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_GT_COLON_LT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_COLON_LT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_STAR_DASH_GT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^') ADVANCE(239);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(86);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(92);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_codes);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '|') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_0_SQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_char_code_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_char_code_token1);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_char_code_token1);
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_char_code_token1);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(40);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(24);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'I') ADVANCE(24);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_number_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_number_token10);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 44},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 44},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 44},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 44},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 44},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 44},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 35},
  [48] = {.lex_state = 44},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 35},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 35},
  [65] = {.lex_state = 35},
  [66] = {.lex_state = 44},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 35},
  [71] = {.lex_state = 44},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 44},
  [75] = {.lex_state = 35},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 44},
  [84] = {.lex_state = 44},
  [85] = {.lex_state = 44},
  [86] = {.lex_state = 44},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 44},
  [97] = {.lex_state = 44},
  [98] = {.lex_state = 44},
  [99] = {.lex_state = 44},
  [100] = {.lex_state = 44},
  [101] = {.lex_state = 44},
  [102] = {.lex_state = 44},
  [103] = {.lex_state = 44},
  [104] = {.lex_state = 44},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 44},
  [107] = {.lex_state = 44},
  [108] = {.lex_state = 44},
  [109] = {.lex_state = 44},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 35},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 44},
  [114] = {.lex_state = 37},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 37},
  [119] = {.lex_state = 37},
  [120] = {.lex_state = 37},
  [121] = {.lex_state = 37},
  [122] = {.lex_state = 37},
  [123] = {.lex_state = 37},
  [124] = {.lex_state = 44},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 44},
  [127] = {.lex_state = 44},
  [128] = {.lex_state = 44},
  [129] = {.lex_state = 44},
  [130] = {.lex_state = 35},
  [131] = {.lex_state = 44},
  [132] = {.lex_state = 35},
  [133] = {.lex_state = 44},
  [134] = {.lex_state = 44},
  [135] = {.lex_state = 44},
  [136] = {.lex_state = 44},
  [137] = {.lex_state = 37},
  [138] = {.lex_state = 37},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 44},
  [141] = {.lex_state = 44},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 44},
  [144] = {.lex_state = 44},
  [145] = {.lex_state = 44},
  [146] = {.lex_state = 44},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 44},
  [149] = {.lex_state = 37},
  [150] = {.lex_state = 37},
  [151] = {.lex_state = 37},
  [152] = {.lex_state = 37},
  [153] = {.lex_state = 37},
  [154] = {.lex_state = 37},
  [155] = {.lex_state = 37},
  [156] = {.lex_state = 37},
  [157] = {.lex_state = 37},
  [158] = {.lex_state = 35},
  [159] = {.lex_state = 37},
  [160] = {.lex_state = 35},
  [161] = {.lex_state = 37},
  [162] = {.lex_state = 35},
  [163] = {.lex_state = 35},
  [164] = {.lex_state = 35},
  [165] = {.lex_state = 37},
  [166] = {.lex_state = 44},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 66},
  [169] = {.lex_state = 66},
  [170] = {.lex_state = 45},
  [171] = {.lex_state = 45},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 66},
  [174] = {.lex_state = 66},
  [175] = {.lex_state = 66},
  [176] = {.lex_state = 45},
  [177] = {.lex_state = 66},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 66},
  [180] = {.lex_state = 66},
  [181] = {.lex_state = 66},
  [182] = {.lex_state = 66},
  [183] = {.lex_state = 66},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 66},
  [186] = {.lex_state = 45},
  [187] = {.lex_state = 45},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 45},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 45},
  [194] = {.lex_state = 66},
  [195] = {.lex_state = 45},
  [196] = {.lex_state = 45},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 66},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 45},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 87},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 45},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 45},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 87},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 45},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACE] = ACTIONS(1),
    [aux_sym_dict_op_term_token1] = ACTIONS(1),
    [aux_sym_dict_operator_token1] = ACTIONS(1),
    [aux_sym_dict_operator_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [aux_sym_atom_token1] = ACTIONS(1),
    [aux_sym_atom_token2] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym__sym_atom] = ACTIONS(1),
    [aux_sym_var_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_PLUS] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_discontiguous] = ACTIONS(1),
    [anon_sym_initialization] = ACTIONS(1),
    [anon_sym_meta_predicate] = ACTIONS(1),
    [anon_sym_module_transparent] = ACTIONS(1),
    [anon_sym_multifile] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_thread_local] = ACTIONS(1),
    [anon_sym_thread_initialization] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_rdiv] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_rem] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_SLASH] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ_AT_EQ] = ACTIONS(1),
    [anon_sym_BSLASH_EQ_AT_EQ] = ACTIONS(1),
    [anon_sym_EQ_COLON_EQ] = ACTIONS(1),
    [anon_sym_EQ_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_BSLASH_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AT_LT] = ACTIONS(1),
    [anon_sym_AT_EQ_LT] = ACTIONS(1),
    [anon_sym_AT_GT] = ACTIONS(1),
    [anon_sym_AT_GT_EQ] = ACTIONS(1),
    [anon_sym_BSLASH_EQ] = ACTIONS(1),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_GT_COLON_LT] = ACTIONS(1),
    [anon_sym_COLON_LT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_STAR_DASH_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_codes] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_0_SQUOTE] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_number_token4] = ACTIONS(1),
    [aux_sym_number_token5] = ACTIONS(1),
    [aux_sym_number_token6] = ACTIONS(1),
    [aux_sym_number_token7] = ACTIONS(1),
    [aux_sym_number_token8] = ACTIONS(1),
    [aux_sym_number_token9] = ACTIONS(1),
    [aux_sym_number_token10] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(227),
    [sym__topLevel] = STATE(169),
    [sym_directive] = STATE(169),
    [sym_query] = STATE(169),
    [sym_predicate_definition] = STATE(169),
    [sym_dcg_definition] = STATE(169),
    [sym_term] = STATE(191),
    [sym_atom] = STATE(178),
    [aux_sym_source_file_repeat1] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [anon_sym_QMARK_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [aux_sym_atom_token2] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [sym__sym_atom] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_term] = STATE(56),
    [sym__simple_value] = STATE(56),
    [sym_quasiquote] = STATE(56),
    [sym_dict_operator] = STATE(9),
    [sym__value] = STATE(56),
    [sym_curly_braced] = STATE(56),
    [sym_parenthesized] = STATE(56),
    [sym_atom] = STATE(2),
    [sym_var] = STATE(7),
    [sym_unary_op] = STATE(56),
    [sym_binary_op] = STATE(56),
    [sym_char_code] = STATE(56),
    [sym_number] = STATE(56),
    [sym_list] = STATE(56),
    [sym_dict] = STATE(10),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_LBRACE_PIPE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_LPAREN2] = ACTIONS(27),
    [aux_sym_atom_token1] = ACTIONS(17),
    [aux_sym_atom_token2] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [sym__sym_atom] = ACTIONS(17),
    [aux_sym_var_token1] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_BSLASH_PLUS] = ACTIONS(33),
    [anon_sym_dynamic] = ACTIONS(35),
    [anon_sym_discontiguous] = ACTIONS(35),
    [anon_sym_initialization] = ACTIONS(35),
    [anon_sym_meta_predicate] = ACTIONS(35),
    [anon_sym_module_transparent] = ACTIONS(35),
    [anon_sym_multifile] = ACTIONS(35),
    [anon_sym_public] = ACTIONS(35),
    [anon_sym_thread_local] = ACTIONS(35),
    [anon_sym_thread_initialization] = ACTIONS(35),
    [anon_sym_volatile] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [anon_sym_div] = ACTIONS(17),
    [anon_sym_rdiv] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_mod] = ACTIONS(17),
    [anon_sym_rem] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_SLASH_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASH_SLASH] = ACTIONS(17),
    [anon_sym_xor] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_EQ_DOT_DOT] = ACTIONS(19),
    [anon_sym_EQ_AT_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_AT_EQ] = ACTIONS(17),
    [anon_sym_EQ_COLON_EQ] = ACTIONS(17),
    [anon_sym_EQ_LT] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_EQ_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_AT_LT] = ACTIONS(17),
    [anon_sym_AT_EQ_LT] = ACTIONS(17),
    [anon_sym_AT_GT] = ACTIONS(17),
    [anon_sym_AT_GT_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(17),
    [anon_sym_as] = ACTIONS(17),
    [anon_sym_is] = ACTIONS(17),
    [anon_sym_GT_COLON_LT] = ACTIONS(17),
    [anon_sym_COLON_LT] = ACTIONS(17),
    [anon_sym_COLON_EQ] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(17),
    [anon_sym_STAR_DASH_GT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(19),
    [sym_string] = ACTIONS(37),
    [sym_codes] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_0_SQUOTE] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
    [aux_sym_number_token2] = ACTIONS(41),
    [aux_sym_number_token3] = ACTIONS(43),
    [aux_sym_number_token4] = ACTIONS(43),
    [aux_sym_number_token5] = ACTIONS(43),
    [aux_sym_number_token6] = ACTIONS(43),
    [aux_sym_number_token7] = ACTIONS(43),
    [aux_sym_number_token8] = ACTIONS(41),
    [aux_sym_number_token9] = ACTIONS(41),
    [aux_sym_number_token10] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE2] = ACTIONS(47),
  },
  [3] = {
    [sym_term] = STATE(137),
    [sym__simple_value] = STATE(137),
    [sym_quasiquote] = STATE(137),
    [sym_dict_operator] = STATE(19),
    [sym__value] = STATE(137),
    [sym_curly_braced] = STATE(137),
    [sym_parenthesized] = STATE(137),
    [sym_atom] = STATE(3),
    [sym_var] = STATE(15),
    [sym_unary_op] = STATE(137),
    [sym_binary_op] = STATE(137),
    [sym_char_code] = STATE(137),
    [sym_number] = STATE(137),
    [sym_list] = STATE(137),
    [sym_dict] = STATE(21),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_DASH_GT] = ACTIONS(17),
    [anon_sym_DASH_DASH_GT_GT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACE_PIPE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LPAREN2] = ACTIONS(57),
    [aux_sym_atom_token1] = ACTIONS(17),
    [aux_sym_atom_token2] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [sym__sym_atom] = ACTIONS(17),
    [aux_sym_var_token1] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(61),
    [anon_sym_BSLASH_PLUS] = ACTIONS(63),
    [anon_sym_dynamic] = ACTIONS(65),
    [anon_sym_discontiguous] = ACTIONS(65),
    [anon_sym_initialization] = ACTIONS(65),
    [anon_sym_meta_predicate] = ACTIONS(65),
    [anon_sym_module_transparent] = ACTIONS(65),
    [anon_sym_multifile] = ACTIONS(65),
    [anon_sym_public] = ACTIONS(65),
    [anon_sym_thread_local] = ACTIONS(65),
    [anon_sym_thread_initialization] = ACTIONS(65),
    [anon_sym_volatile] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [anon_sym_div] = ACTIONS(17),
    [anon_sym_rdiv] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_mod] = ACTIONS(17),
    [anon_sym_rem] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_SLASH_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASH_SLASH] = ACTIONS(17),
    [anon_sym_xor] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_EQ_DOT_DOT] = ACTIONS(19),
    [anon_sym_EQ_AT_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_AT_EQ] = ACTIONS(17),
    [anon_sym_EQ_COLON_EQ] = ACTIONS(17),
    [anon_sym_EQ_LT] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_EQ_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_AT_LT] = ACTIONS(17),
    [anon_sym_AT_EQ_LT] = ACTIONS(17),
    [anon_sym_AT_GT] = ACTIONS(17),
    [anon_sym_AT_GT_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(17),
    [anon_sym_as] = ACTIONS(17),
    [anon_sym_is] = ACTIONS(17),
    [anon_sym_GT_COLON_LT] = ACTIONS(17),
    [anon_sym_COLON_LT] = ACTIONS(17),
    [anon_sym_COLON_EQ] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(17),
    [anon_sym_STAR_DASH_GT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(19),
    [sym_string] = ACTIONS(67),
    [sym_codes] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_0_SQUOTE] = ACTIONS(69),
    [aux_sym_number_token1] = ACTIONS(71),
    [aux_sym_number_token2] = ACTIONS(71),
    [aux_sym_number_token3] = ACTIONS(73),
    [aux_sym_number_token4] = ACTIONS(73),
    [aux_sym_number_token5] = ACTIONS(73),
    [aux_sym_number_token6] = ACTIONS(73),
    [aux_sym_number_token7] = ACTIONS(73),
    [aux_sym_number_token8] = ACTIONS(71),
    [aux_sym_number_token9] = ACTIONS(71),
    [aux_sym_number_token10] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_LBRACE2] = ACTIONS(77),
  },
  [4] = {
    [sym_term] = STATE(105),
    [sym__simple_value] = STATE(105),
    [sym_quasiquote] = STATE(105),
    [sym_dict_operator] = STATE(9),
    [sym__value] = STATE(105),
    [sym_curly_braced] = STATE(105),
    [sym_parenthesized] = STATE(105),
    [sym_atom] = STATE(4),
    [sym_var] = STATE(7),
    [sym_unary_op] = STATE(105),
    [sym_binary_op] = STATE(105),
    [sym_char_code] = STATE(105),
    [sym_number] = STATE(105),
    [sym_list] = STATE(105),
    [sym_dict] = STATE(10),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE_PIPE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN2] = ACTIONS(27),
    [aux_sym_atom_token1] = ACTIONS(17),
    [aux_sym_atom_token2] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [sym__sym_atom] = ACTIONS(17),
    [aux_sym_var_token1] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_BSLASH_PLUS] = ACTIONS(81),
    [anon_sym_dynamic] = ACTIONS(83),
    [anon_sym_discontiguous] = ACTIONS(83),
    [anon_sym_initialization] = ACTIONS(83),
    [anon_sym_meta_predicate] = ACTIONS(83),
    [anon_sym_module_transparent] = ACTIONS(83),
    [anon_sym_multifile] = ACTIONS(83),
    [anon_sym_public] = ACTIONS(83),
    [anon_sym_thread_local] = ACTIONS(83),
    [anon_sym_thread_initialization] = ACTIONS(83),
    [anon_sym_volatile] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [anon_sym_div] = ACTIONS(17),
    [anon_sym_rdiv] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_mod] = ACTIONS(17),
    [anon_sym_rem] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_SLASH_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASH_SLASH] = ACTIONS(17),
    [anon_sym_xor] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_EQ_DOT_DOT] = ACTIONS(19),
    [anon_sym_EQ_AT_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_AT_EQ] = ACTIONS(17),
    [anon_sym_EQ_COLON_EQ] = ACTIONS(17),
    [anon_sym_EQ_LT] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_EQ_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_AT_LT] = ACTIONS(17),
    [anon_sym_AT_EQ_LT] = ACTIONS(17),
    [anon_sym_AT_GT] = ACTIONS(17),
    [anon_sym_AT_GT_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ] = ACTIONS(17),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(17),
    [anon_sym_as] = ACTIONS(17),
    [anon_sym_is] = ACTIONS(17),
    [anon_sym_GT_COLON_LT] = ACTIONS(17),
    [anon_sym_COLON_LT] = ACTIONS(17),
    [anon_sym_COLON_EQ] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(17),
    [anon_sym_STAR_DASH_GT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(19),
    [sym_string] = ACTIONS(85),
    [sym_codes] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_0_SQUOTE] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
    [aux_sym_number_token2] = ACTIONS(41),
    [aux_sym_number_token3] = ACTIONS(43),
    [aux_sym_number_token4] = ACTIONS(43),
    [aux_sym_number_token5] = ACTIONS(43),
    [aux_sym_number_token6] = ACTIONS(43),
    [aux_sym_number_token7] = ACTIONS(43),
    [aux_sym_number_token8] = ACTIONS(41),
    [aux_sym_number_token9] = ACTIONS(41),
    [aux_sym_number_token10] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE2] = ACTIONS(47),
  },
  [5] = {
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LBRACE_PIPE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN2] = ACTIONS(87),
    [aux_sym_atom_token1] = ACTIONS(87),
    [aux_sym_atom_token2] = ACTIONS(89),
    [anon_sym_DOT_DOT] = ACTIONS(89),
    [sym__sym_atom] = ACTIONS(87),
    [aux_sym_var_token1] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(87),
    [anon_sym_BSLASH_PLUS] = ACTIONS(87),
    [anon_sym_dynamic] = ACTIONS(87),
    [anon_sym_discontiguous] = ACTIONS(87),
    [anon_sym_initialization] = ACTIONS(87),
    [anon_sym_meta_predicate] = ACTIONS(87),
    [anon_sym_module_transparent] = ACTIONS(87),
    [anon_sym_multifile] = ACTIONS(87),
    [anon_sym_public] = ACTIONS(87),
    [anon_sym_thread_local] = ACTIONS(87),
    [anon_sym_thread_initialization] = ACTIONS(87),
    [anon_sym_volatile] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_div] = ACTIONS(87),
    [anon_sym_rdiv] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_mod] = ACTIONS(87),
    [anon_sym_rem] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_SLASH_BSLASH] = ACTIONS(87),
    [anon_sym_BSLASH_SLASH] = ACTIONS(87),
    [anon_sym_xor] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_EQ_DOT_DOT] = ACTIONS(89),
    [anon_sym_EQ_AT_EQ] = ACTIONS(87),
    [anon_sym_BSLASH_EQ_AT_EQ] = ACTIONS(87),
    [anon_sym_EQ_COLON_EQ] = ACTIONS(87),
    [anon_sym_EQ_LT] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_EQ_BSLASH_EQ] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(87),
    [anon_sym_AT_LT] = ACTIONS(87),
    [anon_sym_AT_EQ_LT] = ACTIONS(87),
    [anon_sym_AT_GT] = ACTIONS(87),
    [anon_sym_AT_GT_EQ] = ACTIONS(87),
    [anon_sym_BSLASH_EQ] = ACTIONS(87),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_is] = ACTIONS(87),
    [anon_sym_GT_COLON_LT] = ACTIONS(87),
    [anon_sym_COLON_LT] = ACTIONS(87),
    [anon_sym_COLON_EQ] = ACTIONS(87),
    [anon_sym_DASH_GT] = ACTIONS(87),
    [anon_sym_STAR_DASH_GT] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_codes] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_0_SQUOTE] = ACTIONS(89),
    [aux_sym_number_token1] = ACTIONS(87),
    [aux_sym_number_token2] = ACTIONS(87),
    [aux_sym_number_token3] = ACTIONS(89),
    [aux_sym_number_token4] = ACTIONS(89),
    [aux_sym_number_token5] = ACTIONS(89),
    [aux_sym_number_token6] = ACTIONS(89),
    [aux_sym_number_token7] = ACTIONS(89),
    [aux_sym_number_token8] = ACTIONS(87),
    [aux_sym_number_token9] = ACTIONS(87),
    [aux_sym_number_token10] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE2] = ACTIONS(87),
  },
  [6] = {
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_DASH_DASH_GT] = ACTIONS(87),
    [anon_sym_DASH_DASH_GT_GT] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACE_PIPE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_LPAREN2] = ACTIONS(87),
    [aux_sym_atom_token1] = ACTIONS(87),
    [aux_sym_atom_token2] = ACTIONS(89),
    [anon_sym_DOT_DOT] = ACTIONS(89),
    [sym__sym_atom] = ACTIONS(87),
    [aux_sym_var_token1] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(87),
    [anon_sym_BSLASH_PLUS] = ACTIONS(87),
    [anon_sym_dynamic] = ACTIONS(87),
    [anon_sym_discontiguous] = ACTIONS(87),
    [anon_sym_initialization] = ACTIONS(87),
    [anon_sym_meta_predicate] = ACTIONS(87),
    [anon_sym_module_transparent] = ACTIONS(87),
    [anon_sym_multifile] = ACTIONS(87),
    [anon_sym_public] = ACTIONS(87),
    [anon_sym_thread_local] = ACTIONS(87),
    [anon_sym_thread_initialization] = ACTIONS(87),
    [anon_sym_volatile] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_STAR_STAR] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_div] = ACTIONS(87),
    [anon_sym_rdiv] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_mod] = ACTIONS(87),
    [anon_sym_rem] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_SLASH_BSLASH] = ACTIONS(87),
    [anon_sym_BSLASH_SLASH] = ACTIONS(87),
    [anon_sym_xor] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_EQ_DOT_DOT] = ACTIONS(89),
    [anon_sym_EQ_AT_EQ] = ACTIONS(87),
    [anon_sym_BSLASH_EQ_AT_EQ] = ACTIONS(87),
    [anon_sym_EQ_COLON_EQ] = ACTIONS(87),
    [anon_sym_EQ_LT] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_EQ_BSLASH_EQ] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(87),
    [anon_sym_AT_LT] = ACTIONS(87),
    [anon_sym_AT_EQ_LT] = ACTIONS(87),
    [anon_sym_AT_GT] = ACTIONS(87),
    [anon_sym_AT_GT_EQ] = ACTIONS(87),
    [anon_sym_BSLASH_EQ] = ACTIONS(87),
    [anon_sym_BSLASH_EQ_EQ] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_is] = ACTIONS(87),
    [anon_sym_GT_COLON_LT] = ACTIONS(87),
    [anon_sym_COLON_LT] = ACTIONS(87),
    [anon_sym_COLON_EQ] = ACTIONS(87),
    [anon_sym_DASH_GT] = ACTIONS(87),
    [anon_sym_STAR_DASH_GT] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_codes] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_0_SQUOTE] = ACTIONS(89),
    [aux_sym_number_token1] = ACTIONS(87),
    [aux_sym_number_token2] = ACTIONS(87),
    [aux_sym_number_token3] = ACTIONS(89),
    [aux_sym_number_token4] = ACTIONS(89),
    [aux_sym_number_token5] = ACTIONS(89),
    [aux_sym_number_token6] = ACTIONS(89),
    [aux_sym_number_token7] = ACTIONS(89),
    [aux_sym_number_token8] = ACTIONS(87),
    [aux_sym_number_token9] = ACTIONS(87),
    [aux_sym_number_token10] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACE2] = ACTIONS(87),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_dict_op_term_token1,
    ACTIONS(93), 1,
      aux_sym_dict_operator_token1,
    ACTIONS(95), 1,
      aux_sym_dict_operator_token2,
    ACTIONS(97), 1,
      anon_sym_LBRACE2,
    STATE(13), 1,
      sym_dict_op_term,
    ACTIONS(19), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(17), 45,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [75] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LBRACE2,
    ACTIONS(99), 46,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [139] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_dict_op_term_token1,
    ACTIONS(93), 1,
      aux_sym_dict_operator_token1,
    ACTIONS(95), 1,
      aux_sym_dict_operator_token2,
    STATE(13), 1,
      sym_dict_op_term,
    ACTIONS(105), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(103), 45,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_dict_op_term_token1,
    ACTIONS(93), 1,
      aux_sym_dict_operator_token1,
    ACTIONS(95), 1,
      aux_sym_dict_operator_token2,
    STATE(13), 1,
      sym_dict_op_term,
    ACTIONS(19), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(17), 45,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(107), 46,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(111), 46,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(115), 46,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(119), 46,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [535] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_dict_op_term_token1,
    ACTIONS(125), 1,
      aux_sym_dict_operator_token1,
    ACTIONS(127), 1,
      aux_sym_dict_operator_token2,
    ACTIONS(129), 1,
      anon_sym_LBRACE2,
    STATE(51), 1,
      sym_dict_op_term,
    ACTIONS(19), 3,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(17), 46,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [607] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    ACTIONS(137), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(68), 1,
      aux_sym_values_repeat1,
    STATE(194), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(139), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(132), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [713] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(68), 1,
      aux_sym_values_repeat1,
    STATE(201), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(139), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(132), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 6,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACE2,
    ACTIONS(99), 47,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [880] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_dict_op_term_token1,
    ACTIONS(125), 1,
      aux_sym_dict_operator_token1,
    ACTIONS(127), 1,
      aux_sym_dict_operator_token2,
    STATE(51), 1,
      sym_dict_op_term,
    ACTIONS(105), 3,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(103), 46,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [949] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(69), 1,
      aux_sym_values_repeat1,
    STATE(223), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(149), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(67), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [1052] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_dict_op_term_token1,
    ACTIONS(125), 1,
      aux_sym_dict_operator_token1,
    ACTIONS(127), 1,
      aux_sym_dict_operator_token2,
    STATE(51), 1,
      sym_dict_op_term,
    ACTIONS(19), 3,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(17), 46,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [1121] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(69), 1,
      aux_sym_values_repeat1,
    STATE(203), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(149), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(67), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [1224] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(173), 4,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
    ACTIONS(155), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [1304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(175), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [1364] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [1448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(187), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [1508] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(185), 4,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [1588] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(71), 1,
      aux_sym_values_repeat1,
    STATE(219), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(191), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(82), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [1688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(185), 32,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [1754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(185), 41,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [1818] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(71), 1,
      aux_sym_values_repeat1,
    STATE(218), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(191), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(82), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [1918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(185), 41,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [1982] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(69), 1,
      aux_sym_values_repeat1,
    STATE(209), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(149), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(67), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [2082] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    STATE(84), 1,
      sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(179), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(185), 26,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [2152] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    STATE(84), 1,
      sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(179), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(185), 26,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [2222] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(71), 1,
      aux_sym_values_repeat1,
    STATE(229), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(191), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(82), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [2322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(193), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [2382] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(71), 1,
      aux_sym_values_repeat1,
    STATE(208), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(191), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(82), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [2482] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(71), 1,
      aux_sym_values_repeat1,
    STATE(210), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(191), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(82), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(197), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [2642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(201), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [2702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(205), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [2762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(209), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [2822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 5,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(107), 47,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [2882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(213), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [2942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 5,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(111), 47,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [3002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(217), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [3062] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(69), 1,
      aux_sym_values_repeat1,
    STATE(214), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(149), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(67), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [3162] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(69), 1,
      aux_sym_values_repeat1,
    STATE(215), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(149), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(67), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 5,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(119), 47,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [3322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 5,
      aux_sym_dict_op_term_token1,
      aux_sym_dict_operator_token2,
      aux_sym_atom_token2,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(115), 47,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_dict_operator_token1,
      aux_sym_atom_token1,
      anon_sym_DOT_DOT,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [3382] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(71), 1,
      aux_sym_values_repeat1,
    STATE(202), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(191), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(82), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [3482] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(69), 1,
      aux_sym_values_repeat1,
    STATE(220), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(149), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(67), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [3582] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(69), 1,
      aux_sym_values_repeat1,
    STATE(221), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(149), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(67), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [3682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(221), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [3742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_atom,
    ACTIONS(227), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(225), 43,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [3804] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(225), 4,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(227), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [3884] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(227), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [3968] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(71), 1,
      aux_sym_values_repeat1,
    STATE(226), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(191), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(82), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [4068] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(179), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [4154] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(69), 1,
      aux_sym_values_repeat1,
    STATE(204), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(149), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(67), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [4254] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(71), 1,
      aux_sym_values_repeat1,
    STATE(230), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(191), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(82), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [4354] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(69), 1,
      aux_sym_values_repeat1,
    STATE(216), 1,
      sym_values,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(149), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(67), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [4454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(233), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [4514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(237), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [4574] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_LPAREN2,
    ACTIONS(259), 1,
      aux_sym_var_token1,
    ACTIONS(262), 1,
      anon_sym_BSLASH,
    ACTIONS(265), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(274), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(66), 1,
      aux_sym_values_repeat1,
    ACTIONS(253), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(256), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(271), 2,
      sym_string,
      sym_codes,
    ACTIONS(277), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(280), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(268), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(163), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [4671] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(288), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [4758] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(66), 1,
      aux_sym_values_repeat1,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(290), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(130), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [4855] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(66), 1,
      aux_sym_values_repeat1,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(292), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(70), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [4952] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(294), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [5039] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(66), 1,
      aux_sym_values_repeat1,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(296), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(75), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [5136] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(298), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(92), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [5230] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(300), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(30), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [5324] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(302), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(158), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [5418] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_DOT_DOT,
    ACTIONS(318), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(320), 1,
      anon_sym_COLON_EQ,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(322), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(316), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [5504] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(328), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(162), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [5598] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(85), 2,
      sym_string,
      sym_codes,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(105), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [5692] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(346), 1,
      anon_sym_COLON_EQ,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    STATE(136), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(332), 2,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(348), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(342), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [5776] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(354), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(110), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [5870] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(356), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(111), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [5964] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    STATE(123), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
    ACTIONS(89), 14,
      anon_sym_LBRACE_PIPE,
      anon_sym_LPAREN2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      sym_string,
      sym_codes,
      anon_sym_0_SQUOTE,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
      anon_sym_LBRACK,
    ACTIONS(87), 21,
      anon_sym_DOT,
      anon_sym_LBRACE,
      aux_sym_atom_token1,
      sym__sym_atom,
      aux_sym_var_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASH_PLUS,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
  [6032] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_DOT_DOT,
    ACTIONS(318), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(320), 1,
      anon_sym_COLON_EQ,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_DOT,
    STATE(100), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(322), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(316), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [6118] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(366), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(78), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [6212] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(368), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(23), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [6306] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(370), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(160), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [6400] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(372), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(60), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [6494] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_atom,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(185), 27,
      anon_sym_DOT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [6562] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_atom,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(185), 27,
      anon_sym_DOT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [6630] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym_atom,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(185), 42,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [6692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym_atom,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(185), 42,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [6754] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym_atom,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(185), 33,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [6818] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_DOT_DOT,
    ACTIONS(318), 1,
      anon_sym_EQ_DOT_DOT,
    STATE(100), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(185), 5,
      anon_sym_DOT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(316), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [6896] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_DOT_DOT,
    ACTIONS(318), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(320), 1,
      anon_sym_COLON_EQ,
    STATE(100), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
    ACTIONS(185), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(322), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(316), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [6978] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_DOT_DOT,
    ACTIONS(318), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(320), 1,
      anon_sym_COLON_EQ,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(322), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(316), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [7064] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_DOT_DOT,
    ACTIONS(318), 1,
      anon_sym_EQ_DOT_DOT,
    STATE(100), 1,
      sym_atom,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(173), 5,
      anon_sym_DOT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(316), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [7142] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(374), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(25), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [7236] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(376), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(27), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [7330] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(378), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(34), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [7424] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(380), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(29), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [7518] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(382), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(95), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [7612] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(384), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(32), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [7706] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(34), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
    ACTIONS(89), 14,
      anon_sym_LBRACE_PIPE,
      anon_sym_LPAREN2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      sym_string,
      sym_codes,
      anon_sym_0_SQUOTE,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
      anon_sym_LBRACK,
    ACTIONS(87), 21,
      anon_sym_DOT,
      anon_sym_LBRACE,
      aux_sym_atom_token1,
      sym__sym_atom,
      aux_sym_var_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASH_PLUS,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
  [7774] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(386), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(35), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [7868] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(388), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(114), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [7962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym_atom,
    ACTIONS(227), 5,
      anon_sym_COMMA,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(225), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [8022] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(390), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(58), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [8116] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(392), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(57), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [8210] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(394), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(116), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [8304] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(37), 2,
      sym_string,
      sym_codes,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(56), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [8398] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_DOT_DOT,
    ACTIONS(318), 1,
      anon_sym_EQ_DOT_DOT,
    STATE(100), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(225), 5,
      anon_sym_DOT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(316), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [8476] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_DOT_DOT,
    ACTIONS(318), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(320), 1,
      anon_sym_COLON_EQ,
    STATE(100), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(225), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
    ACTIONS(310), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(322), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(312), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(316), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [8558] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(396), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(35), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(164), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [8652] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(398), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(87), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [8746] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(346), 1,
      anon_sym_COLON_EQ,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    STATE(136), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(348), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(400), 2,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(342), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [8830] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_EQ_DOT_DOT,
    STATE(136), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(173), 6,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(342), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [8908] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [8992] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(346), 1,
      anon_sym_COLON_EQ,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    STATE(136), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(185), 2,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(348), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(342), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [9076] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(179), 1,
      anon_sym_PIPE,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(346), 1,
      anon_sym_COLON_EQ,
    STATE(136), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(348), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(185), 3,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      anon_sym_SEMI,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(342), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [9158] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(179), 1,
      anon_sym_PIPE,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_EQ_DOT_DOT,
    STATE(136), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(185), 6,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(342), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [9236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(136), 1,
      sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(185), 34,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [9300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(136), 1,
      sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(185), 43,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [9362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(136), 1,
      sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(185), 43,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [9424] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(185), 28,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [9492] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(404), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(94), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [9586] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(179), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(185), 28,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [9654] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(406), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(93), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [9748] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(67), 2,
      sym_string,
      sym_codes,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(137), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [9842] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(408), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(138), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [9936] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(410), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(139), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [10030] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(294), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [10114] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(412), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(88), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [10208] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(288), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [10292] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(414), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(91), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [10386] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(416), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(90), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [10480] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      aux_sym_var_token1,
    ACTIONS(39), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    ACTIONS(133), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(135), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(418), 2,
      sym_string,
      sym_codes,
    ACTIONS(41), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(43), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(83), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(89), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [10574] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(420), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(115), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [10668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(136), 1,
      sym_atom,
    ACTIONS(227), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(225), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [10728] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(227), 1,
      anon_sym_PIPE,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_EQ_DOT_DOT,
    STATE(136), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(225), 6,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(342), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [10806] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(227), 1,
      anon_sym_PIPE,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(346), 1,
      anon_sym_COLON_EQ,
    STATE(136), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(336), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(348), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(225), 3,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      anon_sym_SEMI,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(338), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(342), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [10888] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(422), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(117), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [10982] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(424), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(118), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [11076] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_atom,
    STATE(7), 1,
      sym_var,
    STATE(9), 1,
      sym_dict_operator,
    STATE(10), 1,
      sym_dict,
    STATE(88), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
    ACTIONS(89), 14,
      anon_sym_LBRACE_PIPE,
      anon_sym_LPAREN2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      sym_string,
      sym_codes,
      anon_sym_0_SQUOTE,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
      anon_sym_LBRACK,
    ACTIONS(87), 21,
      anon_sym_DOT,
      anon_sym_LBRACE,
      aux_sym_atom_token1,
      sym__sym_atom,
      aux_sym_var_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASH_PLUS,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
  [11144] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(426), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(125), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [11238] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(428), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(122), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [11332] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(430), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(121), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [11426] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(432), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(120), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [11520] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(434), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(123), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [11614] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      aux_sym_var_token1,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(69), 1,
      anon_sym_0_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_atom,
    STATE(15), 1,
      sym_var,
    STATE(19), 1,
      sym_dict_operator,
    STATE(21), 1,
      sym_dict,
    ACTIONS(362), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(364), 2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    ACTIONS(436), 2,
      sym_string,
      sym_codes,
    ACTIONS(71), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
    ACTIONS(73), 6,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
    ACTIONS(65), 10,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
    STATE(119), 11,
      sym_term,
      sym__simple_value,
      sym_quasiquote,
      sym__value,
      sym_curly_braced,
      sym_parenthesized,
      sym_unary_op,
      sym_binary_op,
      sym_char_code,
      sym_number,
      sym_list,
  [11708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(237), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [11765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(213), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [11822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(193), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [11879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(197), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [11936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(201), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [11993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(175), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [12050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(233), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [12107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(221), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [12164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(205), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [12221] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [12304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(187), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [12361] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [12444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(217), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [12501] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [12584] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [12667] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_atom_token2,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_EQ_DOT_DOT,
    ACTIONS(181), 1,
      anon_sym_COLON_EQ,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_atom,
    ACTIONS(157), 2,
      aux_sym_atom_token1,
      sym__sym_atom,
    ACTIONS(163), 2,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(167), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
    ACTIONS(165), 9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
    ACTIONS(169), 20,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
  [12750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 4,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      anon_sym_EQ_DOT_DOT,
      anon_sym_PIPE,
    ACTIONS(209), 45,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_DASH_DASH_GT_GT,
      aux_sym_atom_token1,
      sym__sym_atom,
      anon_sym_CARET,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_div,
      anon_sym_rdiv,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_mod,
      anon_sym_rem,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_BSLASH,
      anon_sym_BSLASH_SLASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_EQ_AT_EQ,
      anon_sym_BSLASH_EQ_AT_EQ,
      anon_sym_EQ_COLON_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_EQ_BSLASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AT_LT,
      anon_sym_AT_EQ_LT,
      anon_sym_AT_GT,
      anon_sym_AT_GT_EQ,
      anon_sym_BSLASH_EQ,
      anon_sym_BSLASH_EQ_EQ,
      anon_sym_as,
      anon_sym_is,
      anon_sym_GT_COLON_LT,
      anon_sym_COLON_LT,
      anon_sym_COLON_EQ,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_SEMI,
  [12807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 14,
      anon_sym_LBRACE_PIPE,
      anon_sym_LPAREN2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      sym_string,
      sym_codes,
      anon_sym_0_SQUOTE,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
      anon_sym_LBRACK,
    ACTIONS(446), 21,
      anon_sym_DOT,
      anon_sym_LBRACE,
      aux_sym_atom_token1,
      sym__sym_atom,
      aux_sym_var_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASH_PLUS,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
  [12850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 14,
      anon_sym_LBRACE_PIPE,
      anon_sym_LPAREN2,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
      sym_string,
      sym_codes,
      anon_sym_0_SQUOTE,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token10,
      anon_sym_LBRACK,
    ACTIONS(87), 21,
      anon_sym_DOT,
      anon_sym_LBRACE,
      aux_sym_atom_token1,
      sym__sym_atom,
      aux_sym_var_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASH_PLUS,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volatile,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token8,
      aux_sym_number_token9,
  [12893] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 1,
      anon_sym_COLON_DASH,
    ACTIONS(455), 1,
      anon_sym_QMARK_DASH,
    ACTIONS(461), 1,
      sym__sym_atom,
    STATE(178), 1,
      sym_atom,
    STATE(191), 1,
      sym_term,
    ACTIONS(458), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    STATE(168), 6,
      sym__topLevel,
      sym_directive,
      sym_query,
      sym_predicate_definition,
      sym_dcg_definition,
      aux_sym_source_file_repeat1,
  [12928] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_COLON_DASH,
    ACTIONS(9), 1,
      anon_sym_QMARK_DASH,
    ACTIONS(13), 1,
      sym__sym_atom,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_atom,
    STATE(191), 1,
      sym_term,
    ACTIONS(11), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
    STATE(168), 6,
      sym__topLevel,
      sym_directive,
      sym_query,
      sym_predicate_definition,
      sym_dcg_definition,
      aux_sym_source_file_repeat1,
  [12963] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(470), 1,
      sym__sym_atom,
    STATE(184), 1,
      aux_sym_dict_entries_repeat1,
    STATE(200), 1,
      sym_dict_entry,
    STATE(206), 1,
      sym_dict_entries,
    STATE(213), 1,
      sym_atom,
    ACTIONS(468), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [12990] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__sym_atom,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym_dict_entries_repeat1,
    STATE(200), 1,
      sym_dict_entry,
    STATE(211), 1,
      sym_dict_entries,
    STATE(213), 1,
      sym_atom,
    ACTIONS(468), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_COLON,
      anon_sym_DASH_DASH_GT,
    ACTIONS(89), 6,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_GT_GT,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
  [13033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(474), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(478), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(482), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13078] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__sym_atom,
    STATE(176), 1,
      aux_sym_dict_entries_repeat1,
    STATE(213), 1,
      sym_atom,
    STATE(217), 1,
      sym_dict_entry,
    ACTIONS(486), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(492), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13114] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COLON_DASH,
    ACTIONS(498), 1,
      anon_sym_DOT,
    ACTIONS(500), 1,
      anon_sym_COLON,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(506), 1,
      anon_sym_DASH_DASH_GT_GT,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
  [13139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(510), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(514), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(518), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(522), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(526), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__sym_atom,
    STATE(176), 1,
      aux_sym_dict_entries_repeat1,
    STATE(197), 1,
      sym_dict_entry,
    STATE(213), 1,
      sym_atom,
    ACTIONS(468), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 3,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      sym__sym_atom,
    ACTIONS(530), 4,
      ts_builtin_sym_end,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__sym_atom,
    STATE(196), 1,
      sym_atom,
    STATE(228), 1,
      sym_term,
    ACTIONS(11), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__sym_atom,
    STATE(195), 1,
      sym_atom,
    STATE(205), 1,
      sym_term,
    ACTIONS(11), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(219), 5,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_GT_GT,
      anon_sym_PIPE_PIPE,
  [13300] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_COLON_DASH,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(542), 1,
      anon_sym_DASH_DASH_GT_GT,
  [13322] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__sym_atom,
    STATE(189), 1,
      sym_atom,
    STATE(192), 1,
      sym_term,
    ACTIONS(11), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COLON_DASH,
    ACTIONS(498), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(506), 1,
      anon_sym_DASH_DASH_GT_GT,
  [13359] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_DASH,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(542), 1,
      anon_sym_DASH_DASH_GT_GT,
  [13378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__sym_atom,
    ACTIONS(544), 3,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DOT_DOT,
  [13390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
  [13400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      anon_sym_PIPE_PIPE,
  [13410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_PIPE_PIPE,
  [13420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
  [13430] = 3,
    ACTIONS(560), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_escape_sequence,
    ACTIONS(564), 1,
      aux_sym_char_code_token1,
  [13440] = 3,
    ACTIONS(560), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_escape_sequence,
    ACTIONS(568), 1,
      aux_sym_char_code_token1,
  [13450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
  [13460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_PIPE,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
  [13470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_DOT,
  [13477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [13484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [13491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_PIPE_PIPE,
  [13498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [13505] = 2,
    ACTIONS(560), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_quasiquote_token1,
  [13512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DOT,
  [13519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [13526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DOT,
  [13533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
  [13540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_PIPE_RBRACE,
  [13547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_COLON,
  [13554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
  [13561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [13568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
  [13575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COMMA,
  [13582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_DOT,
  [13589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_DOT,
  [13596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
  [13603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
  [13610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_PIPE_RBRACE,
  [13617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
  [13624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COLON,
  [13631] = 2,
    ACTIONS(560), 1,
      sym_comment,
    ACTIONS(616), 1,
      aux_sym_quasiquote_token1,
  [13638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DOT,
  [13645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
  [13652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_PIPE_PIPE,
  [13659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DOT,
  [13666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 211,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 346,
  [SMALL_STATE(13)] = 409,
  [SMALL_STATE(14)] = 472,
  [SMALL_STATE(15)] = 535,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 713,
  [SMALL_STATE(18)] = 819,
  [SMALL_STATE(19)] = 880,
  [SMALL_STATE(20)] = 949,
  [SMALL_STATE(21)] = 1052,
  [SMALL_STATE(22)] = 1121,
  [SMALL_STATE(23)] = 1224,
  [SMALL_STATE(24)] = 1304,
  [SMALL_STATE(25)] = 1364,
  [SMALL_STATE(26)] = 1448,
  [SMALL_STATE(27)] = 1508,
  [SMALL_STATE(28)] = 1588,
  [SMALL_STATE(29)] = 1688,
  [SMALL_STATE(30)] = 1754,
  [SMALL_STATE(31)] = 1818,
  [SMALL_STATE(32)] = 1918,
  [SMALL_STATE(33)] = 1982,
  [SMALL_STATE(34)] = 2082,
  [SMALL_STATE(35)] = 2152,
  [SMALL_STATE(36)] = 2222,
  [SMALL_STATE(37)] = 2322,
  [SMALL_STATE(38)] = 2382,
  [SMALL_STATE(39)] = 2482,
  [SMALL_STATE(40)] = 2582,
  [SMALL_STATE(41)] = 2642,
  [SMALL_STATE(42)] = 2702,
  [SMALL_STATE(43)] = 2762,
  [SMALL_STATE(44)] = 2822,
  [SMALL_STATE(45)] = 2882,
  [SMALL_STATE(46)] = 2942,
  [SMALL_STATE(47)] = 3002,
  [SMALL_STATE(48)] = 3062,
  [SMALL_STATE(49)] = 3162,
  [SMALL_STATE(50)] = 3262,
  [SMALL_STATE(51)] = 3322,
  [SMALL_STATE(52)] = 3382,
  [SMALL_STATE(53)] = 3482,
  [SMALL_STATE(54)] = 3582,
  [SMALL_STATE(55)] = 3682,
  [SMALL_STATE(56)] = 3742,
  [SMALL_STATE(57)] = 3804,
  [SMALL_STATE(58)] = 3884,
  [SMALL_STATE(59)] = 3968,
  [SMALL_STATE(60)] = 4068,
  [SMALL_STATE(61)] = 4154,
  [SMALL_STATE(62)] = 4254,
  [SMALL_STATE(63)] = 4354,
  [SMALL_STATE(64)] = 4454,
  [SMALL_STATE(65)] = 4514,
  [SMALL_STATE(66)] = 4574,
  [SMALL_STATE(67)] = 4671,
  [SMALL_STATE(68)] = 4758,
  [SMALL_STATE(69)] = 4855,
  [SMALL_STATE(70)] = 4952,
  [SMALL_STATE(71)] = 5039,
  [SMALL_STATE(72)] = 5136,
  [SMALL_STATE(73)] = 5230,
  [SMALL_STATE(74)] = 5324,
  [SMALL_STATE(75)] = 5418,
  [SMALL_STATE(76)] = 5504,
  [SMALL_STATE(77)] = 5598,
  [SMALL_STATE(78)] = 5692,
  [SMALL_STATE(79)] = 5776,
  [SMALL_STATE(80)] = 5870,
  [SMALL_STATE(81)] = 5964,
  [SMALL_STATE(82)] = 6032,
  [SMALL_STATE(83)] = 6118,
  [SMALL_STATE(84)] = 6212,
  [SMALL_STATE(85)] = 6306,
  [SMALL_STATE(86)] = 6400,
  [SMALL_STATE(87)] = 6494,
  [SMALL_STATE(88)] = 6562,
  [SMALL_STATE(89)] = 6630,
  [SMALL_STATE(90)] = 6692,
  [SMALL_STATE(91)] = 6754,
  [SMALL_STATE(92)] = 6818,
  [SMALL_STATE(93)] = 6896,
  [SMALL_STATE(94)] = 6978,
  [SMALL_STATE(95)] = 7064,
  [SMALL_STATE(96)] = 7142,
  [SMALL_STATE(97)] = 7236,
  [SMALL_STATE(98)] = 7330,
  [SMALL_STATE(99)] = 7424,
  [SMALL_STATE(100)] = 7518,
  [SMALL_STATE(101)] = 7612,
  [SMALL_STATE(102)] = 7706,
  [SMALL_STATE(103)] = 7774,
  [SMALL_STATE(104)] = 7868,
  [SMALL_STATE(105)] = 7962,
  [SMALL_STATE(106)] = 8022,
  [SMALL_STATE(107)] = 8116,
  [SMALL_STATE(108)] = 8210,
  [SMALL_STATE(109)] = 8304,
  [SMALL_STATE(110)] = 8398,
  [SMALL_STATE(111)] = 8476,
  [SMALL_STATE(112)] = 8558,
  [SMALL_STATE(113)] = 8652,
  [SMALL_STATE(114)] = 8746,
  [SMALL_STATE(115)] = 8830,
  [SMALL_STATE(116)] = 8908,
  [SMALL_STATE(117)] = 8992,
  [SMALL_STATE(118)] = 9076,
  [SMALL_STATE(119)] = 9158,
  [SMALL_STATE(120)] = 9236,
  [SMALL_STATE(121)] = 9300,
  [SMALL_STATE(122)] = 9362,
  [SMALL_STATE(123)] = 9424,
  [SMALL_STATE(124)] = 9492,
  [SMALL_STATE(125)] = 9586,
  [SMALL_STATE(126)] = 9654,
  [SMALL_STATE(127)] = 9748,
  [SMALL_STATE(128)] = 9842,
  [SMALL_STATE(129)] = 9936,
  [SMALL_STATE(130)] = 10030,
  [SMALL_STATE(131)] = 10114,
  [SMALL_STATE(132)] = 10208,
  [SMALL_STATE(133)] = 10292,
  [SMALL_STATE(134)] = 10386,
  [SMALL_STATE(135)] = 10480,
  [SMALL_STATE(136)] = 10574,
  [SMALL_STATE(137)] = 10668,
  [SMALL_STATE(138)] = 10728,
  [SMALL_STATE(139)] = 10806,
  [SMALL_STATE(140)] = 10888,
  [SMALL_STATE(141)] = 10982,
  [SMALL_STATE(142)] = 11076,
  [SMALL_STATE(143)] = 11144,
  [SMALL_STATE(144)] = 11238,
  [SMALL_STATE(145)] = 11332,
  [SMALL_STATE(146)] = 11426,
  [SMALL_STATE(147)] = 11520,
  [SMALL_STATE(148)] = 11614,
  [SMALL_STATE(149)] = 11708,
  [SMALL_STATE(150)] = 11765,
  [SMALL_STATE(151)] = 11822,
  [SMALL_STATE(152)] = 11879,
  [SMALL_STATE(153)] = 11936,
  [SMALL_STATE(154)] = 11993,
  [SMALL_STATE(155)] = 12050,
  [SMALL_STATE(156)] = 12107,
  [SMALL_STATE(157)] = 12164,
  [SMALL_STATE(158)] = 12221,
  [SMALL_STATE(159)] = 12304,
  [SMALL_STATE(160)] = 12361,
  [SMALL_STATE(161)] = 12444,
  [SMALL_STATE(162)] = 12501,
  [SMALL_STATE(163)] = 12584,
  [SMALL_STATE(164)] = 12667,
  [SMALL_STATE(165)] = 12750,
  [SMALL_STATE(166)] = 12807,
  [SMALL_STATE(167)] = 12850,
  [SMALL_STATE(168)] = 12893,
  [SMALL_STATE(169)] = 12928,
  [SMALL_STATE(170)] = 12963,
  [SMALL_STATE(171)] = 12990,
  [SMALL_STATE(172)] = 13017,
  [SMALL_STATE(173)] = 13033,
  [SMALL_STATE(174)] = 13048,
  [SMALL_STATE(175)] = 13063,
  [SMALL_STATE(176)] = 13078,
  [SMALL_STATE(177)] = 13099,
  [SMALL_STATE(178)] = 13114,
  [SMALL_STATE(179)] = 13139,
  [SMALL_STATE(180)] = 13154,
  [SMALL_STATE(181)] = 13169,
  [SMALL_STATE(182)] = 13184,
  [SMALL_STATE(183)] = 13199,
  [SMALL_STATE(184)] = 13214,
  [SMALL_STATE(185)] = 13235,
  [SMALL_STATE(186)] = 13250,
  [SMALL_STATE(187)] = 13268,
  [SMALL_STATE(188)] = 13286,
  [SMALL_STATE(189)] = 13300,
  [SMALL_STATE(190)] = 13322,
  [SMALL_STATE(191)] = 13340,
  [SMALL_STATE(192)] = 13359,
  [SMALL_STATE(193)] = 13378,
  [SMALL_STATE(194)] = 13390,
  [SMALL_STATE(195)] = 13400,
  [SMALL_STATE(196)] = 13410,
  [SMALL_STATE(197)] = 13420,
  [SMALL_STATE(198)] = 13430,
  [SMALL_STATE(199)] = 13440,
  [SMALL_STATE(200)] = 13450,
  [SMALL_STATE(201)] = 13460,
  [SMALL_STATE(202)] = 13470,
  [SMALL_STATE(203)] = 13477,
  [SMALL_STATE(204)] = 13484,
  [SMALL_STATE(205)] = 13491,
  [SMALL_STATE(206)] = 13498,
  [SMALL_STATE(207)] = 13505,
  [SMALL_STATE(208)] = 13512,
  [SMALL_STATE(209)] = 13519,
  [SMALL_STATE(210)] = 13526,
  [SMALL_STATE(211)] = 13533,
  [SMALL_STATE(212)] = 13540,
  [SMALL_STATE(213)] = 13547,
  [SMALL_STATE(214)] = 13554,
  [SMALL_STATE(215)] = 13561,
  [SMALL_STATE(216)] = 13568,
  [SMALL_STATE(217)] = 13575,
  [SMALL_STATE(218)] = 13582,
  [SMALL_STATE(219)] = 13589,
  [SMALL_STATE(220)] = 13596,
  [SMALL_STATE(221)] = 13603,
  [SMALL_STATE(222)] = 13610,
  [SMALL_STATE(223)] = 13617,
  [SMALL_STATE(224)] = 13624,
  [SMALL_STATE(225)] = 13631,
  [SMALL_STATE(226)] = 13638,
  [SMALL_STATE(227)] = 13645,
  [SMALL_STATE(228)] = 13652,
  [SMALL_STATE(229)] = 13659,
  [SMALL_STATE(230)] = 13666,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_value, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_value, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4, .production_id = 13),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4, .production_id = 13),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_op_term, 3, .production_id = 12),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_op_term, 3, .production_id = 12),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_operator, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_operator, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 5, .production_id = 14),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 5, .production_id = 14),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_braced, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_braced, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_braced, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_braced, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5, .production_id = 15),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5, .production_id = 15),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_code, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_code, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 4, .production_id = 10),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 4, .production_id = 10),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_value, 1, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_value, 1, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2, .production_id = 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4, .production_id = 11),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, .production_id = 11),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(55),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(187),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(20),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(53),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(5),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(5),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(8),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(109),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(107),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(106),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(163),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(199),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(40),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(40),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(17),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_entry, 3, .production_id = 16),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dcg_definition, 4, .production_id = 8),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dcg_definition, 4, .production_id = 8),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dcg_definition, 8, .production_id = 20),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dcg_definition, 8, .production_id = 20),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_entries_repeat1, 2), SHIFT_REPEAT(224),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dict_entries_repeat1, 2), SHIFT_REPEAT(224),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dcg_definition, 6, .production_id = 19),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dcg_definition, 6, .production_id = 19),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_definition, 6, .production_id = 18),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_definition, 6, .production_id = 18),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_definition, 2, .production_id = 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_definition, 2, .production_id = 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_definition, 4, .production_id = 9),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_definition, 4, .production_id = 9),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_definition, 4, .production_id = 7),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_definition, 4, .production_id = 7),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dcg_definition, 6, .production_id = 17),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dcg_definition, 6, .production_id = 17),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_entries_repeat1, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dict_entries_repeat1, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_entries, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_entries, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [620] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_prolog(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
