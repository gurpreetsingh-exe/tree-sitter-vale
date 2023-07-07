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
#define STATE_COUNT 396
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 155
#define ALIAS_COUNT 2
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 39

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
  anon_sym_PLUS = 17,
  anon_sym_SLASH = 18,
  anon_sym_DASH = 19,
  anon_sym_LT_EQ_GT = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_GT = 24,
  anon_sym_EQ_EQ_EQ = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_COMMA = 28,
  anon_sym_Int = 29,
  anon_sym_Ref = 30,
  anon_sym_Kind = 31,
  anon_sym_Region = 32,
  anon_sym_Prot = 33,
  anon_sym_RefList = 34,
  anon_sym_Ownership = 35,
  anon_sym_Variability = 36,
  anon_sym_Mutability = 37,
  anon_sym_Location = 38,
  anon_sym_SQUOTE = 39,
  anon_sym_ro = 40,
  anon_sym_struct = 41,
  anon_sym_LBRACE = 42,
  anon_sym_RBRACE = 43,
  anon_sym_mut = 44,
  anon_sym_imm = 45,
  anon_sym_AMP = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  anon_sym_bool = 49,
  anon_sym_float = 50,
  anon_sym_str = 51,
  anon_sym_void = 52,
  anon_sym_i32 = 53,
  anon_sym_i64 = 54,
  anon_sym_i16 = 55,
  anon_sym_i8 = 56,
  anon_sym_u32 = 57,
  anon_sym_u64 = 58,
  anon_sym_u16 = 59,
  anon_sym_u8 = 60,
  anon_sym_EQ = 61,
  anon_sym_return = 62,
  anon_sym_EQ_GT = 63,
  anon_sym_not = 64,
  anon_sym_AMP_AMP = 65,
  anon_sym_CARET = 66,
  anon_sym_set = 67,
  anon_sym_true = 68,
  anon_sym_false = 69,
  anon_sym_while = 70,
  anon_sym_foreach = 71,
  anon_sym_in = 72,
  anon_sym_if = 73,
  anon_sym_else = 74,
  anon_sym_and = 75,
  anon_sym_or = 76,
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
  aux_sym_parameters_repeat1 = 147,
  aux_sym_struct_definition_repeat1 = 148,
  aux_sym_block_repeat1 = 149,
  aux_sym_destruct_repeat1 = 150,
  aux_sym_call_expr_repeat1 = 151,
  aux_sym_type_parameters_repeat1 = 152,
  aux_sym_if_expr_repeat1 = 153,
  aux_sym__string_literal_repeat1 = 154,
  alias_sym_field_identifier = 155,
  alias_sym_type_identifier = 156,
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
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_COMMA] = {
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
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 43, .length = 2},
  [23] = {.index = 45, .length = 4},
  [24] = {.index = 49, .length = 4},
  [25] = {.index = 53, .length = 2},
  [26] = {.index = 55, .length = 2},
  [27] = {.index = 57, .length = 2},
  [28] = {.index = 59, .length = 3},
  [29] = {.index = 62, .length = 3},
  [30] = {.index = 65, .length = 4},
  [31] = {.index = 69, .length = 4},
  [32] = {.index = 73, .length = 3},
  [33] = {.index = 76, .length = 3},
  [34] = {.index = 79, .length = 4},
  [35] = {.index = 83, .length = 4},
  [36] = {.index = 87, .length = 5},
  [37] = {.index = 92, .length = 6},
  [38] = {.index = 98, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_operator, 1},
    {field_parameters, 2},
  [4] =
    {field_name, 1},
    {field_parameters, 2},
  [6] =
    {field_name, 2},
    {field_path, 0},
  [8] =
    {field_operator, 2},
    {field_parameters, 3},
  [10] =
    {field_name, 2},
    {field_parameters, 3},
  [12] =
    {field_generic_parameters, 2},
    {field_operator, 1},
    {field_parameters, 3},
  [15] =
    {field_operator, 1},
    {field_parameters, 2},
    {field_return_type, 3},
  [18] =
    {field_generic_parameters, 2},
    {field_name, 1},
    {field_parameters, 3},
  [21] =
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 3},
  [24] =
    {field_name, 0},
  [25] =
    {field_function, 0},
    {field_type_parameters, 1},
  [27] =
    {field_generic_parameters, 1},
    {field_type, 0},
  [29] =
    {field_generic_parameters, 3},
    {field_operator, 2},
    {field_parameters, 4},
  [32] =
    {field_operator, 2},
    {field_parameters, 3},
    {field_return_type, 4},
  [35] =
    {field_generic_parameters, 3},
    {field_name, 2},
    {field_parameters, 4},
  [38] =
    {field_name, 2},
    {field_parameters, 3},
    {field_return_type, 4},
  [41] =
    {field_name, 0},
    {field_type, 1},
  [43] =
    {field_name, 0},
    {field_rune, 1},
  [45] =
    {field_generic_parameters, 2},
    {field_operator, 1},
    {field_parameters, 3},
    {field_return_type, 4},
  [49] =
    {field_generic_parameters, 2},
    {field_name, 1},
    {field_parameters, 3},
    {field_return_type, 4},
  [53] =
    {field_block, 2},
    {field_condition, 1},
  [55] =
    {field_condition, 1},
    {field_then_block, 2},
  [57] =
    {field_field, 2},
    {field_value, 0},
  [59] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [62] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [65] =
    {field_generic_parameters, 3},
    {field_operator, 2},
    {field_parameters, 4},
    {field_return_type, 5},
  [69] =
    {field_generic_parameters, 3},
    {field_name, 2},
    {field_parameters, 4},
    {field_return_type, 5},
  [73] =
    {field_condition, 1},
    {field_else_block, 3},
    {field_then_block, 2},
  [76] =
    {field_condition, 1},
    {field_else_if, 3},
    {field_then_block, 2},
  [79] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
  [83] =
    {field_condition, 1},
    {field_else_block, 4},
    {field_else_if, 3},
    {field_then_block, 2},
  [87] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
  [92] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
  [98] =
    {field_else_if_block, 3},
    {field_else_if_condition, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [13] = {
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
  [4] = 4,
  [5] = 4,
  [6] = 3,
  [7] = 4,
  [8] = 3,
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
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 19,
  [39] = 22,
  [40] = 31,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 29,
  [49] = 49,
  [50] = 20,
  [51] = 51,
  [52] = 27,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 27,
  [58] = 20,
  [59] = 29,
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
  [71] = 71,
  [72] = 32,
  [73] = 70,
  [74] = 46,
  [75] = 75,
  [76] = 76,
  [77] = 77,
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
  [89] = 53,
  [90] = 56,
  [91] = 91,
  [92] = 92,
  [93] = 55,
  [94] = 94,
  [95] = 49,
  [96] = 47,
  [97] = 54,
  [98] = 98,
  [99] = 99,
  [100] = 44,
  [101] = 101,
  [102] = 45,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 70,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 112,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 117,
  [125] = 125,
  [126] = 126,
  [127] = 122,
  [128] = 126,
  [129] = 121,
  [130] = 130,
  [131] = 130,
  [132] = 118,
  [133] = 123,
  [134] = 121,
  [135] = 135,
  [136] = 130,
  [137] = 137,
  [138] = 120,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 142,
  [148] = 148,
  [149] = 149,
  [150] = 144,
  [151] = 139,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 158,
  [159] = 156,
  [160] = 139,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 167,
  [173] = 169,
  [174] = 174,
  [175] = 167,
  [176] = 176,
  [177] = 174,
  [178] = 169,
  [179] = 174,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 183,
  [184] = 180,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 188,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 190,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 189,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 230,
  [242] = 88,
  [243] = 243,
  [244] = 244,
  [245] = 99,
  [246] = 246,
  [247] = 94,
  [248] = 248,
  [249] = 249,
  [250] = 83,
  [251] = 251,
  [252] = 76,
  [253] = 253,
  [254] = 254,
  [255] = 253,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 256,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 270,
  [277] = 277,
  [278] = 272,
  [279] = 262,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 274,
  [285] = 285,
  [286] = 286,
  [287] = 286,
  [288] = 282,
  [289] = 289,
  [290] = 285,
  [291] = 282,
  [292] = 263,
  [293] = 266,
  [294] = 265,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 101,
  [301] = 301,
  [302] = 86,
  [303] = 85,
  [304] = 304,
  [305] = 305,
  [306] = 80,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 78,
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
  [322] = 322,
  [323] = 323,
  [324] = 297,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 321,
  [329] = 329,
  [330] = 330,
  [331] = 307,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 319,
  [338] = 297,
  [339] = 309,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 299,
  [345] = 345,
  [346] = 318,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 210,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 212,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 205,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 362,
  [376] = 376,
  [377] = 209,
  [378] = 378,
  [379] = 364,
  [380] = 369,
  [381] = 381,
  [382] = 378,
  [383] = 356,
  [384] = 384,
  [385] = 354,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 372,
  [390] = 369,
  [391] = 353,
  [392] = 388,
  [393] = 376,
  [394] = 394,
  [395] = 387,
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
  return (c < 43494
    ? (c < 4186
      ? (c < 2703
        ? (c < 1969
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'q' || (c < 170
                    ? (c >= 's' && c <= 'z')
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

static inline bool sym_identifier_character_set_9(int32_t c) {
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
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '=') ADVANCE(269);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(72);
      if (lookahead == 'L') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(31);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '^') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '^') ADVANCE(276);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(343);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '^') ADVANCE(276);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(343);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '=') ADVANCE(268);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == '[') ADVANCE(253);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(343);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(226);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(222);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == ']') ADVANCE(254);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(343);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(222);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(72);
      if (lookahead == 'L') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(222);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '^') ADVANCE(276);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(343);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(222);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == ']') ADVANCE(254);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(343);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '[') ADVANCE(253);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(343);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(296);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '8') ADVANCE(262);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == '8') ADVANCE(266);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(259);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(263);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(260);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(264);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(261);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(265);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(229);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(228);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(272);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(137);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(139);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(172);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(285);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(249);
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(84);
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
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(96);
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
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(29);
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
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(195);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 182:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 183:
      if (lookahead == 'w') ADVANCE(102);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 185:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 186:
      if (lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 187:
      if (lookahead == '{') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 188:
      if (lookahead == '}') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
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
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '=') ADVANCE(269);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(72);
      if (lookahead == 'L') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(31);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '^') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 197:
      if (eof) ADVANCE(198);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(210);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '=') ADVANCE(268);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
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
      if (lookahead == '=') ADVANCE(229);
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
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_exported);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(296);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(221);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_Ref);
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Kind);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Region);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Prot);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RefList);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Ownership);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Variability);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Mutability);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Location);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_ro);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_ro);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_imm);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_imm);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(275);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(228);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_set);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_int_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(333);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(343);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(321);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(343);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(308);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(343);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(319);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(293);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(280);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(282);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(284);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(291);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(339);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(289);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(320);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(286);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(322);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(334);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(313);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(335);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(250);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(324);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(271);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(309);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(336);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(340);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(326);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(295);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(310);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(312);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(314);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(274);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(278);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(248);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(341);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(311);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(331);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(338);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(343);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 197},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
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
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
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
  [109] = {.lex_state = 197},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 197},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 197},
  [118] = {.lex_state = 197},
  [119] = {.lex_state = 197},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 197},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 197},
  [124] = {.lex_state = 197},
  [125] = {.lex_state = 197},
  [126] = {.lex_state = 197},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 197},
  [129] = {.lex_state = 197},
  [130] = {.lex_state = 197},
  [131] = {.lex_state = 197},
  [132] = {.lex_state = 197},
  [133] = {.lex_state = 197},
  [134] = {.lex_state = 197},
  [135] = {.lex_state = 197},
  [136] = {.lex_state = 197},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 197},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 197},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 197},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 197},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 197},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 197},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 197},
  [194] = {.lex_state = 197},
  [195] = {.lex_state = 197},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 197},
  [198] = {.lex_state = 197},
  [199] = {.lex_state = 197},
  [200] = {.lex_state = 197},
  [201] = {.lex_state = 197},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 197},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 197},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 6},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 8},
  [295] = {.lex_state = 6},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 8},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 197},
  [351] = {.lex_state = 197},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 197},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 197},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 197},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 8},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 2},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 2},
  [383] = {.lex_state = 2},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 8},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_line_comment] = ACTIONS(3),
    [sym_int_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(374),
    [sym__top_level] = STATE(135),
    [sym_import] = STATE(135),
    [sym_attribute] = STATE(367),
    [sym_extern] = STATE(386),
    [sym_func_header] = STATE(280),
    [sym_func_proto] = STATE(135),
    [sym_function_definition] = STATE(135),
    [sym_struct_definition] = STATE(135),
    [aux_sym_source_file_repeat1] = STATE(135),
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
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_not,
    ACTIONS(44), 1,
      anon_sym_set,
    ACTIONS(50), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_foreach,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_int_lit,
    ACTIONS(62), 1,
      sym_float_lit,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(101), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_pattern,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(41), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(241), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(51), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(145), 11,
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
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(91), 1,
      anon_sym_while,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(101), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_pattern,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(241), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(51), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(130), 11,
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
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(91), 1,
      anon_sym_while,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_pattern,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(241), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(3), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(51), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(129), 11,
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
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(91), 1,
      anon_sym_while,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_pattern,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(241), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(8), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(51), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(121), 11,
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
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(91), 1,
      anon_sym_while,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_pattern,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(241), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(51), 5,
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
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(91), 1,
      anon_sym_while,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_pattern,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(241), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(51), 5,
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
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(91), 1,
      anon_sym_while,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_pattern,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(241), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(51), 5,
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
  [847] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(286), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(148), 16,
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
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(287), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(148), 16,
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
    ACTIONS(77), 1,
      anon_sym_AMP,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(214), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(375), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(92), 16,
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
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(214), 1,
      sym_type,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(375), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(92), 16,
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
    STATE(45), 1,
      sym_else_expr,
    STATE(16), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(141), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(143), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [1339] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_else,
    STATE(55), 1,
      sym_else_expr,
    STATE(13), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(147), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(149), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [1391] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(111), 16,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(161), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [1519] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(125), 16,
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
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(125), 16,
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
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(124), 16,
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
  [1744] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(172), 20,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [1787] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
  [1860] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
  [1933] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(108), 16,
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
  [2006] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
  [2079] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(125), 16,
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
  [2152] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(104), 16,
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
  [2225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(176), 20,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [2268] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(105), 16,
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
  [2341] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(180), 20,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [2384] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(161), 16,
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
  [2457] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
  [2530] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(184), 20,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [2573] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(92), 16,
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
  [2646] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(106), 16,
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
  [2719] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(143), 16,
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
  [2792] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(81), 16,
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
  [2865] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(82), 16,
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
  [2938] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
  [3011] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
  [3084] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
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
  [3157] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(133), 16,
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
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(123), 16,
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
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_set,
    ACTIONS(97), 1,
      sym_int_lit,
    ACTIONS(99), 1,
      sym_float_lit,
    ACTIONS(101), 1,
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
    STATE(101), 1,
      sym__string_literal,
    ACTIONS(85), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(140), 16,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(188), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(192), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [3460] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(196), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [3502] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(200), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [3544] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(180), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [3586] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(204), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [3628] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(172), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [3670] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(208), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(210), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(212), 11,
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
  [3716] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(176), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(216), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(220), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(224), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(228), 19,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
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
      sym_int_lit,
      sym_identifier,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(174), 25,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
  [3966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
  [4006] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
  [4046] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_GT,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_int_lit,
    ACTIONS(244), 1,
      sym_float_lit,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(294), 1,
      sym_type_parameter,
    STATE(300), 1,
      sym__string_literal,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(240), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(303), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(308), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4122] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_int_lit,
    ACTIONS(244), 1,
      sym_float_lit,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(265), 1,
      sym_type_parameter,
    STATE(300), 1,
      sym__string_literal,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(240), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(303), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(308), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4198] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_int_lit,
    ACTIONS(244), 1,
      sym_float_lit,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_GT,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(300), 1,
      sym__string_literal,
    STATE(345), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(240), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(303), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(308), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4271] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_int_lit,
    ACTIONS(244), 1,
      sym_float_lit,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_GT,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(300), 1,
      sym__string_literal,
    STATE(345), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(240), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(303), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(308), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4344] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_int_lit,
    ACTIONS(244), 1,
      sym_float_lit,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_GT,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(300), 1,
      sym__string_literal,
    STATE(345), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(240), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(303), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(308), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4417] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_int_lit,
    ACTIONS(244), 1,
      sym_float_lit,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_GT,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(300), 1,
      sym__string_literal,
    STATE(345), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(240), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(303), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(308), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4490] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_int_lit,
    ACTIONS(244), 1,
      sym_float_lit,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(300), 1,
      sym__string_literal,
    STATE(345), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(240), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(303), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(308), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4560] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      anon_sym_else,
    STATE(102), 1,
      sym_else_expr,
    STATE(69), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(143), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(141), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4600] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      anon_sym_else,
    STATE(93), 1,
      sym_else_expr,
    STATE(67), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(149), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(147), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4640] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_else,
    STATE(69), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(161), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(159), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4677] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_AMP,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_type_parameters,
    ACTIONS(281), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(210), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(206), 10,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
  [4723] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LT,
    STATE(77), 1,
      sym_type_parameters,
    ACTIONS(210), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(206), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4758] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(182), 17,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
  [4789] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_type_parameters,
    ACTIONS(267), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(210), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(206), 12,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(194), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4862] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(288), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4892] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(292), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4922] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(296), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4952] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(300), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [4982] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(304), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5012] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(308), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5042] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(312), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5090] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_EQ,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(335), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5138] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(342), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5168] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(348), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(346), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5198] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(350), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5228] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(354), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5258] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(358), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5288] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(362), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5318] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(214), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5348] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(226), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5378] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(366), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5408] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_EQ,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(370), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5456] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(222), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5486] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(377), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5516] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(202), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5546] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(198), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5576] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(218), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5606] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(381), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5654] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(388), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5684] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(186), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(392), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5744] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(190), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5774] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(396), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_or,
  [5818] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(396), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5860] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(398), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(396), 12,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5898] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(398), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(396), 14,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5934] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(400), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5964] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(398), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(396), 15,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5996] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_type_parameters,
    ACTIONS(210), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(206), 11,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
  [6034] = 3,
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
  [6061] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6108] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(274), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [6161] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(424), 11,
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
  [6188] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(284), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [6241] = 3,
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
  [6268] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      anon_sym_GT,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(176), 1,
      sym__type_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(196), 1,
      sym_scoped_type_identifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(341), 1,
      sym_generic_parameter,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(313), 2,
      sym_region_parameter,
      sym_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [6318] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6362] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6406] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 1,
      anon_sym_import,
    ACTIONS(443), 1,
      anon_sym_POUND,
    ACTIONS(446), 1,
      anon_sym_extern,
    ACTIONS(452), 1,
      anon_sym_export,
    ACTIONS(455), 1,
      anon_sym_func,
    ACTIONS(458), 1,
      anon_sym_struct,
    STATE(280), 1,
      sym_func_header,
    STATE(367), 1,
      sym_attribute,
    STATE(386), 1,
      sym_extern,
    ACTIONS(449), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(119), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [6452] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(281), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [6502] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6546] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(281), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [6596] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6640] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6684] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(469), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6726] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6770] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(281), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [6820] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6864] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6908] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6952] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6996] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7040] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7084] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7128] = 13,
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
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    STATE(280), 1,
      sym_func_header,
    STATE(367), 1,
      sym_attribute,
    STATE(386), 1,
      sym_extern,
    ACTIONS(13), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(119), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [7174] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7218] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(481), 1,
      anon_sym_GT,
    STATE(176), 1,
      sym__type_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(196), 1,
      sym_scoped_type_identifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(341), 1,
      sym_generic_parameter,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(313), 2,
      sym_region_parameter,
      sym_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [7268] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(281), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [7318] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(174), 1,
      sym_type_parameters,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(222), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [7365] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7406] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(314), 1,
      sym_type,
    ACTIONS(491), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [7451] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(371), 1,
      sym_destruct,
    STATE(387), 1,
      sym_type,
    STATE(391), 1,
      sym_pattern,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [7498] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7539] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(292), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [7586] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7627] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(320), 1,
      sym_type,
    ACTIONS(501), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [7672] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(353), 1,
      sym_pattern,
    STATE(371), 1,
      sym_destruct,
    STATE(387), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [7719] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7760] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(176), 1,
      sym__type_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(196), 1,
      sym_scoped_type_identifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(341), 1,
      sym_generic_parameter,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(313), 2,
      sym_region_parameter,
      sym_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [7807] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [7854] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LT,
    STATE(179), 1,
      sym_type_parameters,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(222), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(375), 2,
      sym_scoped_identifier,
      sym__path,
  [7901] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(181), 1,
      sym_region_specifier,
    STATE(205), 1,
      sym_destruct,
    STATE(208), 1,
      sym_generic_type,
    STATE(281), 1,
      sym_pattern,
    STATE(395), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(230), 2,
      sym_scoped_identifier,
      sym__path,
  [7948] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(322), 1,
      sym_type,
    ACTIONS(505), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [7993] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(329), 1,
      sym_type,
    ACTIONS(507), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8038] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(323), 1,
      sym_type,
    ACTIONS(509), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8083] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(178), 1,
      sym_type_parameters,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(215), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8130] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LT,
    STATE(169), 1,
      sym_type_parameters,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(215), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(375), 2,
      sym_scoped_identifier,
      sym__path,
  [8177] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(305), 1,
      sym_type,
    ACTIONS(511), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8222] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(173), 1,
      sym_type_parameters,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(215), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8269] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(177), 1,
      sym_type_parameters,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(222), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8316] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    ACTIONS(331), 1,
      anon_sym_and,
    ACTIONS(333), 1,
      anon_sym_or,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_EQ,
    ACTIONS(321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(327), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8357] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(312), 1,
      sym_type,
    ACTIONS(515), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8402] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(176), 1,
      sym__type_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(196), 1,
      sym_scoped_type_identifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(271), 1,
      sym_generic_parameter,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(313), 2,
      sym_region_parameter,
      sym_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8449] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(333), 1,
      sym_type,
    ACTIONS(517), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8494] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(519), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(351), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(375), 2,
      sym_scoped_identifier,
      sym__path,
  [8538] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    ACTIONS(521), 1,
      anon_sym_BANG,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(357), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8582] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(214), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(375), 2,
      sym_scoped_identifier,
      sym__path,
  [8623] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_Ref,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(286), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [8650] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(223), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(375), 2,
      sym_scoped_identifier,
      sym__path,
  [8691] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(363), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8732] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(330), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8773] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(214), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8814] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(223), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8855] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(221), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8896] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(180), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(214), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [8937] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    ACTIONS(533), 1,
      anon_sym_Ref,
    STATE(213), 1,
      sym_generic_parameters,
    STATE(334), 1,
      sym_rune,
    ACTIONS(529), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(531), 9,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [8968] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(221), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [9009] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(223), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [9050] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(181), 1,
      sym_region_specifier,
    STATE(208), 1,
      sym_generic_type,
    STATE(221), 1,
      sym_type,
    STATE(196), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(218), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(375), 2,
      sym_scoped_identifier,
      sym__path,
  [9091] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(204), 1,
      sym_generic_type,
    STATE(192), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [9126] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(416), 1,
      anon_sym_AMP,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(204), 1,
      sym_generic_type,
    STATE(192), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(375), 2,
      sym_scoped_identifier,
      sym__path,
  [9161] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      sym_identifier,
    ACTIONS(539), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(537), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [9184] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      sym_identifier,
    ACTIONS(545), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(543), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [9207] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(204), 1,
      sym_generic_type,
    STATE(192), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_reference_type,
      sym_array_type,
    STATE(219), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(362), 2,
      sym_scoped_identifier,
      sym__path,
  [9242] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(549), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9259] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [9276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(551), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9293] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(286), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [9314] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(286), 5,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9335] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACK,
    ACTIONS(558), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(286), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [9356] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9373] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    STATE(213), 1,
      sym_generic_parameters,
    ACTIONS(565), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9392] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      anon_sym_export,
    ACTIONS(567), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [9409] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      anon_sym_export,
    ACTIONS(571), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [9426] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_export,
    ACTIONS(575), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [9443] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    STATE(213), 1,
      sym_generic_parameters,
    ACTIONS(529), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9462] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_export,
    ACTIONS(579), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [9479] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 1,
      anon_sym_export,
    ACTIONS(583), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [9496] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(589), 1,
      anon_sym_export,
    ACTIONS(587), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [9513] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      anon_sym_export,
    ACTIONS(591), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [9530] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(597), 1,
      anon_sym_export,
    ACTIONS(595), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [9547] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      anon_sym_DOT,
    ACTIONS(286), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9564] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9578] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(565), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9594] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [9608] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(605), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9622] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(553), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [9638] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(529), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9654] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [9668] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [9682] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(558), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [9698] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [9712] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(613), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9726] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9739] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9752] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9765] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_DOT,
    ACTIONS(621), 1,
      anon_sym_STAR,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(365), 1,
      sym_import_wildcard,
    STATE(373), 1,
      sym_import_path,
    STATE(317), 2,
      sym_scoped_identifier,
      sym__path,
  [9788] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(529), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9801] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(625), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9814] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_ro,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(629), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(627), 3,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [9833] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(635), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9846] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9859] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(639), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9872] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DOT,
    ACTIONS(286), 4,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
  [9888] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9900] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    STATE(246), 1,
      sym_generic_parameters,
    STATE(381), 1,
      sym_mutability,
    ACTIONS(645), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9920] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9932] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(649), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9944] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
    STATE(243), 1,
      sym_generic_parameters,
    STATE(370), 1,
      sym_mutability,
    ACTIONS(645), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9964] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(653), 1,
      anon_sym_DOT,
    ACTIONS(603), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [9977] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 1,
      sym_identifier,
    STATE(166), 1,
      sym__field_identifier,
    STATE(238), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9994] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_BANG,
    STATE(355), 1,
      sym_attribute_name,
    ACTIONS(659), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [10009] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym__field_identifier,
    STATE(237), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [10026] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym__field_identifier,
    STATE(231), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [10043] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym__field_identifier,
    STATE(239), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [10060] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym__field_identifier,
    STATE(238), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [10077] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym__field_identifier,
    STATE(238), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [10094] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(166), 1,
      sym__field_identifier,
    STATE(238), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [10111] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym__field_identifier,
    STATE(238), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [10128] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 1,
      sym_identifier,
    STATE(166), 1,
      sym__field_identifier,
    STATE(236), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [10145] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(603), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_identifier,
  [10158] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [10169] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
    STATE(358), 1,
      sym_mutability,
    ACTIONS(645), 2,
      anon_sym_mut,
      anon_sym_imm,
  [10183] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_parameters,
    STATE(347), 1,
      sym_generic_parameters,
  [10199] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [10209] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
    STATE(370), 1,
      sym_mutability,
    ACTIONS(645), 2,
      anon_sym_mut,
      anon_sym_imm,
  [10223] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [10233] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [10243] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_parameters,
    STATE(342), 1,
      sym_generic_parameters,
  [10259] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [10269] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_destruct_repeat1,
    ACTIONS(683), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [10283] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [10293] = 4,
    ACTIONS(688), 1,
      sym_line_comment,
    ACTIONS(692), 1,
      anon_sym_DQUOTE,
    STATE(259), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(690), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [10307] = 4,
    ACTIONS(688), 1,
      sym_line_comment,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(694), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [10321] = 4,
    ACTIONS(688), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(699), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [10335] = 4,
    ACTIONS(688), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(703), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [10349] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_parameters,
    STATE(315), 1,
      sym_generic_parameters,
  [10365] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_LT,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_parameters,
    STATE(316), 1,
      sym_generic_parameters,
  [10381] = 4,
    ACTIONS(688), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(703), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [10395] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(359), 1,
      sym_attribute_name,
    ACTIONS(659), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [10407] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_call_expr_repeat1,
  [10420] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    ACTIONS(711), 1,
      anon_sym_if,
    STATE(100), 1,
      sym_block,
  [10433] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      aux_sym_destruct_repeat1,
  [10446] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_parameters_repeat1,
  [10459] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 1,
      anon_sym_GT,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_type_parameters_repeat1,
  [10472] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_destruct_repeat1,
  [10485] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym__string_literal,
    STATE(360), 1,
      sym_string_literal,
  [10498] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      anon_sym_GT,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_type_parameters_repeat1,
  [10511] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_parameters_repeat1,
  [10524] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_GT,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_type_parameters_repeat1,
  [10537] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_GT,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_generic_parameters_repeat1,
  [10550] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_destruct_repeat1,
  [10563] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_call_expr_repeat1,
  [10576] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_destruct_repeat1,
  [10589] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      anon_sym_GT,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_generic_parameters_repeat1,
  [10602] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_type_parameters_repeat1,
  [10615] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_parameters_repeat1,
  [10628] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_destruct_repeat1,
  [10641] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(756), 1,
      anon_sym_if,
    STATE(44), 1,
      sym_block,
  [10654] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      sym_block,
  [10667] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10676] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(760), 1,
      sym_int_lit,
    ACTIONS(762), 1,
      sym_identifier,
    STATE(390), 1,
      sym__type_identifier,
  [10689] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(764), 1,
      anon_sym_GT,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_generic_parameters_repeat1,
  [10702] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      aux_sym_destruct_repeat1,
  [10715] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_destruct_repeat1,
  [10728] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_destruct_repeat1,
  [10741] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_destruct_repeat1,
  [10754] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(762), 1,
      sym_identifier,
    ACTIONS(781), 1,
      sym_int_lit,
    STATE(380), 1,
      sym__type_identifier,
  [10767] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [10776] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_destruct_repeat1,
  [10789] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(762), 1,
      sym_identifier,
    ACTIONS(787), 1,
      sym_int_lit,
    STATE(369), 1,
      sym__type_identifier,
  [10802] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
    STATE(272), 1,
      aux_sym_destruct_repeat1,
  [10815] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym_destruct_repeat1,
  [10828] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_GT,
    ACTIONS(793), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_type_parameters_repeat1,
  [10841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    ACTIONS(797), 1,
      sym_identifier,
    STATE(264), 1,
      sym_parameter,
  [10854] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(799), 1,
      sym_identifier,
    STATE(107), 1,
      sym__field_identifier,
  [10864] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
  [10874] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(762), 1,
      sym_identifier,
    STATE(206), 1,
      sym__type_identifier,
  [10884] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 1,
      sym_identifier,
    STATE(206), 1,
      sym__type_identifier,
  [10894] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10902] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [10910] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10918] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10926] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(807), 1,
      anon_sym_func,
  [10936] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(809), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10944] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10952] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 1,
      sym_identifier,
    STATE(203), 1,
      sym__type_identifier,
  [10962] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10970] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [10980] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(762), 1,
      sym_identifier,
    STATE(226), 1,
      sym__type_identifier,
  [10990] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10998] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11006] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [11014] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11022] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_parameters,
  [11032] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_parameters,
  [11042] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_SEMI,
    ACTIONS(823), 1,
      anon_sym_DOT,
  [11052] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
  [11062] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
  [11072] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(825), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11080] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
  [11090] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11098] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(829), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11106] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      anon_sym_POUND,
    ACTIONS(833), 1,
      anon_sym_RBRACK,
  [11116] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_STAR,
    ACTIONS(837), 1,
      sym_identifier,
  [11126] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [11134] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(558), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [11142] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [11152] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11160] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11168] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(845), 1,
      sym_identifier,
    STATE(203), 1,
      sym__type_identifier,
  [11178] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(762), 1,
      sym_identifier,
    STATE(229), 1,
      sym__type_identifier,
  [11188] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11196] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [11204] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [11212] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11220] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
  [11230] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
  [11240] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
  [11250] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(857), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [11258] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(764), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [11266] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_parameters,
  [11276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [11284] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 1,
      sym_identifier,
    STATE(206), 1,
      sym__type_identifier,
  [11294] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [11302] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_block,
  [11312] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym_parameters,
  [11322] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 1,
      sym_identifier,
    STATE(336), 1,
      sym_parameter,
  [11332] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(861), 1,
      sym_identifier,
  [11339] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      anon_sym_struct,
  [11346] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(865), 1,
      anon_sym_EQ,
  [11353] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 1,
      anon_sym_SEMI,
  [11360] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 1,
      anon_sym_in,
  [11367] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      anon_sym_if,
  [11374] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 1,
      anon_sym_struct,
  [11381] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_EQ_GT,
  [11388] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_SEMI,
  [11395] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(877), 1,
      anon_sym_LBRACE,
  [11402] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      anon_sym_struct,
  [11409] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [11416] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 1,
      anon_sym_in,
  [11423] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      anon_sym_DOT,
  [11430] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(885), 1,
      anon_sym_SEMI,
  [11437] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 1,
      anon_sym_EQ_GT,
  [11444] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [11451] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      anon_sym_in,
  [11458] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(889), 1,
      anon_sym_struct,
  [11465] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(891), 1,
      anon_sym_SEMI,
  [11472] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
  [11479] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
  [11486] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_in,
  [11493] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 1,
      anon_sym_GT,
  [11500] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(895), 1,
      anon_sym_SEMI,
  [11507] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 1,
      ts_builtin_sym_end,
  [11514] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(653), 1,
      anon_sym_DOT,
  [11521] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(899), 1,
      anon_sym_EQ_GT,
  [11528] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 1,
      anon_sym_in,
  [11535] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 1,
      anon_sym_EQ_GT,
  [11542] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(903), 1,
      anon_sym_EQ_GT,
  [11549] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACK,
  [11556] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
  [11563] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(907), 1,
      anon_sym_EQ_GT,
  [11570] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(909), 1,
      anon_sym_EQ_GT,
  [11577] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(911), 1,
      anon_sym_func,
  [11584] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 1,
      anon_sym_if,
  [11591] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      anon_sym_func,
  [11598] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(915), 1,
      anon_sym_LBRACK,
  [11605] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [11612] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_GT,
  [11619] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
  [11626] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_in,
  [11633] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
  [11640] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(921), 1,
      anon_sym_EQ_GT,
  [11647] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
  [11654] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
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
  [SMALL_STATE(21)] = 1787,
  [SMALL_STATE(22)] = 1860,
  [SMALL_STATE(23)] = 1933,
  [SMALL_STATE(24)] = 2006,
  [SMALL_STATE(25)] = 2079,
  [SMALL_STATE(26)] = 2152,
  [SMALL_STATE(27)] = 2225,
  [SMALL_STATE(28)] = 2268,
  [SMALL_STATE(29)] = 2341,
  [SMALL_STATE(30)] = 2384,
  [SMALL_STATE(31)] = 2457,
  [SMALL_STATE(32)] = 2530,
  [SMALL_STATE(33)] = 2573,
  [SMALL_STATE(34)] = 2646,
  [SMALL_STATE(35)] = 2719,
  [SMALL_STATE(36)] = 2792,
  [SMALL_STATE(37)] = 2865,
  [SMALL_STATE(38)] = 2938,
  [SMALL_STATE(39)] = 3011,
  [SMALL_STATE(40)] = 3084,
  [SMALL_STATE(41)] = 3157,
  [SMALL_STATE(42)] = 3230,
  [SMALL_STATE(43)] = 3303,
  [SMALL_STATE(44)] = 3376,
  [SMALL_STATE(45)] = 3418,
  [SMALL_STATE(46)] = 3460,
  [SMALL_STATE(47)] = 3502,
  [SMALL_STATE(48)] = 3544,
  [SMALL_STATE(49)] = 3586,
  [SMALL_STATE(50)] = 3628,
  [SMALL_STATE(51)] = 3670,
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
  [SMALL_STATE(72)] = 4758,
  [SMALL_STATE(73)] = 4789,
  [SMALL_STATE(74)] = 4832,
  [SMALL_STATE(75)] = 4862,
  [SMALL_STATE(76)] = 4892,
  [SMALL_STATE(77)] = 4922,
  [SMALL_STATE(78)] = 4952,
  [SMALL_STATE(79)] = 4982,
  [SMALL_STATE(80)] = 5012,
  [SMALL_STATE(81)] = 5042,
  [SMALL_STATE(82)] = 5090,
  [SMALL_STATE(83)] = 5138,
  [SMALL_STATE(84)] = 5168,
  [SMALL_STATE(85)] = 5198,
  [SMALL_STATE(86)] = 5228,
  [SMALL_STATE(87)] = 5258,
  [SMALL_STATE(88)] = 5288,
  [SMALL_STATE(89)] = 5318,
  [SMALL_STATE(90)] = 5348,
  [SMALL_STATE(91)] = 5378,
  [SMALL_STATE(92)] = 5408,
  [SMALL_STATE(93)] = 5456,
  [SMALL_STATE(94)] = 5486,
  [SMALL_STATE(95)] = 5516,
  [SMALL_STATE(96)] = 5546,
  [SMALL_STATE(97)] = 5576,
  [SMALL_STATE(98)] = 5606,
  [SMALL_STATE(99)] = 5654,
  [SMALL_STATE(100)] = 5684,
  [SMALL_STATE(101)] = 5714,
  [SMALL_STATE(102)] = 5744,
  [SMALL_STATE(103)] = 5774,
  [SMALL_STATE(104)] = 5818,
  [SMALL_STATE(105)] = 5860,
  [SMALL_STATE(106)] = 5898,
  [SMALL_STATE(107)] = 5934,
  [SMALL_STATE(108)] = 5964,
  [SMALL_STATE(109)] = 5996,
  [SMALL_STATE(110)] = 6034,
  [SMALL_STATE(111)] = 6061,
  [SMALL_STATE(112)] = 6108,
  [SMALL_STATE(113)] = 6161,
  [SMALL_STATE(114)] = 6188,
  [SMALL_STATE(115)] = 6241,
  [SMALL_STATE(116)] = 6268,
  [SMALL_STATE(117)] = 6318,
  [SMALL_STATE(118)] = 6362,
  [SMALL_STATE(119)] = 6406,
  [SMALL_STATE(120)] = 6452,
  [SMALL_STATE(121)] = 6502,
  [SMALL_STATE(122)] = 6546,
  [SMALL_STATE(123)] = 6596,
  [SMALL_STATE(124)] = 6640,
  [SMALL_STATE(125)] = 6684,
  [SMALL_STATE(126)] = 6726,
  [SMALL_STATE(127)] = 6770,
  [SMALL_STATE(128)] = 6820,
  [SMALL_STATE(129)] = 6864,
  [SMALL_STATE(130)] = 6908,
  [SMALL_STATE(131)] = 6952,
  [SMALL_STATE(132)] = 6996,
  [SMALL_STATE(133)] = 7040,
  [SMALL_STATE(134)] = 7084,
  [SMALL_STATE(135)] = 7128,
  [SMALL_STATE(136)] = 7174,
  [SMALL_STATE(137)] = 7218,
  [SMALL_STATE(138)] = 7268,
  [SMALL_STATE(139)] = 7318,
  [SMALL_STATE(140)] = 7365,
  [SMALL_STATE(141)] = 7406,
  [SMALL_STATE(142)] = 7451,
  [SMALL_STATE(143)] = 7498,
  [SMALL_STATE(144)] = 7539,
  [SMALL_STATE(145)] = 7586,
  [SMALL_STATE(146)] = 7627,
  [SMALL_STATE(147)] = 7672,
  [SMALL_STATE(148)] = 7719,
  [SMALL_STATE(149)] = 7760,
  [SMALL_STATE(150)] = 7807,
  [SMALL_STATE(151)] = 7854,
  [SMALL_STATE(152)] = 7901,
  [SMALL_STATE(153)] = 7948,
  [SMALL_STATE(154)] = 7993,
  [SMALL_STATE(155)] = 8038,
  [SMALL_STATE(156)] = 8083,
  [SMALL_STATE(157)] = 8130,
  [SMALL_STATE(158)] = 8177,
  [SMALL_STATE(159)] = 8222,
  [SMALL_STATE(160)] = 8269,
  [SMALL_STATE(161)] = 8316,
  [SMALL_STATE(162)] = 8357,
  [SMALL_STATE(163)] = 8402,
  [SMALL_STATE(164)] = 8449,
  [SMALL_STATE(165)] = 8494,
  [SMALL_STATE(166)] = 8538,
  [SMALL_STATE(167)] = 8582,
  [SMALL_STATE(168)] = 8623,
  [SMALL_STATE(169)] = 8650,
  [SMALL_STATE(170)] = 8691,
  [SMALL_STATE(171)] = 8732,
  [SMALL_STATE(172)] = 8773,
  [SMALL_STATE(173)] = 8814,
  [SMALL_STATE(174)] = 8855,
  [SMALL_STATE(175)] = 8896,
  [SMALL_STATE(176)] = 8937,
  [SMALL_STATE(177)] = 8968,
  [SMALL_STATE(178)] = 9009,
  [SMALL_STATE(179)] = 9050,
  [SMALL_STATE(180)] = 9091,
  [SMALL_STATE(181)] = 9126,
  [SMALL_STATE(182)] = 9161,
  [SMALL_STATE(183)] = 9184,
  [SMALL_STATE(184)] = 9207,
  [SMALL_STATE(185)] = 9242,
  [SMALL_STATE(186)] = 9259,
  [SMALL_STATE(187)] = 9276,
  [SMALL_STATE(188)] = 9293,
  [SMALL_STATE(189)] = 9314,
  [SMALL_STATE(190)] = 9335,
  [SMALL_STATE(191)] = 9356,
  [SMALL_STATE(192)] = 9373,
  [SMALL_STATE(193)] = 9392,
  [SMALL_STATE(194)] = 9409,
  [SMALL_STATE(195)] = 9426,
  [SMALL_STATE(196)] = 9443,
  [SMALL_STATE(197)] = 9462,
  [SMALL_STATE(198)] = 9479,
  [SMALL_STATE(199)] = 9496,
  [SMALL_STATE(200)] = 9513,
  [SMALL_STATE(201)] = 9530,
  [SMALL_STATE(202)] = 9547,
  [SMALL_STATE(203)] = 9564,
  [SMALL_STATE(204)] = 9578,
  [SMALL_STATE(205)] = 9594,
  [SMALL_STATE(206)] = 9608,
  [SMALL_STATE(207)] = 9622,
  [SMALL_STATE(208)] = 9638,
  [SMALL_STATE(209)] = 9654,
  [SMALL_STATE(210)] = 9668,
  [SMALL_STATE(211)] = 9682,
  [SMALL_STATE(212)] = 9698,
  [SMALL_STATE(213)] = 9712,
  [SMALL_STATE(214)] = 9726,
  [SMALL_STATE(215)] = 9739,
  [SMALL_STATE(216)] = 9752,
  [SMALL_STATE(217)] = 9765,
  [SMALL_STATE(218)] = 9788,
  [SMALL_STATE(219)] = 9801,
  [SMALL_STATE(220)] = 9814,
  [SMALL_STATE(221)] = 9833,
  [SMALL_STATE(222)] = 9846,
  [SMALL_STATE(223)] = 9859,
  [SMALL_STATE(224)] = 9872,
  [SMALL_STATE(225)] = 9888,
  [SMALL_STATE(226)] = 9900,
  [SMALL_STATE(227)] = 9920,
  [SMALL_STATE(228)] = 9932,
  [SMALL_STATE(229)] = 9944,
  [SMALL_STATE(230)] = 9964,
  [SMALL_STATE(231)] = 9977,
  [SMALL_STATE(232)] = 9994,
  [SMALL_STATE(233)] = 10009,
  [SMALL_STATE(234)] = 10026,
  [SMALL_STATE(235)] = 10043,
  [SMALL_STATE(236)] = 10060,
  [SMALL_STATE(237)] = 10077,
  [SMALL_STATE(238)] = 10094,
  [SMALL_STATE(239)] = 10111,
  [SMALL_STATE(240)] = 10128,
  [SMALL_STATE(241)] = 10145,
  [SMALL_STATE(242)] = 10158,
  [SMALL_STATE(243)] = 10169,
  [SMALL_STATE(244)] = 10183,
  [SMALL_STATE(245)] = 10199,
  [SMALL_STATE(246)] = 10209,
  [SMALL_STATE(247)] = 10223,
  [SMALL_STATE(248)] = 10233,
  [SMALL_STATE(249)] = 10243,
  [SMALL_STATE(250)] = 10259,
  [SMALL_STATE(251)] = 10269,
  [SMALL_STATE(252)] = 10283,
  [SMALL_STATE(253)] = 10293,
  [SMALL_STATE(254)] = 10307,
  [SMALL_STATE(255)] = 10321,
  [SMALL_STATE(256)] = 10335,
  [SMALL_STATE(257)] = 10349,
  [SMALL_STATE(258)] = 10365,
  [SMALL_STATE(259)] = 10381,
  [SMALL_STATE(260)] = 10395,
  [SMALL_STATE(261)] = 10407,
  [SMALL_STATE(262)] = 10420,
  [SMALL_STATE(263)] = 10433,
  [SMALL_STATE(264)] = 10446,
  [SMALL_STATE(265)] = 10459,
  [SMALL_STATE(266)] = 10472,
  [SMALL_STATE(267)] = 10485,
  [SMALL_STATE(268)] = 10498,
  [SMALL_STATE(269)] = 10511,
  [SMALL_STATE(270)] = 10524,
  [SMALL_STATE(271)] = 10537,
  [SMALL_STATE(272)] = 10550,
  [SMALL_STATE(273)] = 10563,
  [SMALL_STATE(274)] = 10576,
  [SMALL_STATE(275)] = 10589,
  [SMALL_STATE(276)] = 10602,
  [SMALL_STATE(277)] = 10615,
  [SMALL_STATE(278)] = 10628,
  [SMALL_STATE(279)] = 10641,
  [SMALL_STATE(280)] = 10654,
  [SMALL_STATE(281)] = 10667,
  [SMALL_STATE(282)] = 10676,
  [SMALL_STATE(283)] = 10689,
  [SMALL_STATE(284)] = 10702,
  [SMALL_STATE(285)] = 10715,
  [SMALL_STATE(286)] = 10728,
  [SMALL_STATE(287)] = 10741,
  [SMALL_STATE(288)] = 10754,
  [SMALL_STATE(289)] = 10767,
  [SMALL_STATE(290)] = 10776,
  [SMALL_STATE(291)] = 10789,
  [SMALL_STATE(292)] = 10802,
  [SMALL_STATE(293)] = 10815,
  [SMALL_STATE(294)] = 10828,
  [SMALL_STATE(295)] = 10841,
  [SMALL_STATE(296)] = 10854,
  [SMALL_STATE(297)] = 10864,
  [SMALL_STATE(298)] = 10874,
  [SMALL_STATE(299)] = 10884,
  [SMALL_STATE(300)] = 10894,
  [SMALL_STATE(301)] = 10902,
  [SMALL_STATE(302)] = 10910,
  [SMALL_STATE(303)] = 10918,
  [SMALL_STATE(304)] = 10926,
  [SMALL_STATE(305)] = 10936,
  [SMALL_STATE(306)] = 10944,
  [SMALL_STATE(307)] = 10952,
  [SMALL_STATE(308)] = 10962,
  [SMALL_STATE(309)] = 10970,
  [SMALL_STATE(310)] = 10980,
  [SMALL_STATE(311)] = 10990,
  [SMALL_STATE(312)] = 10998,
  [SMALL_STATE(313)] = 11006,
  [SMALL_STATE(314)] = 11014,
  [SMALL_STATE(315)] = 11022,
  [SMALL_STATE(316)] = 11032,
  [SMALL_STATE(317)] = 11042,
  [SMALL_STATE(318)] = 11052,
  [SMALL_STATE(319)] = 11062,
  [SMALL_STATE(320)] = 11072,
  [SMALL_STATE(321)] = 11080,
  [SMALL_STATE(322)] = 11090,
  [SMALL_STATE(323)] = 11098,
  [SMALL_STATE(324)] = 11106,
  [SMALL_STATE(325)] = 11116,
  [SMALL_STATE(326)] = 11126,
  [SMALL_STATE(327)] = 11134,
  [SMALL_STATE(328)] = 11142,
  [SMALL_STATE(329)] = 11152,
  [SMALL_STATE(330)] = 11160,
  [SMALL_STATE(331)] = 11168,
  [SMALL_STATE(332)] = 11178,
  [SMALL_STATE(333)] = 11188,
  [SMALL_STATE(334)] = 11196,
  [SMALL_STATE(335)] = 11204,
  [SMALL_STATE(336)] = 11212,
  [SMALL_STATE(337)] = 11220,
  [SMALL_STATE(338)] = 11230,
  [SMALL_STATE(339)] = 11240,
  [SMALL_STATE(340)] = 11250,
  [SMALL_STATE(341)] = 11258,
  [SMALL_STATE(342)] = 11266,
  [SMALL_STATE(343)] = 11276,
  [SMALL_STATE(344)] = 11284,
  [SMALL_STATE(345)] = 11294,
  [SMALL_STATE(346)] = 11302,
  [SMALL_STATE(347)] = 11312,
  [SMALL_STATE(348)] = 11322,
  [SMALL_STATE(349)] = 11332,
  [SMALL_STATE(350)] = 11339,
  [SMALL_STATE(351)] = 11346,
  [SMALL_STATE(352)] = 11353,
  [SMALL_STATE(353)] = 11360,
  [SMALL_STATE(354)] = 11367,
  [SMALL_STATE(355)] = 11374,
  [SMALL_STATE(356)] = 11381,
  [SMALL_STATE(357)] = 11388,
  [SMALL_STATE(358)] = 11395,
  [SMALL_STATE(359)] = 11402,
  [SMALL_STATE(360)] = 11409,
  [SMALL_STATE(361)] = 11416,
  [SMALL_STATE(362)] = 11423,
  [SMALL_STATE(363)] = 11430,
  [SMALL_STATE(364)] = 11437,
  [SMALL_STATE(365)] = 11444,
  [SMALL_STATE(366)] = 11451,
  [SMALL_STATE(367)] = 11458,
  [SMALL_STATE(368)] = 11465,
  [SMALL_STATE(369)] = 11472,
  [SMALL_STATE(370)] = 11479,
  [SMALL_STATE(371)] = 11486,
  [SMALL_STATE(372)] = 11493,
  [SMALL_STATE(373)] = 11500,
  [SMALL_STATE(374)] = 11507,
  [SMALL_STATE(375)] = 11514,
  [SMALL_STATE(376)] = 11521,
  [SMALL_STATE(377)] = 11528,
  [SMALL_STATE(378)] = 11535,
  [SMALL_STATE(379)] = 11542,
  [SMALL_STATE(380)] = 11549,
  [SMALL_STATE(381)] = 11556,
  [SMALL_STATE(382)] = 11563,
  [SMALL_STATE(383)] = 11570,
  [SMALL_STATE(384)] = 11577,
  [SMALL_STATE(385)] = 11584,
  [SMALL_STATE(386)] = 11591,
  [SMALL_STATE(387)] = 11598,
  [SMALL_STATE(388)] = 11605,
  [SMALL_STATE(389)] = 11612,
  [SMALL_STATE(390)] = 11619,
  [SMALL_STATE(391)] = 11626,
  [SMALL_STATE(392)] = 11633,
  [SMALL_STATE(393)] = 11640,
  [SMALL_STATE(394)] = 11647,
  [SMALL_STATE(395)] = 11654,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(307),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(114),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(86),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(85),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(85),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(253),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(354),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(385),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [270] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(60),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym__path, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(60),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 29),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 29),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_not, 2), SHIFT(15),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_return_expr, 2), SHIFT(15),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_augment, 2), SHIFT(15),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment_expr, 4), SHIFT(15),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 28),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 28),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 27),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 27),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(304),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 17),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 11),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 19),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 5),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 9),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 8),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proto, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 6),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 5),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 16),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 2, .production_id = 14),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(242),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pattern, 1), SHIFT(299),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(152),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(254),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(66),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(25),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(348),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(149),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 12),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 10),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 18),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 20),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 30),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 31),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 24),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 21),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 23),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 22),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 3, .production_id = 14),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [897] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
