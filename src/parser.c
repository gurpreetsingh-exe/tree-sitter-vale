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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 375
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 2
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  anon_sym_DeriveStructDrop = 3,
  anon_sym_DeriveInterfaceDrop = 4,
  anon_sym_DeriveAnonymousSubstruct = 5,
  anon_sym_POUND = 6,
  anon_sym_BANG = 7,
  anon_sym_DOT = 8,
  anon_sym_STAR = 9,
  anon_sym_extern = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_pure = 13,
  anon_sym_export = 14,
  anon_sym_exported = 15,
  anon_sym_func = 16,
  anon_sym_LT = 17,
  anon_sym_COMMA = 18,
  anon_sym_GT = 19,
  anon_sym_Int = 20,
  anon_sym_Ref = 21,
  anon_sym_Kind = 22,
  anon_sym_Region = 23,
  anon_sym_Prot = 24,
  anon_sym_RefList = 25,
  anon_sym_Ownership = 26,
  anon_sym_Variability = 27,
  anon_sym_Mutability = 28,
  anon_sym_Location = 29,
  anon_sym_SQUOTE = 30,
  anon_sym_ro = 31,
  anon_sym_struct = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_mut = 35,
  anon_sym_imm = 36,
  anon_sym_AMP = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  anon_sym_bool = 40,
  anon_sym_float = 41,
  anon_sym_str = 42,
  anon_sym_void = 43,
  anon_sym_i32 = 44,
  anon_sym_i64 = 45,
  anon_sym_i16 = 46,
  anon_sym_i8 = 47,
  anon_sym_u32 = 48,
  anon_sym_u64 = 49,
  anon_sym_u16 = 50,
  anon_sym_u8 = 51,
  anon_sym_EQ = 52,
  anon_sym_return = 53,
  anon_sym_EQ_GT = 54,
  anon_sym_not = 55,
  anon_sym_AMP_AMP = 56,
  anon_sym_CARET = 57,
  anon_sym_set = 58,
  anon_sym_true = 59,
  anon_sym_false = 60,
  anon_sym_while = 61,
  anon_sym_foreach = 62,
  anon_sym_in = 63,
  anon_sym_if = 64,
  anon_sym_else = 65,
  anon_sym_and = 66,
  anon_sym_or = 67,
  anon_sym_LT_EQ_GT = 68,
  anon_sym_LT_EQ = 69,
  anon_sym_GT_EQ = 70,
  anon_sym_EQ_EQ_EQ = 71,
  anon_sym_EQ_EQ = 72,
  anon_sym_BANG_EQ = 73,
  anon_sym_PLUS = 74,
  anon_sym_DASH = 75,
  anon_sym_SLASH = 76,
  sym_line_comment = 77,
  sym_int_lit = 78,
  sym_float_lit = 79,
  sym_escape_sequence = 80,
  anon_sym_DQUOTE = 81,
  aux_sym__string_literal_token1 = 82,
  sym_identifier = 83,
  sym_source_file = 84,
  sym__top_level = 85,
  sym_import = 86,
  sym_import_path = 87,
  sym_attribute_name = 88,
  sym_attribute = 89,
  sym_scoped_identifier = 90,
  sym_scoped_type_identifier = 91,
  sym_import_wildcard = 92,
  sym_extern = 93,
  sym_func_header = 94,
  sym_func_proto = 95,
  sym_function_definition = 96,
  sym_generic_parameters = 97,
  sym_rune = 98,
  sym_generic_parameter = 99,
  sym_region_parameter = 100,
  sym_region_specifier = 101,
  sym_parameters = 102,
  sym_parameter = 103,
  sym_struct_definition = 104,
  sym_struct_field = 105,
  sym_mutability = 106,
  sym_type = 107,
  sym_reference_type = 108,
  sym_array_type = 109,
  sym_dynamic_array_type = 110,
  sym_static_array_type = 111,
  sym_generic_type = 112,
  sym_block = 113,
  sym_expr_statement = 114,
  sym__statement = 115,
  sym_pattern = 116,
  sym_destruct = 117,
  sym_variable_definition = 118,
  sym_return_expr = 119,
  sym__expr = 120,
  sym_parenthesized_expr = 121,
  sym__expr_ending_with_block = 122,
  sym_lambda = 123,
  sym_not = 124,
  sym_augment = 125,
  sym_field_expr = 126,
  sym_assignment_expr = 127,
  sym_literal = 128,
  sym_bool_lit = 129,
  sym_call_expr = 130,
  sym_generic_function = 131,
  sym_type_parameters = 132,
  sym_type_parameter = 133,
  sym_while_expr = 134,
  sym_foreach = 135,
  sym_if_expr = 136,
  sym_else_if_expr = 137,
  sym_else_expr = 138,
  sym_binary_expr = 139,
  sym_string_literal = 140,
  sym__string_literal = 141,
  sym__type_identifier = 142,
  sym__path = 143,
  sym__field_identifier = 144,
  aux_sym_source_file_repeat1 = 145,
  aux_sym_generic_parameters_repeat1 = 146,
  aux_sym_generic_parameters_repeat2 = 147,
  aux_sym_parameters_repeat1 = 148,
  aux_sym_struct_definition_repeat1 = 149,
  aux_sym_block_repeat1 = 150,
  aux_sym_destruct_repeat1 = 151,
  aux_sym_call_expr_repeat1 = 152,
  aux_sym_type_parameters_repeat1 = 153,
  aux_sym_if_expr_repeat1 = 154,
  aux_sym__string_literal_repeat1 = 155,
  alias_sym_field_identifier = 156,
  alias_sym_type_identifier = 157,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_DeriveStructDrop] = "DeriveStructDrop",
  [anon_sym_DeriveInterfaceDrop] = "DeriveInterfaceDrop",
  [anon_sym_DeriveAnonymousSubstruct] = "DeriveAnonymousSubstruct",
  [anon_sym_POUND] = "#",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_extern] = "extern",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_pure] = "pure",
  [anon_sym_export] = "export",
  [anon_sym_exported] = "exported",
  [anon_sym_func] = "func",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_Int] = "Int",
  [anon_sym_Ref] = "Ref",
  [anon_sym_Kind] = "Kind",
  [anon_sym_Region] = "Region",
  [anon_sym_Prot] = "Prot",
  [anon_sym_RefList] = "RefList",
  [anon_sym_Ownership] = "Ownership",
  [anon_sym_Variability] = "Variability",
  [anon_sym_Mutability] = "Mutability",
  [anon_sym_Location] = "Location",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_ro] = "ro",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_mut] = "mut",
  [anon_sym_imm] = "imm",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_bool] = "bool",
  [anon_sym_float] = "float",
  [anon_sym_str] = "str",
  [anon_sym_void] = "void",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_i16] = "i16",
  [anon_sym_i8] = "i8",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u16] = "u16",
  [anon_sym_u8] = "u8",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_not] = "not",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_CARET] = "^",
  [anon_sym_set] = "set",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_while] = "while",
  [anon_sym_foreach] = "foreach",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_line_comment] = "line_comment",
  [sym_int_lit] = "int_lit",
  [sym_float_lit] = "float_lit",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_literal_token1] = "_string_literal_token1",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_import] = "import",
  [sym_import_path] = "import_path",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute] = "attribute",
  [sym_scoped_identifier] = "scoped_identifier",
  [sym_scoped_type_identifier] = "scoped_type_identifier",
  [sym_import_wildcard] = "import_wildcard",
  [sym_extern] = "extern",
  [sym_func_header] = "func_header",
  [sym_func_proto] = "func_proto",
  [sym_function_definition] = "function_definition",
  [sym_generic_parameters] = "generic_parameters",
  [sym_rune] = "rune",
  [sym_generic_parameter] = "generic_parameter",
  [sym_region_parameter] = "region_parameter",
  [sym_region_specifier] = "region_specifier",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_field] = "struct_field",
  [sym_mutability] = "mutability",
  [sym_type] = "type",
  [sym_reference_type] = "reference_type",
  [sym_array_type] = "array_type",
  [sym_dynamic_array_type] = "dynamic_array_type",
  [sym_static_array_type] = "static_array_type",
  [sym_generic_type] = "generic_type",
  [sym_block] = "block",
  [sym_expr_statement] = "expr_statement",
  [sym__statement] = "_statement",
  [sym_pattern] = "pattern",
  [sym_destruct] = "destruct",
  [sym_variable_definition] = "variable_definition",
  [sym_return_expr] = "return_expr",
  [sym__expr] = "_expr",
  [sym_parenthesized_expr] = "parenthesized_expr",
  [sym__expr_ending_with_block] = "_expr_ending_with_block",
  [sym_lambda] = "lambda",
  [sym_not] = "not",
  [sym_augment] = "augment",
  [sym_field_expr] = "field_expr",
  [sym_assignment_expr] = "assignment_expr",
  [sym_literal] = "literal",
  [sym_bool_lit] = "bool_lit",
  [sym_call_expr] = "call_expr",
  [sym_generic_function] = "generic_function",
  [sym_type_parameters] = "type_parameters",
  [sym_type_parameter] = "type_parameter",
  [sym_while_expr] = "while_expr",
  [sym_foreach] = "foreach",
  [sym_if_expr] = "if_expr",
  [sym_else_if_expr] = "else_if_expr",
  [sym_else_expr] = "else_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_string_literal] = "string_literal",
  [sym__string_literal] = "_string_literal",
  [sym__type_identifier] = "_type_identifier",
  [sym__path] = "_path",
  [sym__field_identifier] = "_field_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_generic_parameters_repeat1] = "generic_parameters_repeat1",
  [aux_sym_generic_parameters_repeat2] = "generic_parameters_repeat2",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_destruct_repeat1] = "destruct_repeat1",
  [aux_sym_call_expr_repeat1] = "call_expr_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_if_expr_repeat1] = "if_expr_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DeriveStructDrop] = anon_sym_DeriveStructDrop,
  [anon_sym_DeriveInterfaceDrop] = anon_sym_DeriveInterfaceDrop,
  [anon_sym_DeriveAnonymousSubstruct] = anon_sym_DeriveAnonymousSubstruct,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_exported] = anon_sym_exported,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Ref] = anon_sym_Ref,
  [anon_sym_Kind] = anon_sym_Kind,
  [anon_sym_Region] = anon_sym_Region,
  [anon_sym_Prot] = anon_sym_Prot,
  [anon_sym_RefList] = anon_sym_RefList,
  [anon_sym_Ownership] = anon_sym_Ownership,
  [anon_sym_Variability] = anon_sym_Variability,
  [anon_sym_Mutability] = anon_sym_Mutability,
  [anon_sym_Location] = anon_sym_Location,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_ro] = anon_sym_ro,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_imm] = anon_sym_imm,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_line_comment] = sym_line_comment,
  [sym_int_lit] = sym_int_lit,
  [sym_float_lit] = sym_float_lit,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
  [sym_import] = sym_import,
  [sym_import_path] = sym_import_path,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute] = sym_attribute,
  [sym_scoped_identifier] = sym_scoped_identifier,
  [sym_scoped_type_identifier] = sym_scoped_type_identifier,
  [sym_import_wildcard] = sym_import_wildcard,
  [sym_extern] = sym_extern,
  [sym_func_header] = sym_func_header,
  [sym_func_proto] = sym_func_proto,
  [sym_function_definition] = sym_function_definition,
  [sym_generic_parameters] = sym_generic_parameters,
  [sym_rune] = sym_rune,
  [sym_generic_parameter] = sym_generic_parameter,
  [sym_region_parameter] = sym_region_parameter,
  [sym_region_specifier] = sym_region_specifier,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_field] = sym_struct_field,
  [sym_mutability] = sym_mutability,
  [sym_type] = sym_type,
  [sym_reference_type] = sym_reference_type,
  [sym_array_type] = sym_array_type,
  [sym_dynamic_array_type] = sym_dynamic_array_type,
  [sym_static_array_type] = sym_static_array_type,
  [sym_generic_type] = sym_generic_type,
  [sym_block] = sym_block,
  [sym_expr_statement] = sym_expr_statement,
  [sym__statement] = sym__statement,
  [sym_pattern] = sym_pattern,
  [sym_destruct] = sym_destruct,
  [sym_variable_definition] = sym_variable_definition,
  [sym_return_expr] = sym_return_expr,
  [sym__expr] = sym__expr,
  [sym_parenthesized_expr] = sym_parenthesized_expr,
  [sym__expr_ending_with_block] = sym__expr_ending_with_block,
  [sym_lambda] = sym_lambda,
  [sym_not] = sym_not,
  [sym_augment] = sym_augment,
  [sym_field_expr] = sym_field_expr,
  [sym_assignment_expr] = sym_assignment_expr,
  [sym_literal] = sym_literal,
  [sym_bool_lit] = sym_bool_lit,
  [sym_call_expr] = sym_call_expr,
  [sym_generic_function] = sym_generic_function,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_parameter] = sym_type_parameter,
  [sym_while_expr] = sym_while_expr,
  [sym_foreach] = sym_foreach,
  [sym_if_expr] = sym_if_expr,
  [sym_else_if_expr] = sym_else_if_expr,
  [sym_else_expr] = sym_else_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_string_literal] = sym_string_literal,
  [sym__string_literal] = sym__string_literal,
  [sym__type_identifier] = sym__type_identifier,
  [sym__path] = sym__path,
  [sym__field_identifier] = sym__field_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_generic_parameters_repeat1] = aux_sym_generic_parameters_repeat1,
  [aux_sym_generic_parameters_repeat2] = aux_sym_generic_parameters_repeat2,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_destruct_repeat1] = aux_sym_destruct_repeat1,
  [aux_sym_call_expr_repeat1] = aux_sym_call_expr_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_if_expr_repeat1] = aux_sym_if_expr_repeat1,
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DeriveStructDrop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DeriveInterfaceDrop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DeriveAnonymousSubstruct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
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
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exported] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Kind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Region] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RefList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ownership] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Variability] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mutability] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Location] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
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
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_import_path] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_import_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_extern] = {
    .visible = true,
    .named = true,
  },
  [sym_func_header] = {
    .visible = true,
    .named = true,
  },
  [sym_func_proto] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_rune] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_region_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_region_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_mutability] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_static_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_destruct] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_return_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_ending_with_block] = {
    .visible = false,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_augment] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_function] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_else_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_parameters_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_destruct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_block = 1,
  field_body = 2,
  field_condition = 3,
  field_else_block = 4,
  field_else_if = 5,
  field_else_if_block = 6,
  field_else_if_condition = 7,
  field_field = 8,
  field_function = 9,
  field_generic_parameters = 10,
  field_left = 11,
  field_name = 12,
  field_operator = 13,
  field_parameters = 14,
  field_path = 15,
  field_return_type = 16,
  field_right = 17,
  field_rune = 18,
  field_then_block = 19,
  field_type = 20,
  field_type_parameters = 21,
  field_value = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block] = "block",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_else_block] = "else_block",
  [field_else_if] = "else_if",
  [field_else_if_block] = "else_if_block",
  [field_else_if_condition] = "else_if_condition",
  [field_field] = "field",
  [field_function] = "function",
  [field_generic_parameters] = "generic_parameters",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_rune] = "rune",
  [field_then_block] = "then_block",
  [field_type] = "type",
  [field_type_parameters] = "type_parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 4},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 2},
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 3},
  [22] = {.index = 44, .length = 4},
  [23] = {.index = 48, .length = 3},
  [24] = {.index = 51, .length = 3},
  [25] = {.index = 54, .length = 4},
  [26] = {.index = 58, .length = 4},
  [27] = {.index = 62, .length = 5},
  [28] = {.index = 67, .length = 6},
  [29] = {.index = 73, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1},
    {field_parameters, 2},
  [4] =
    {field_name, 2},
    {field_path, 0},
  [6] =
    {field_name, 2},
    {field_parameters, 3},
  [8] =
    {field_generic_parameters, 2},
    {field_name, 1},
    {field_parameters, 3},
  [11] =
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 3},
  [14] =
    {field_function, 0},
    {field_type_parameters, 1},
  [16] =
    {field_generic_parameters, 1},
    {field_type, 0},
  [18] =
    {field_generic_parameters, 3},
    {field_name, 2},
    {field_parameters, 4},
  [21] =
    {field_name, 2},
    {field_parameters, 3},
    {field_return_type, 4},
  [24] =
    {field_name, 0},
    {field_type, 1},
  [26] =
    {field_name, 0},
    {field_rune, 1},
  [28] =
    {field_generic_parameters, 2},
    {field_name, 1},
    {field_parameters, 3},
    {field_return_type, 4},
  [32] =
    {field_block, 2},
    {field_condition, 1},
  [34] =
    {field_condition, 1},
    {field_then_block, 2},
  [36] =
    {field_field, 2},
    {field_value, 0},
  [38] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [41] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [44] =
    {field_generic_parameters, 3},
    {field_name, 2},
    {field_parameters, 4},
    {field_return_type, 5},
  [48] =
    {field_condition, 1},
    {field_else_block, 3},
    {field_then_block, 2},
  [51] =
    {field_condition, 1},
    {field_else_if, 3},
    {field_then_block, 2},
  [54] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
  [58] =
    {field_condition, 1},
    {field_else_block, 4},
    {field_else_if, 3},
    {field_then_block, 2},
  [62] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
  [67] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
  [73] =
    {field_else_if_block, 3},
    {field_else_if_condition, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [9] = {
    [0] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 2,
  [7] = 3,
  [8] = 2,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 21,
  [34] = 34,
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 32,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 40,
  [50] = 22,
  [51] = 37,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 22,
  [58] = 40,
  [59] = 37,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 62,
  [66] = 66,
  [67] = 13,
  [68] = 14,
  [69] = 16,
  [70] = 70,
  [71] = 24,
  [72] = 70,
  [73] = 73,
  [74] = 44,
  [75] = 75,
  [76] = 76,
  [77] = 56,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 48,
  [90] = 52,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 53,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 55,
  [101] = 47,
  [102] = 102,
  [103] = 103,
  [104] = 54,
  [105] = 105,
  [106] = 45,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 70,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 112,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 123,
  [126] = 126,
  [127] = 117,
  [128] = 119,
  [129] = 122,
  [130] = 130,
  [131] = 131,
  [132] = 126,
  [133] = 133,
  [134] = 131,
  [135] = 120,
  [136] = 120,
  [137] = 118,
  [138] = 131,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 143,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 147,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 158,
  [162] = 162,
  [163] = 163,
  [164] = 163,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 168,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 169,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 109,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 212,
  [216] = 216,
  [217] = 80,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 223,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 224,
  [235] = 235,
  [236] = 235,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 243,
  [247] = 242,
  [248] = 248,
  [249] = 249,
  [250] = 241,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 238,
  [262] = 262,
  [263] = 251,
  [264] = 264,
  [265] = 255,
  [266] = 252,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 237,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 92,
  [282] = 282,
  [283] = 82,
  [284] = 75,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 94,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 81,
  [294] = 285,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 298,
  [305] = 305,
  [306] = 282,
  [307] = 307,
  [308] = 280,
  [309] = 309,
  [310] = 295,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 321,
  [323] = 323,
  [324] = 86,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 78,
  [331] = 331,
  [332] = 332,
  [333] = 185,
  [334] = 334,
  [335] = 105,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 79,
  [344] = 337,
  [345] = 191,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 182,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 331,
  [358] = 340,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 361,
  [363] = 338,
  [364] = 364,
  [365] = 347,
  [366] = 366,
  [367] = 325,
  [368] = 341,
  [369] = 183,
  [370] = 346,
  [371] = 360,
  [372] = 372,
  [373] = 373,
  [374] = 374,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 'p'
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'd' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'm')))
                : (c <= 'q' || (c < 170
                  ? (c < 'x'
                    ? (c >= 'u' && c <= 'v')
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 'p'
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'm')))
                : (c <= 'q' || (c < 170
                  ? (c < 'x'
                    ? (c >= 'u' && c <= 'v')
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43494
    ? (c < 4186
      ? (c < 2703
        ? (c < 1969
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'n' || (c < 170
                    ? (c >= 'p' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1646
              ? (c < 1369
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3634 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8130
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7296
            ? (c < 6688
              ? (c < 6480
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))))
            : (c <= 7304 || (c < 7968
              ? (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 12321
          ? (c < 8526
            ? (c < 8455
              ? (c < 8182
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))
                : (c <= 8188 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || c == 8450))))
              : (c <= 8455 || (c < 8486
                ? (c < 8472
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11648
              ? (c < 11520
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11712
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))))))))
          : (c <= 12329 || (c < 42786
            ? (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42538
                ? (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42656
                  ? (c < 42623
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))
            : (c <= 42888 || (c < 43138
              ? (c < 42994
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43009 || (c < 43020
                  ? (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))))
              : (c <= 43187 || (c < 43312
                ? (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))))))))))))))
    : (c <= 43503 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43824
            ? (c < 43712
              ? (c < 43642
                ? (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43586 || (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)))
                : (c <= 43642 || (c < 43701
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : c <= 43697)
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43777
                ? (c < 43744
                  ? (c < 43739
                    ? c == 43714
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))))
            : (c <= 43866 || (c < 64287
              ? (c < 63744
                ? (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44002)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 'o'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'm')))
                : (c <= 'q' || (c < 170
                  ? (c < 'x'
                    ? (c >= 'u' && c <= 'v')
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 43488
    ? (c < 4159
      ? (c < 2654
        ? (c < 1808
          ? (c < 895
            ? (c < 192
              ? (c < 'n'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'l')))
                : (c <= 's' || (c < 181
                  ? (c < 170
                    ? (c >= 'u' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 748
                ? (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))))))
            : (c <= 895 || (c < 1488
              ? (c < 1015
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))
                : (c <= 1153 || (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))
              : (c <= 1514 || (c < 1749
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1808 || (c < 2437
            ? (c < 2112
              ? (c < 2042
                ? (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2308
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))))))
            : (c <= 2444 || (c < 2544
              ? (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))
              : (c <= 2545 || (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3205
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 3024
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))))
              : (c <= 3024 || (c < 3133
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3169 || c == 3200))))))))
          : (c <= 3212 || (c < 3520
            ? (c < 3346
              ? (c < 3293
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)))
                : (c <= 3294 || (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3450
                ? (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3762
              ? (c < 3716
                ? (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3634)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))))
              : (c <= 3762 || (c < 3840
                ? (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3976
                  ? (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))))))))))))
      : (c <= 4159 || (c < 8126
        ? (c < 6103
          ? (c < 4792
            ? (c < 4304
              ? (c < 4213
                ? (c < 4193
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4189)
                  : (c <= 4193 || (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)))
                : (c <= 4225 || (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))))
              : (c <= 4346 || (c < 4698
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))))
            : (c <= 4798 || (c < 5743
              ? (c < 4888
                ? (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)))
                : (c <= 4954 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))
              : (c <= 5759 || (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))))))))
          : (c <= 6103 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || (c < 6320
                    ? c == 6314
                    : c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42775
            ? (c < 12784
              ? (c < 12449
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)))
                : (c <= 12538 || (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))))
              : (c <= 12799 || (c < 42512
                ? (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42623
                  ? (c < 42560
                    ? (c >= 42538 && c <= 42539)
                    : c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))))))
            : (c <= 42783 || (c < 43072
              ? (c < 42965
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43015
                  ? (c < 43011
                    ? (c >= 42994 && c <= 43009)
                    : c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))))
              : (c <= 43123 || (c < 43274
                ? (c < 43259
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))))))))))))))
    : (c <= 43492 || (c < 70656
      ? (c < 66940
        ? (c < 64848
          ? (c < 43816
            ? (c < 43705
              ? (c < 43616
                ? (c < 43520
                  ? (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43560 || (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)))
                : (c <= 43638 || (c < 43697
                  ? (c < 43646
                    ? c == 43642
                    : c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))))
              : (c <= 43709 || (c < 43762
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))))
            : (c <= 43822 || (c < 64285
              ? (c < 55243
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44002 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))
              : (c <= 64285 || (c < 64320
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64467
                  ? (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)
                  : (c <= 64605 || (c >= 64612 && c <= 64829)))))))))
          : (c <= 64911 || (c < 65596
            ? (c < 65345
              ? (c < 65145
                ? (c < 65137
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65137 || (c < 65143
                    ? c == 65139
                    : c <= 65143)))
                : (c <= 65145 || (c < 65151
                  ? (c < 65149
                    ? c == 65147
                    : c <= 65149)
                  : (c <= 65276 || (c >= 65313 && c <= 65338)))))
              : (c <= 65370 || (c < 65490
                ? (c < 65474
                  ? (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))
                : (c <= 66204 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))))))))))
        : (c <= 66954 || (c < 68800
          ? (c < 67808
            ? (c < 67463
              ? (c < 67003
                ? (c < 66967
                  ? (c < 66964
                    ? (c >= 66956 && c <= 66962)
                    : c <= 66965)
                  : (c <= 66977 || (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)))
                : (c <= 67004 || (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))
              : (c <= 67504 || (c < 67639
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))))))
            : (c <= 67826 || (c < 68192
              ? (c < 68030
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(198);
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'K') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '^') ADVANCE(265);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(66);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '^') ADVANCE(265);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(341);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '^') ADVANCE(265);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(341);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '&') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '[') ADVANCE(242);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(341);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '&') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(243);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(341);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'K') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '^') ADVANCE(265);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(341);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '&') ADVANCE(240);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(243);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(341);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(295);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8') ADVANCE(255);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(248);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(252);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(249);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(253);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(250);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(254);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '>') ADVANCE(261);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(137);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(139);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(172);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(274);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(195);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 182:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 183:
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 185:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 186:
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 187:
      if (lookahead == '{') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 188:
      if (lookahead == '}') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 196:
      if (eof) ADVANCE(198);
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'K') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '^') ADVANCE(265);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(66);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 197:
      if (eof) ADVANCE(198);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == ',') ADVANCE(218);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      END_STATE();
    case 198:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DeriveStructDrop);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DeriveInterfaceDrop);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DeriveAnonymousSubstruct);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_exported);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(286);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Ref);
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Kind);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_Region);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_Prot);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RefList);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Ownership);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_Variability);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Mutability);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Location);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_ro);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_imm);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_imm);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(264);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '>') ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_set);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_int_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(331);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(341);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(320);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(341);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(307);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(341);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(318);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(282);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(280);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(335);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(278);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(319);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(275);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(321);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(332);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(312);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(333);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(239);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(323);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(260);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(308);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(334);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(338);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(325);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(284);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(309);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(311);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(313);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(267);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(339);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(310);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(329);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(336);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(341);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 197},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 197},
  [58] = {.lex_state = 197},
  [59] = {.lex_state = 197},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 197},
  [68] = {.lex_state = 197},
  [69] = {.lex_state = 197},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 197},
  [72] = {.lex_state = 197},
  [73] = {.lex_state = 197},
  [74] = {.lex_state = 197},
  [75] = {.lex_state = 197},
  [76] = {.lex_state = 197},
  [77] = {.lex_state = 197},
  [78] = {.lex_state = 197},
  [79] = {.lex_state = 197},
  [80] = {.lex_state = 197},
  [81] = {.lex_state = 197},
  [82] = {.lex_state = 197},
  [83] = {.lex_state = 197},
  [84] = {.lex_state = 197},
  [85] = {.lex_state = 197},
  [86] = {.lex_state = 197},
  [87] = {.lex_state = 197},
  [88] = {.lex_state = 197},
  [89] = {.lex_state = 197},
  [90] = {.lex_state = 197},
  [91] = {.lex_state = 197},
  [92] = {.lex_state = 197},
  [93] = {.lex_state = 197},
  [94] = {.lex_state = 197},
  [95] = {.lex_state = 197},
  [96] = {.lex_state = 197},
  [97] = {.lex_state = 197},
  [98] = {.lex_state = 197},
  [99] = {.lex_state = 197},
  [100] = {.lex_state = 197},
  [101] = {.lex_state = 197},
  [102] = {.lex_state = 197},
  [103] = {.lex_state = 197},
  [104] = {.lex_state = 197},
  [105] = {.lex_state = 197},
  [106] = {.lex_state = 197},
  [107] = {.lex_state = 197},
  [108] = {.lex_state = 197},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 197},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 197},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 197},
  [118] = {.lex_state = 197},
  [119] = {.lex_state = 197},
  [120] = {.lex_state = 197},
  [121] = {.lex_state = 197},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 197},
  [127] = {.lex_state = 197},
  [128] = {.lex_state = 197},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 197},
  [131] = {.lex_state = 197},
  [132] = {.lex_state = 197},
  [133] = {.lex_state = 197},
  [134] = {.lex_state = 197},
  [135] = {.lex_state = 197},
  [136] = {.lex_state = 197},
  [137] = {.lex_state = 197},
  [138] = {.lex_state = 197},
  [139] = {.lex_state = 197},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 197},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 197},
  [151] = {.lex_state = 197},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 197},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 197},
  [172] = {.lex_state = 197},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 197},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 197},
  [177] = {.lex_state = 197},
  [178] = {.lex_state = 197},
  [179] = {.lex_state = 197},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 197},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 197},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 197},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 7},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 197},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 197},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 7},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 197},
  [352] = {.lex_state = 197},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 2},
  [359] = {.lex_state = 5},
  [360] = {.lex_state = 2},
  [361] = {.lex_state = 2},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 197},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 2},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 5},
  [374] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DeriveStructDrop] = ACTIONS(1),
    [anon_sym_DeriveInterfaceDrop] = ACTIONS(1),
    [anon_sym_DeriveAnonymousSubstruct] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_exported] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Ref] = ACTIONS(1),
    [anon_sym_Kind] = ACTIONS(1),
    [anon_sym_Region] = ACTIONS(1),
    [anon_sym_Prot] = ACTIONS(1),
    [anon_sym_RefList] = ACTIONS(1),
    [anon_sym_Ownership] = ACTIONS(1),
    [anon_sym_Variability] = ACTIONS(1),
    [anon_sym_Mutability] = ACTIONS(1),
    [anon_sym_Location] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_ro] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_imm] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_int_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(366),
    [sym__top_level] = STATE(130),
    [sym_import] = STATE(130),
    [sym_attribute] = STATE(364),
    [sym_extern] = STATE(374),
    [sym_func_header] = STATE(239),
    [sym_func_proto] = STATE(130),
    [sym_function_definition] = STATE(130),
    [sym_struct_definition] = STATE(130),
    [aux_sym_source_file_repeat1] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_export] = ACTIONS(15),
    [anon_sym_exported] = ACTIONS(13),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(325), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(215), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(7), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(46), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(135), 11,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_binary_expr,
  [121] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(325), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(215), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(46), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(138), 11,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_binary_expr,
  [242] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(325), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(215), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(46), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(131), 11,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_binary_expr,
  [363] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_return,
    ACTIONS(76), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_set,
    ACTIONS(88), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_foreach,
    ACTIONS(94), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(100), 1,
      sym_float_lit,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(325), 1,
      sym_type,
    ACTIONS(79), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(215), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(46), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(139), 11,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_binary_expr,
  [484] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(325), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(215), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(3), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(46), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(136), 11,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_binary_expr,
  [605] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(325), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(215), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(46), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(134), 11,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_binary_expr,
  [726] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(325), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(215), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(46), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(120), 11,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_binary_expr,
  [847] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_AMP,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(238), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(151), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [963] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_AMP,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      sym__string_literal,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(261), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(151), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1079] = 27,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_AMP,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    STATE(164), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(198), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(357), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1183] = 27,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym__string_literal,
    STATE(164), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(198), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(357), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1287] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_else,
    STATE(56), 1,
      sym_else_expr,
    STATE(16), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(141), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(143), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [1339] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_else,
    STATE(45), 1,
      sym_else_expr,
    STATE(13), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(147), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(149), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [1391] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(114), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1470] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      anon_sym_else,
    STATE(16), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(159), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(161), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [1519] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(121), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1595] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(121), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1671] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(121), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1744] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(98), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1817] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(117), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1890] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(172), 20,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [1933] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(142), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2006] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(176), 20,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [2049] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(107), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2122] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(84), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2195] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(83), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2268] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(91), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2341] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(119), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2414] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(97), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2487] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(85), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2560] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(118), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2633] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(127), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2706] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(99), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2779] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(128), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2852] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(103), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2925] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(180), 20,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [2968] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(154), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3041] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(150), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3114] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(184), 20,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3157] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(132), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3230] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(137), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3303] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_int_lit,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(92), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(126), 16,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3376] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(188), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3418] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(192), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3460] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
    ACTIONS(196), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(198), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(200), 11,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      sym_int_lit,
      sym_identifier,
  [3506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(204), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3548] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(208), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3590] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(184), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(172), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3674] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(180), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3716] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(212), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3758] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(216), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3800] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(220), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3842] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(224), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3884] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(228), 19,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_int_lit,
      sym_identifier,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 7,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(170), 25,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_extern,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 7,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(182), 25,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_extern,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4006] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 7,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(178), 25,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_extern,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4046] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_GT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(240), 1,
      sym_int_lit,
    ACTIONS(242), 1,
      sym_float_lit,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_type_parameter,
    STATE(281), 1,
      sym__string_literal,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(284), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(303), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4122] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(240), 1,
      sym_int_lit,
    ACTIONS(242), 1,
      sym_float_lit,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_GT,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type_parameter,
    STATE(281), 1,
      sym__string_literal,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(284), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(303), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4198] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(240), 1,
      sym_int_lit,
    ACTIONS(242), 1,
      sym_float_lit,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_GT,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(281), 1,
      sym__string_literal,
    STATE(315), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(284), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(303), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4271] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(240), 1,
      sym_int_lit,
    ACTIONS(242), 1,
      sym_float_lit,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_GT,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(281), 1,
      sym__string_literal,
    STATE(315), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(284), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(303), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4344] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(240), 1,
      sym_int_lit,
    ACTIONS(242), 1,
      sym_float_lit,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_GT,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(281), 1,
      sym__string_literal,
    STATE(315), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(284), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(303), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4417] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(240), 1,
      sym_int_lit,
    ACTIONS(242), 1,
      sym_float_lit,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_GT,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(281), 1,
      sym__string_literal,
    STATE(315), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(284), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(303), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4490] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(240), 1,
      sym_int_lit,
    ACTIONS(242), 1,
      sym_float_lit,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(281), 1,
      sym__string_literal,
    STATE(315), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(284), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(303), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4560] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_else,
    STATE(77), 1,
      sym_else_expr,
    STATE(69), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(143), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(141), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4600] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_else,
    STATE(106), 1,
      sym_else_expr,
    STATE(67), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(149), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(147), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4640] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      anon_sym_else,
    STATE(69), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(161), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(159), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4677] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LT,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      anon_sym_AMP,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_type_parameters,
    ACTIONS(279), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(198), 6,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(194), 10,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(174), 17,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4754] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_LT,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_type_parameters,
    ACTIONS(265), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(198), 4,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(194), 12,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4797] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LT,
    STATE(108), 1,
      sym_type_parameters,
    ACTIONS(198), 5,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(194), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(186), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4862] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(288), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(286), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4892] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(290), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4922] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(226), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4952] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(294), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4982] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(298), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5012] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(302), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5042] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(306), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5072] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(310), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5102] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(314), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5150] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_EQ,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(337), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5198] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(344), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5246] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(353), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(351), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5276] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(355), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5306] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(359), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5336] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(206), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5366] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(210), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5396] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(365), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(363), 15,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5428] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(367), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5458] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(371), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5488] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(375), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5518] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(379), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5548] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(214), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5578] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(363), 12,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [5616] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(363), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5658] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(363), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_or,
  [5702] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(222), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5732] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(202), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5762] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(385), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(383), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5792] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(365), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(363), 14,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5828] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(218), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5858] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(387), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5888] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(190), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5918] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_EQ,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(391), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(398), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5996] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_Ref,
    ACTIONS(274), 2,
      anon_sym_DOT,
      anon_sym_in,
    ACTIONS(281), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [6029] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_LT,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_type_parameters,
    ACTIONS(198), 4,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(194), 11,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6067] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(406), 11,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      sym_int_lit,
      sym_identifier,
  [6094] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_RBRACK,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [6147] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(418), 11,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      sym_int_lit,
      sym_identifier,
  [6174] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6221] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(428), 11,
      anon_sym_AMP,
      anon_sym_return,
      anon_sym_not,
      anon_sym_set,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      sym_int_lit,
      sym_identifier,
  [6248] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_RBRACK,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(265), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [6301] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6345] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6389] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6433] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6477] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(436), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6519] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(240), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [6569] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(240), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [6619] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(162), 1,
      sym__type_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(180), 1,
      sym_scoped_type_identifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_generic_parameter,
    STATE(260), 1,
      sym_region_parameter,
    STATE(314), 1,
      sym_type,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [6671] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(240), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [6721] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6765] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6809] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6853] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(240), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [6903] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_extern,
    ACTIONS(15), 1,
      anon_sym_export,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_struct,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_func_header,
    STATE(364), 1,
      sym_attribute,
    STATE(374), 1,
      sym_extern,
    ACTIONS(13), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(133), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [6949] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6993] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_block,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7037] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 1,
      anon_sym_import,
    ACTIONS(461), 1,
      anon_sym_POUND,
    ACTIONS(464), 1,
      anon_sym_extern,
    ACTIONS(470), 1,
      anon_sym_export,
    ACTIONS(473), 1,
      anon_sym_func,
    ACTIONS(476), 1,
      anon_sym_struct,
    STATE(239), 1,
      sym_func_header,
    STATE(364), 1,
      sym_attribute,
    STATE(374), 1,
      sym_extern,
    ACTIONS(467), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(133), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [7083] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7127] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7171] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7215] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7259] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7303] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7344] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(277), 1,
      sym_type,
    ACTIONS(483), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [7389] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(309), 1,
      sym_type,
    ACTIONS(485), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [7434] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_EQ,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7475] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_LBRACK,
    STATE(164), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(346), 1,
      sym_pattern,
    STATE(367), 1,
      sym_type,
    STATE(369), 1,
      sym_destruct,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [7522] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(240), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [7569] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_LBRACK,
    STATE(164), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(367), 1,
      sym_type,
    STATE(369), 1,
      sym_destruct,
    STATE(370), 1,
      sym_pattern,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [7616] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(316), 1,
      sym_type,
    ACTIONS(491), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [7661] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(236), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [7708] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_GT,
    STATE(162), 1,
      sym__type_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(180), 1,
      sym_scoped_type_identifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(313), 1,
      sym_generic_parameter,
    STATE(314), 1,
      sym_type,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [7757] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_destruct,
    STATE(187), 1,
      sym_generic_type,
    STATE(235), 1,
      sym_pattern,
    STATE(325), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(212), 2,
      sym_scoped_identifier,
      sym__path,
  [7804] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7845] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7886] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(292), 1,
      sym_type,
    ACTIONS(499), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [7931] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_GT,
    STATE(162), 1,
      sym__type_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(180), 1,
      sym_scoped_type_identifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(313), 1,
      sym_generic_parameter,
    STATE(314), 1,
      sym_type,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [7980] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(327), 1,
      anon_sym_and,
    ACTIONS(329), 1,
      anon_sym_or,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_SEMI,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(331), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [8021] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_BANG,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(372), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [8065] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(164), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(323), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(357), 2,
      sym_scoped_identifier,
      sym__path,
  [8109] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(162), 1,
      sym__type_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(180), 1,
      sym_scoped_type_identifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(313), 1,
      sym_generic_parameter,
    STATE(314), 1,
      sym_type,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [8155] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(198), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [8196] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(291), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [8237] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(163), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(339), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [8278] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(187), 1,
      sym_generic_type,
    STATE(198), 1,
      sym_type,
    STATE(180), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(193), 2,
      sym_reference_type,
      sym_array_type,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(357), 2,
      sym_scoped_identifier,
      sym__path,
  [8319] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LT,
    ACTIONS(515), 1,
      anon_sym_Ref,
    STATE(184), 1,
      sym_generic_parameters,
    STATE(278), 1,
      sym_rune,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(513), 9,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [8350] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(190), 1,
      sym_generic_type,
    STATE(173), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(201), 2,
      sym_reference_type,
      sym_array_type,
    STATE(331), 2,
      sym_scoped_identifier,
      sym__path,
  [8385] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 1,
      anon_sym_AMP,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(190), 1,
      sym_generic_type,
    STATE(173), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(194), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(201), 2,
      sym_reference_type,
      sym_array_type,
    STATE(357), 2,
      sym_scoped_identifier,
      sym__path,
  [8420] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(519), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8437] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8454] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [8471] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(281), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [8492] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(528), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(281), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [8513] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(533), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8530] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      anon_sym_export,
    ACTIONS(535), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8547] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      anon_sym_export,
    ACTIONS(539), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8564] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LT,
    STATE(184), 1,
      sym_generic_parameters,
    ACTIONS(543), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8583] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      anon_sym_export,
    ACTIONS(545), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8600] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(281), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8617] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(551), 1,
      anon_sym_export,
    ACTIONS(549), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8634] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_export,
    ACTIONS(553), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8651] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(559), 1,
      anon_sym_export,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8668] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      anon_sym_export,
    ACTIONS(561), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8685] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LT,
    STATE(184), 1,
      sym_generic_parameters,
    ACTIONS(511), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8704] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(567), 1,
      anon_sym_export,
    ACTIONS(565), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8721] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(569), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8735] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8749] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(573), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8763] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8777] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(523), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [8793] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_DOT,
    ACTIONS(511), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8809] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8823] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8837] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_DOT,
    ACTIONS(543), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8853] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(583), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8867] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(528), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [8883] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(511), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8896] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8909] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8922] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(589), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8935] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8948] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8961] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 1,
      anon_sym_DOT,
    ACTIONS(597), 1,
      anon_sym_STAR,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(354), 1,
      sym_import_wildcard,
    STATE(355), 1,
      sym_import_path,
    STATE(286), 2,
      sym_scoped_identifier,
      sym__path,
  [8984] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 2,
      anon_sym_LT,
      anon_sym_LBRACK,
    ACTIONS(274), 4,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9001] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(543), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9014] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(601), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9027] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LT,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    STATE(222), 1,
      sym_generic_parameters,
    STATE(336), 1,
      sym_mutability,
    ACTIONS(605), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9047] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9059] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LT,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_generic_parameters,
    STATE(327), 1,
      sym_mutability,
    ACTIONS(605), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9079] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9091] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(613), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9103] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(617), 1,
      sym_identifier,
    STATE(155), 1,
      sym__field_identifier,
    STATE(218), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9120] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(617), 1,
      sym_identifier,
    STATE(155), 1,
      sym__field_identifier,
    STATE(214), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9137] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(621), 1,
      anon_sym_BANG,
    STATE(351), 1,
      sym_attribute_name,
    ACTIONS(619), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [9152] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(220), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9169] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(625), 1,
      anon_sym_DOT,
    ACTIONS(571), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [9182] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(214), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9199] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 1,
      sym_identifier,
    STATE(155), 1,
      sym__field_identifier,
    STATE(214), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9216] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(634), 1,
      anon_sym_DOT,
    ACTIONS(571), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_identifier,
  [9229] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(209), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9246] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9257] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(214), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9274] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(213), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9291] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(214), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9308] = 4,
    ACTIONS(641), 1,
      sym_line_comment,
    ACTIONS(646), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(643), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9322] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(326), 1,
      sym_mutability,
    ACTIONS(605), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9336] = 4,
    ACTIONS(641), 1,
      sym_line_comment,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    STATE(234), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(650), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9350] = 4,
    ACTIONS(641), 1,
      sym_line_comment,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(654), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9364] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
    ACTIONS(658), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [9378] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 1,
      anon_sym_LT,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(202), 1,
      sym__type_identifier,
    STATE(307), 1,
      sym_type_parameters,
  [9394] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(334), 1,
      sym_attribute_name,
    ACTIONS(619), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [9406] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    STATE(336), 1,
      sym_mutability,
    ACTIONS(605), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9420] = 4,
    ACTIONS(641), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(667), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9434] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_parameters,
    STATE(320), 1,
      sym_generic_parameters,
  [9450] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9460] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_parameters,
    STATE(312), 1,
      sym_generic_parameters,
  [9476] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 1,
      anon_sym_LT,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(195), 1,
      sym__type_identifier,
    STATE(289), 1,
      sym_type_parameters,
  [9492] = 4,
    ACTIONS(641), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(654), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9506] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym_destruct_repeat1,
  [9519] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_destruct_repeat1,
  [9532] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9545] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_destruct_repeat1,
  [9558] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      sym_block,
  [9571] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(658), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9580] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    ACTIONS(691), 1,
      anon_sym_if,
    STATE(55), 1,
      sym_block,
  [9593] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_type_parameters_repeat1,
  [9606] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9619] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_call_expr_repeat1,
  [9632] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym__string_literal,
    STATE(332), 1,
      sym_string_literal,
  [9645] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9658] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      anon_sym_GT,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym_type_parameters_repeat1,
  [9671] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_GT,
    STATE(248), 1,
      aux_sym_generic_parameters_repeat2,
  [9684] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      anon_sym_GT,
    STATE(311), 1,
      sym_region_parameter,
  [9697] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    ACTIONS(708), 1,
      anon_sym_if,
    STATE(100), 1,
      sym_block,
  [9710] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_GT,
    STATE(247), 1,
      aux_sym_type_parameters_repeat1,
  [9723] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9736] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(258), 1,
      sym_parameter,
  [9749] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_GT,
    STATE(254), 1,
      aux_sym_generic_parameters_repeat1,
  [9762] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_destruct_repeat1,
  [9775] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [9784] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_parameters_repeat1,
  [9797] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_parameters_repeat1,
  [9810] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_GT,
    STATE(271), 1,
      aux_sym_generic_parameters_repeat1,
  [9823] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      anon_sym_GT,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_generic_parameters_repeat2,
  [9836] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_destruct_repeat1,
  [9849] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_GT,
    STATE(262), 1,
      aux_sym_type_parameters_repeat1,
  [9862] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_GT,
    STATE(242), 1,
      aux_sym_type_parameters_repeat1,
  [9875] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(755), 1,
      sym_int_lit,
    STATE(353), 1,
      sym__type_identifier,
  [9888] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_destruct_repeat1,
  [9901] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9914] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_parameters_repeat1,
  [9927] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_call_expr_repeat1,
  [9940] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(766), 1,
      anon_sym_ro,
    ACTIONS(764), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9951] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9964] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_GT,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_generic_parameters_repeat1,
  [9977] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    ACTIONS(501), 1,
      anon_sym_GT,
    STATE(311), 1,
      sym_region_parameter,
  [9990] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_GT,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_generic_parameters_repeat2,
  [10003] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [10011] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(774), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [10019] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(205), 1,
      sym__type_identifier,
  [10029] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10037] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(778), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10045] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10053] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [10063] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10071] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
  [10081] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10089] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10097] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
  [10107] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(784), 1,
      anon_sym_DOT,
  [10117] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    STATE(311), 1,
      sym_region_parameter,
  [10127] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10135] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(197), 1,
      sym__type_identifier,
  [10145] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(319), 1,
      sym_parameter,
  [10155] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(786), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10163] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(788), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10171] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10179] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
  [10189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 1,
      sym_identifier,
    STATE(188), 1,
      sym__type_identifier,
  [10199] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      anon_sym_func,
  [10209] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(203), 1,
      sym__type_identifier,
  [10219] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_block,
  [10229] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(188), 1,
      sym__type_identifier,
  [10239] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(796), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [10247] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(798), 1,
      sym_identifier,
    STATE(88), 1,
      sym__field_identifier,
  [10257] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(523), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [10265] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(800), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10273] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
  [10283] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      anon_sym_STAR,
    ACTIONS(804), 1,
      sym_identifier,
  [10293] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
  [10303] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(196), 1,
      sym__type_identifier,
  [10313] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
  [10323] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(806), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10331] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    STATE(188), 1,
      sym__type_identifier,
  [10341] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10349] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_parameters,
  [10359] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10367] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(810), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10375] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10383] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(812), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10391] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      anon_sym_RBRACK,
  [10401] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(814), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10409] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(727), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10417] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_parameters,
  [10427] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(816), 1,
      sym_identifier,
    STATE(189), 1,
      sym__type_identifier,
  [10437] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(818), 1,
      sym_identifier,
    STATE(189), 1,
      sym__type_identifier,
  [10447] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(820), 1,
      anon_sym_EQ,
  [10454] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      sym_identifier,
  [10461] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(822), 1,
      anon_sym_LBRACK,
  [10468] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(824), 1,
      anon_sym_LBRACE,
  [10475] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
  [10482] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(826), 1,
      anon_sym_func,
  [10489] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      sym_identifier,
  [10496] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
  [10503] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(830), 1,
      anon_sym_DOT,
  [10510] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [10517] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_in,
  [10524] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(834), 1,
      anon_sym_struct,
  [10531] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      sym_identifier,
  [10538] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
  [10545] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_GT,
  [10552] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_EQ_GT,
  [10559] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(838), 1,
      anon_sym_SEMI,
  [10566] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_EQ_GT,
  [10573] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [10580] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [10587] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      sym_identifier,
  [10594] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 1,
      anon_sym_GT,
  [10601] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(583), 1,
      anon_sym_in,
  [10608] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(842), 1,
      anon_sym_in,
  [10615] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(691), 1,
      anon_sym_if,
  [10622] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 1,
      anon_sym_SEMI,
  [10629] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 1,
      sym_identifier,
  [10636] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      anon_sym_in,
  [10643] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(848), 1,
      anon_sym_struct,
  [10650] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(850), 1,
      anon_sym_struct,
  [10657] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
  [10664] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SEMI,
  [10671] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(854), 1,
      anon_sym_SEMI,
  [10678] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(856), 1,
      anon_sym_SEMI,
  [10685] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(625), 1,
      anon_sym_DOT,
  [10692] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(858), 1,
      anon_sym_EQ_GT,
  [10699] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(860), 1,
      sym_identifier,
  [10706] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      anon_sym_EQ_GT,
  [10713] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(864), 1,
      anon_sym_EQ_GT,
  [10720] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(866), 1,
      anon_sym_EQ_GT,
  [10727] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(868), 1,
      anon_sym_EQ_GT,
  [10734] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(870), 1,
      anon_sym_struct,
  [10741] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      anon_sym_if,
  [10748] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(872), 1,
      ts_builtin_sym_end,
  [10755] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(874), 1,
      anon_sym_LBRACK,
  [10762] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [10769] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 1,
      anon_sym_in,
  [10776] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(876), 1,
      anon_sym_in,
  [10783] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(878), 1,
      anon_sym_EQ_GT,
  [10790] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_SEMI,
  [10797] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(882), 1,
      sym_identifier,
  [10804] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(884), 1,
      anon_sym_func,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 121,
  [SMALL_STATE(4)] = 242,
  [SMALL_STATE(5)] = 363,
  [SMALL_STATE(6)] = 484,
  [SMALL_STATE(7)] = 605,
  [SMALL_STATE(8)] = 726,
  [SMALL_STATE(9)] = 847,
  [SMALL_STATE(10)] = 963,
  [SMALL_STATE(11)] = 1079,
  [SMALL_STATE(12)] = 1183,
  [SMALL_STATE(13)] = 1287,
  [SMALL_STATE(14)] = 1339,
  [SMALL_STATE(15)] = 1391,
  [SMALL_STATE(16)] = 1470,
  [SMALL_STATE(17)] = 1519,
  [SMALL_STATE(18)] = 1595,
  [SMALL_STATE(19)] = 1671,
  [SMALL_STATE(20)] = 1744,
  [SMALL_STATE(21)] = 1817,
  [SMALL_STATE(22)] = 1890,
  [SMALL_STATE(23)] = 1933,
  [SMALL_STATE(24)] = 2006,
  [SMALL_STATE(25)] = 2049,
  [SMALL_STATE(26)] = 2122,
  [SMALL_STATE(27)] = 2195,
  [SMALL_STATE(28)] = 2268,
  [SMALL_STATE(29)] = 2341,
  [SMALL_STATE(30)] = 2414,
  [SMALL_STATE(31)] = 2487,
  [SMALL_STATE(32)] = 2560,
  [SMALL_STATE(33)] = 2633,
  [SMALL_STATE(34)] = 2706,
  [SMALL_STATE(35)] = 2779,
  [SMALL_STATE(36)] = 2852,
  [SMALL_STATE(37)] = 2925,
  [SMALL_STATE(38)] = 2968,
  [SMALL_STATE(39)] = 3041,
  [SMALL_STATE(40)] = 3114,
  [SMALL_STATE(41)] = 3157,
  [SMALL_STATE(42)] = 3230,
  [SMALL_STATE(43)] = 3303,
  [SMALL_STATE(44)] = 3376,
  [SMALL_STATE(45)] = 3418,
  [SMALL_STATE(46)] = 3460,
  [SMALL_STATE(47)] = 3506,
  [SMALL_STATE(48)] = 3548,
  [SMALL_STATE(49)] = 3590,
  [SMALL_STATE(50)] = 3632,
  [SMALL_STATE(51)] = 3674,
  [SMALL_STATE(52)] = 3716,
  [SMALL_STATE(53)] = 3758,
  [SMALL_STATE(54)] = 3800,
  [SMALL_STATE(55)] = 3842,
  [SMALL_STATE(56)] = 3884,
  [SMALL_STATE(57)] = 3926,
  [SMALL_STATE(58)] = 3966,
  [SMALL_STATE(59)] = 4006,
  [SMALL_STATE(60)] = 4046,
  [SMALL_STATE(61)] = 4122,
  [SMALL_STATE(62)] = 4198,
  [SMALL_STATE(63)] = 4271,
  [SMALL_STATE(64)] = 4344,
  [SMALL_STATE(65)] = 4417,
  [SMALL_STATE(66)] = 4490,
  [SMALL_STATE(67)] = 4560,
  [SMALL_STATE(68)] = 4600,
  [SMALL_STATE(69)] = 4640,
  [SMALL_STATE(70)] = 4677,
  [SMALL_STATE(71)] = 4723,
  [SMALL_STATE(72)] = 4754,
  [SMALL_STATE(73)] = 4797,
  [SMALL_STATE(74)] = 4832,
  [SMALL_STATE(75)] = 4862,
  [SMALL_STATE(76)] = 4892,
  [SMALL_STATE(77)] = 4922,
  [SMALL_STATE(78)] = 4952,
  [SMALL_STATE(79)] = 4982,
  [SMALL_STATE(80)] = 5012,
  [SMALL_STATE(81)] = 5042,
  [SMALL_STATE(82)] = 5072,
  [SMALL_STATE(83)] = 5102,
  [SMALL_STATE(84)] = 5150,
  [SMALL_STATE(85)] = 5198,
  [SMALL_STATE(86)] = 5246,
  [SMALL_STATE(87)] = 5276,
  [SMALL_STATE(88)] = 5306,
  [SMALL_STATE(89)] = 5336,
  [SMALL_STATE(90)] = 5366,
  [SMALL_STATE(91)] = 5396,
  [SMALL_STATE(92)] = 5428,
  [SMALL_STATE(93)] = 5458,
  [SMALL_STATE(94)] = 5488,
  [SMALL_STATE(95)] = 5518,
  [SMALL_STATE(96)] = 5548,
  [SMALL_STATE(97)] = 5578,
  [SMALL_STATE(98)] = 5616,
  [SMALL_STATE(99)] = 5658,
  [SMALL_STATE(100)] = 5702,
  [SMALL_STATE(101)] = 5732,
  [SMALL_STATE(102)] = 5762,
  [SMALL_STATE(103)] = 5792,
  [SMALL_STATE(104)] = 5828,
  [SMALL_STATE(105)] = 5858,
  [SMALL_STATE(106)] = 5888,
  [SMALL_STATE(107)] = 5918,
  [SMALL_STATE(108)] = 5966,
  [SMALL_STATE(109)] = 5996,
  [SMALL_STATE(110)] = 6029,
  [SMALL_STATE(111)] = 6067,
  [SMALL_STATE(112)] = 6094,
  [SMALL_STATE(113)] = 6147,
  [SMALL_STATE(114)] = 6174,
  [SMALL_STATE(115)] = 6221,
  [SMALL_STATE(116)] = 6248,
  [SMALL_STATE(117)] = 6301,
  [SMALL_STATE(118)] = 6345,
  [SMALL_STATE(119)] = 6389,
  [SMALL_STATE(120)] = 6433,
  [SMALL_STATE(121)] = 6477,
  [SMALL_STATE(122)] = 6519,
  [SMALL_STATE(123)] = 6569,
  [SMALL_STATE(124)] = 6619,
  [SMALL_STATE(125)] = 6671,
  [SMALL_STATE(126)] = 6721,
  [SMALL_STATE(127)] = 6765,
  [SMALL_STATE(128)] = 6809,
  [SMALL_STATE(129)] = 6853,
  [SMALL_STATE(130)] = 6903,
  [SMALL_STATE(131)] = 6949,
  [SMALL_STATE(132)] = 6993,
  [SMALL_STATE(133)] = 7037,
  [SMALL_STATE(134)] = 7083,
  [SMALL_STATE(135)] = 7127,
  [SMALL_STATE(136)] = 7171,
  [SMALL_STATE(137)] = 7215,
  [SMALL_STATE(138)] = 7259,
  [SMALL_STATE(139)] = 7303,
  [SMALL_STATE(140)] = 7344,
  [SMALL_STATE(141)] = 7389,
  [SMALL_STATE(142)] = 7434,
  [SMALL_STATE(143)] = 7475,
  [SMALL_STATE(144)] = 7522,
  [SMALL_STATE(145)] = 7569,
  [SMALL_STATE(146)] = 7616,
  [SMALL_STATE(147)] = 7661,
  [SMALL_STATE(148)] = 7708,
  [SMALL_STATE(149)] = 7757,
  [SMALL_STATE(150)] = 7804,
  [SMALL_STATE(151)] = 7845,
  [SMALL_STATE(152)] = 7886,
  [SMALL_STATE(153)] = 7931,
  [SMALL_STATE(154)] = 7980,
  [SMALL_STATE(155)] = 8021,
  [SMALL_STATE(156)] = 8065,
  [SMALL_STATE(157)] = 8109,
  [SMALL_STATE(158)] = 8155,
  [SMALL_STATE(159)] = 8196,
  [SMALL_STATE(160)] = 8237,
  [SMALL_STATE(161)] = 8278,
  [SMALL_STATE(162)] = 8319,
  [SMALL_STATE(163)] = 8350,
  [SMALL_STATE(164)] = 8385,
  [SMALL_STATE(165)] = 8420,
  [SMALL_STATE(166)] = 8437,
  [SMALL_STATE(167)] = 8454,
  [SMALL_STATE(168)] = 8471,
  [SMALL_STATE(169)] = 8492,
  [SMALL_STATE(170)] = 8513,
  [SMALL_STATE(171)] = 8530,
  [SMALL_STATE(172)] = 8547,
  [SMALL_STATE(173)] = 8564,
  [SMALL_STATE(174)] = 8583,
  [SMALL_STATE(175)] = 8600,
  [SMALL_STATE(176)] = 8617,
  [SMALL_STATE(177)] = 8634,
  [SMALL_STATE(178)] = 8651,
  [SMALL_STATE(179)] = 8668,
  [SMALL_STATE(180)] = 8685,
  [SMALL_STATE(181)] = 8704,
  [SMALL_STATE(182)] = 8721,
  [SMALL_STATE(183)] = 8735,
  [SMALL_STATE(184)] = 8749,
  [SMALL_STATE(185)] = 8763,
  [SMALL_STATE(186)] = 8777,
  [SMALL_STATE(187)] = 8793,
  [SMALL_STATE(188)] = 8809,
  [SMALL_STATE(189)] = 8823,
  [SMALL_STATE(190)] = 8837,
  [SMALL_STATE(191)] = 8853,
  [SMALL_STATE(192)] = 8867,
  [SMALL_STATE(193)] = 8883,
  [SMALL_STATE(194)] = 8896,
  [SMALL_STATE(195)] = 8909,
  [SMALL_STATE(196)] = 8922,
  [SMALL_STATE(197)] = 8935,
  [SMALL_STATE(198)] = 8948,
  [SMALL_STATE(199)] = 8961,
  [SMALL_STATE(200)] = 8984,
  [SMALL_STATE(201)] = 9001,
  [SMALL_STATE(202)] = 9014,
  [SMALL_STATE(203)] = 9027,
  [SMALL_STATE(204)] = 9047,
  [SMALL_STATE(205)] = 9059,
  [SMALL_STATE(206)] = 9079,
  [SMALL_STATE(207)] = 9091,
  [SMALL_STATE(208)] = 9103,
  [SMALL_STATE(209)] = 9120,
  [SMALL_STATE(210)] = 9137,
  [SMALL_STATE(211)] = 9152,
  [SMALL_STATE(212)] = 9169,
  [SMALL_STATE(213)] = 9182,
  [SMALL_STATE(214)] = 9199,
  [SMALL_STATE(215)] = 9216,
  [SMALL_STATE(216)] = 9229,
  [SMALL_STATE(217)] = 9246,
  [SMALL_STATE(218)] = 9257,
  [SMALL_STATE(219)] = 9274,
  [SMALL_STATE(220)] = 9291,
  [SMALL_STATE(221)] = 9308,
  [SMALL_STATE(222)] = 9322,
  [SMALL_STATE(223)] = 9336,
  [SMALL_STATE(224)] = 9350,
  [SMALL_STATE(225)] = 9364,
  [SMALL_STATE(226)] = 9378,
  [SMALL_STATE(227)] = 9394,
  [SMALL_STATE(228)] = 9406,
  [SMALL_STATE(229)] = 9420,
  [SMALL_STATE(230)] = 9434,
  [SMALL_STATE(231)] = 9450,
  [SMALL_STATE(232)] = 9460,
  [SMALL_STATE(233)] = 9476,
  [SMALL_STATE(234)] = 9492,
  [SMALL_STATE(235)] = 9506,
  [SMALL_STATE(236)] = 9519,
  [SMALL_STATE(237)] = 9532,
  [SMALL_STATE(238)] = 9545,
  [SMALL_STATE(239)] = 9558,
  [SMALL_STATE(240)] = 9571,
  [SMALL_STATE(241)] = 9580,
  [SMALL_STATE(242)] = 9593,
  [SMALL_STATE(243)] = 9606,
  [SMALL_STATE(244)] = 9619,
  [SMALL_STATE(245)] = 9632,
  [SMALL_STATE(246)] = 9645,
  [SMALL_STATE(247)] = 9658,
  [SMALL_STATE(248)] = 9671,
  [SMALL_STATE(249)] = 9684,
  [SMALL_STATE(250)] = 9697,
  [SMALL_STATE(251)] = 9710,
  [SMALL_STATE(252)] = 9723,
  [SMALL_STATE(253)] = 9736,
  [SMALL_STATE(254)] = 9749,
  [SMALL_STATE(255)] = 9762,
  [SMALL_STATE(256)] = 9775,
  [SMALL_STATE(257)] = 9784,
  [SMALL_STATE(258)] = 9797,
  [SMALL_STATE(259)] = 9810,
  [SMALL_STATE(260)] = 9823,
  [SMALL_STATE(261)] = 9836,
  [SMALL_STATE(262)] = 9849,
  [SMALL_STATE(263)] = 9862,
  [SMALL_STATE(264)] = 9875,
  [SMALL_STATE(265)] = 9888,
  [SMALL_STATE(266)] = 9901,
  [SMALL_STATE(267)] = 9914,
  [SMALL_STATE(268)] = 9927,
  [SMALL_STATE(269)] = 9940,
  [SMALL_STATE(270)] = 9951,
  [SMALL_STATE(271)] = 9964,
  [SMALL_STATE(272)] = 9977,
  [SMALL_STATE(273)] = 9990,
  [SMALL_STATE(274)] = 10003,
  [SMALL_STATE(275)] = 10011,
  [SMALL_STATE(276)] = 10019,
  [SMALL_STATE(277)] = 10029,
  [SMALL_STATE(278)] = 10037,
  [SMALL_STATE(279)] = 10045,
  [SMALL_STATE(280)] = 10053,
  [SMALL_STATE(281)] = 10063,
  [SMALL_STATE(282)] = 10071,
  [SMALL_STATE(283)] = 10081,
  [SMALL_STATE(284)] = 10089,
  [SMALL_STATE(285)] = 10097,
  [SMALL_STATE(286)] = 10107,
  [SMALL_STATE(287)] = 10117,
  [SMALL_STATE(288)] = 10127,
  [SMALL_STATE(289)] = 10135,
  [SMALL_STATE(290)] = 10145,
  [SMALL_STATE(291)] = 10155,
  [SMALL_STATE(292)] = 10163,
  [SMALL_STATE(293)] = 10171,
  [SMALL_STATE(294)] = 10179,
  [SMALL_STATE(295)] = 10189,
  [SMALL_STATE(296)] = 10199,
  [SMALL_STATE(297)] = 10209,
  [SMALL_STATE(298)] = 10219,
  [SMALL_STATE(299)] = 10229,
  [SMALL_STATE(300)] = 10239,
  [SMALL_STATE(301)] = 10247,
  [SMALL_STATE(302)] = 10257,
  [SMALL_STATE(303)] = 10265,
  [SMALL_STATE(304)] = 10273,
  [SMALL_STATE(305)] = 10283,
  [SMALL_STATE(306)] = 10293,
  [SMALL_STATE(307)] = 10303,
  [SMALL_STATE(308)] = 10313,
  [SMALL_STATE(309)] = 10323,
  [SMALL_STATE(310)] = 10331,
  [SMALL_STATE(311)] = 10341,
  [SMALL_STATE(312)] = 10349,
  [SMALL_STATE(313)] = 10359,
  [SMALL_STATE(314)] = 10367,
  [SMALL_STATE(315)] = 10375,
  [SMALL_STATE(316)] = 10383,
  [SMALL_STATE(317)] = 10391,
  [SMALL_STATE(318)] = 10401,
  [SMALL_STATE(319)] = 10409,
  [SMALL_STATE(320)] = 10417,
  [SMALL_STATE(321)] = 10427,
  [SMALL_STATE(322)] = 10437,
  [SMALL_STATE(323)] = 10447,
  [SMALL_STATE(324)] = 10454,
  [SMALL_STATE(325)] = 10461,
  [SMALL_STATE(326)] = 10468,
  [SMALL_STATE(327)] = 10475,
  [SMALL_STATE(328)] = 10482,
  [SMALL_STATE(329)] = 10489,
  [SMALL_STATE(330)] = 10496,
  [SMALL_STATE(331)] = 10503,
  [SMALL_STATE(332)] = 10510,
  [SMALL_STATE(333)] = 10517,
  [SMALL_STATE(334)] = 10524,
  [SMALL_STATE(335)] = 10531,
  [SMALL_STATE(336)] = 10538,
  [SMALL_STATE(337)] = 10545,
  [SMALL_STATE(338)] = 10552,
  [SMALL_STATE(339)] = 10559,
  [SMALL_STATE(340)] = 10566,
  [SMALL_STATE(341)] = 10573,
  [SMALL_STATE(342)] = 10580,
  [SMALL_STATE(343)] = 10587,
  [SMALL_STATE(344)] = 10594,
  [SMALL_STATE(345)] = 10601,
  [SMALL_STATE(346)] = 10608,
  [SMALL_STATE(347)] = 10615,
  [SMALL_STATE(348)] = 10622,
  [SMALL_STATE(349)] = 10629,
  [SMALL_STATE(350)] = 10636,
  [SMALL_STATE(351)] = 10643,
  [SMALL_STATE(352)] = 10650,
  [SMALL_STATE(353)] = 10657,
  [SMALL_STATE(354)] = 10664,
  [SMALL_STATE(355)] = 10671,
  [SMALL_STATE(356)] = 10678,
  [SMALL_STATE(357)] = 10685,
  [SMALL_STATE(358)] = 10692,
  [SMALL_STATE(359)] = 10699,
  [SMALL_STATE(360)] = 10706,
  [SMALL_STATE(361)] = 10713,
  [SMALL_STATE(362)] = 10720,
  [SMALL_STATE(363)] = 10727,
  [SMALL_STATE(364)] = 10734,
  [SMALL_STATE(365)] = 10741,
  [SMALL_STATE(366)] = 10748,
  [SMALL_STATE(367)] = 10755,
  [SMALL_STATE(368)] = 10762,
  [SMALL_STATE(369)] = 10769,
  [SMALL_STATE(370)] = 10776,
  [SMALL_STATE(371)] = 10783,
  [SMALL_STATE(372)] = 10790,
  [SMALL_STATE(373)] = 10797,
  [SMALL_STATE(374)] = 10804,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(321),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(143),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(229),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 24),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 24),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 18),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 18),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(347),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 29),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 29),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 23),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 23),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 17),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 26),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 26),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(365),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [268] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(60),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym__path, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(60),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 27),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 27),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 9),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 9),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment_expr, 4), SHIFT(15),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_not, 2), SHIFT(15),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_return_expr, 2), SHIFT(15),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 28),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 28),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 19),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 19),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 20),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 20),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 21),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 21),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 25),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 25),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_augment, 2), SHIFT(15),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 10),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 10),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(374),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(374),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(373),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 12),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 6),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 5),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 5),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proto, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 8),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 11),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 5),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 5),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(217),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pattern, 1), SHIFT(295),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(221),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(144),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_specifier, 2),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat2, 2), SHIFT_REPEAT(287),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat2, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(157),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(290),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(66),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(19),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 16),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 15),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 14),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 13),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 22),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [872] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vale(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
