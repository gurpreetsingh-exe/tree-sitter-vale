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
#define STATE_COUNT 466
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 2
#define TOKEN_COUNT 88
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
  anon_sym_i32 = 49,
  anon_sym_i64 = 50,
  anon_sym_i16 = 51,
  anon_sym_i8 = 52,
  anon_sym_u32 = 53,
  anon_sym_u64 = 54,
  anon_sym_u16 = 55,
  anon_sym_u8 = 56,
  anon_sym_bool = 57,
  anon_sym_float = 58,
  anon_sym_str = 59,
  anon_sym_void = 60,
  anon_sym_set = 61,
  anon_sym_EQ = 62,
  anon_sym_return = 63,
  anon_sym_EQ_GT = 64,
  anon_sym_not = 65,
  anon_sym_AMP_AMP = 66,
  anon_sym_CARET = 67,
  anon_sym_true = 68,
  anon_sym_false = 69,
  anon_sym_while = 70,
  anon_sym_foreach = 71,
  anon_sym_in = 72,
  anon_sym_if = 73,
  anon_sym_else = 74,
  anon_sym_and = 75,
  anon_sym_or = 76,
  anon_sym_lshift = 77,
  anon_sym_rshift = 78,
  anon_sym_xor = 79,
  anon_sym_mod = 80,
  sym_line_comment = 81,
  aux_sym_int_lit_token1 = 82,
  sym_float_lit = 83,
  sym_escape_sequence = 84,
  anon_sym_DQUOTE = 85,
  aux_sym__string_literal_token1 = 86,
  sym_identifier = 87,
  sym_source_file = 88,
  sym__top_level = 89,
  sym_import = 90,
  sym_import_path = 91,
  sym_attribute_name = 92,
  sym_attribute = 93,
  sym_scoped_identifier = 94,
  sym_scoped_type_identifier = 95,
  sym_import_wildcard = 96,
  sym_extern = 97,
  sym_func_header = 98,
  sym_func_proto = 99,
  sym_function_definition = 100,
  sym_generic_parameters = 101,
  sym_rune = 102,
  sym_generic_parameter = 103,
  sym_region_parameter = 104,
  sym_region_specifier = 105,
  sym_parameters = 106,
  sym_parameter = 107,
  sym_struct_definition = 108,
  sym_struct_field = 109,
  sym_mutability = 110,
  sym_type = 111,
  sym_reference_type = 112,
  sym_array_access = 113,
  sym_array_type = 114,
  sym_dynamic_array_type = 115,
  sym_static_array_type = 116,
  sym_generic_type = 117,
  sym_int_type = 118,
  sym_block = 119,
  sym_expr_statement = 120,
  sym__statement = 121,
  sym_pattern = 122,
  sym_destruct = 123,
  sym_variable_definition = 124,
  sym_return_expr = 125,
  sym__expr = 126,
  sym_parenthesized_expr = 127,
  sym__expr_ending_with_block = 128,
  sym_lambda = 129,
  sym_not = 130,
  sym_augment = 131,
  sym_field_expr = 132,
  sym_assignment_expr = 133,
  sym_literal = 134,
  sym_bool_lit = 135,
  sym_call_expr = 136,
  sym_generic_function = 137,
  sym_type_parameters = 138,
  sym_type_parameter = 139,
  sym_while_expr = 140,
  sym_foreach = 141,
  sym_if_expr = 142,
  sym_else_if_expr = 143,
  sym_else_expr = 144,
  sym_binary_expr = 145,
  sym_int_lit = 146,
  sym_string_literal = 147,
  sym__string_literal = 148,
  sym__type_identifier = 149,
  sym__path = 150,
  sym__field_identifier = 151,
  aux_sym_source_file_repeat1 = 152,
  aux_sym_generic_parameters_repeat1 = 153,
  aux_sym_parameters_repeat1 = 154,
  aux_sym_struct_definition_repeat1 = 155,
  aux_sym_array_access_repeat1 = 156,
  aux_sym_array_type_repeat1 = 157,
  aux_sym_array_type_repeat2 = 158,
  aux_sym_block_repeat1 = 159,
  aux_sym_destruct_repeat1 = 160,
  aux_sym_lambda_repeat1 = 161,
  aux_sym_call_expr_repeat1 = 162,
  aux_sym_type_parameters_repeat1 = 163,
  aux_sym_if_expr_repeat1 = 164,
  aux_sym__string_literal_repeat1 = 165,
  alias_sym_field_identifier = 166,
  alias_sym_type_identifier = 167,
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
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_i16] = "i16",
  [anon_sym_i8] = "i8",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u16] = "u16",
  [anon_sym_u8] = "u8",
  [anon_sym_bool] = "bool",
  [anon_sym_float] = "float",
  [anon_sym_str] = "str",
  [anon_sym_void] = "void",
  [anon_sym_set] = "set",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_not] = "not",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_CARET] = "^",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_while] = "while",
  [anon_sym_foreach] = "foreach",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_lshift] = "lshift",
  [anon_sym_rshift] = "rshift",
  [anon_sym_xor] = "xor",
  [anon_sym_mod] = "mod",
  [sym_line_comment] = "line_comment",
  [aux_sym_int_lit_token1] = "int_lit_token1",
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
  [sym_array_access] = "array_access",
  [sym_array_type] = "array_type",
  [sym_dynamic_array_type] = "dynamic_array_type",
  [sym_static_array_type] = "static_array_type",
  [sym_generic_type] = "generic_type",
  [sym_int_type] = "int_type",
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
  [sym_int_lit] = "int_lit",
  [sym_string_literal] = "string_literal",
  [sym__string_literal] = "_string_literal",
  [sym__type_identifier] = "_type_identifier",
  [sym__path] = "_path",
  [sym__field_identifier] = "_field_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_generic_parameters_repeat1] = "generic_parameters_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_array_access_repeat1] = "array_access_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_array_type_repeat2] = "array_type_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_destruct_repeat1] = "destruct_repeat1",
  [aux_sym_lambda_repeat1] = "lambda_repeat1",
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
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_lshift] = anon_sym_lshift,
  [anon_sym_rshift] = anon_sym_rshift,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_mod] = anon_sym_mod,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_int_lit_token1] = aux_sym_int_lit_token1,
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
  [sym_array_access] = sym_array_access,
  [sym_array_type] = sym_array_type,
  [sym_dynamic_array_type] = sym_dynamic_array_type,
  [sym_static_array_type] = sym_static_array_type,
  [sym_generic_type] = sym_generic_type,
  [sym_int_type] = sym_int_type,
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
  [sym_int_lit] = sym_int_lit,
  [sym_string_literal] = sym_string_literal,
  [sym__string_literal] = sym__string_literal,
  [sym__type_identifier] = sym__type_identifier,
  [sym__path] = sym__path,
  [sym__field_identifier] = sym__field_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_generic_parameters_repeat1] = aux_sym_generic_parameters_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_array_access_repeat1] = aux_sym_array_access_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_array_type_repeat2] = aux_sym_array_type_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_destruct_repeat1] = aux_sym_destruct_repeat1,
  [aux_sym_lambda_repeat1] = aux_sym_lambda_repeat1,
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
  [anon_sym_set] = {
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
  [anon_sym_lshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_int_lit_token1] = {
    .visible = false,
    .named = false,
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
  [sym_array_access] = {
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
  [sym_int_type] = {
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
  [sym_int_lit] = {
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
  [aux_sym_array_access_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat2] = {
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
  [aux_sym_lambda_repeat1] = {
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
  [27] = {.index = 57, .length = 3},
  [28] = {.index = 60, .length = 2},
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
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [60] =
    {field_field, 2},
    {field_value, 0},
  [62] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
  [3] = 2,
  [4] = 4,
  [5] = 2,
  [6] = 6,
  [7] = 4,
  [8] = 4,
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
  [29] = 17,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 18,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 43,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 43,
  [62] = 46,
  [63] = 44,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 69,
  [72] = 72,
  [73] = 41,
  [74] = 40,
  [75] = 75,
  [76] = 76,
  [77] = 42,
  [78] = 78,
  [79] = 79,
  [80] = 76,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 45,
  [95] = 51,
  [96] = 47,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 55,
  [102] = 53,
  [103] = 103,
  [104] = 52,
  [105] = 58,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 50,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 57,
  [120] = 120,
  [121] = 59,
  [122] = 76,
  [123] = 123,
  [124] = 123,
  [125] = 125,
  [126] = 123,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 132,
  [133] = 132,
  [134] = 131,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 136,
  [142] = 132,
  [143] = 143,
  [144] = 144,
  [145] = 138,
  [146] = 135,
  [147] = 131,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 144,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 156,
  [159] = 159,
  [160] = 144,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 155,
  [166] = 162,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 169,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 182,
  [183] = 171,
  [184] = 177,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 167,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 195,
  [200] = 200,
  [201] = 200,
  [202] = 197,
  [203] = 195,
  [204] = 195,
  [205] = 195,
  [206] = 206,
  [207] = 206,
  [208] = 206,
  [209] = 206,
  [210] = 210,
  [211] = 206,
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
  [222] = 60,
  [223] = 220,
  [224] = 224,
  [225] = 217,
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
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 215,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 257,
  [262] = 254,
  [263] = 254,
  [264] = 254,
  [265] = 257,
  [266] = 220,
  [267] = 267,
  [268] = 268,
  [269] = 257,
  [270] = 270,
  [271] = 258,
  [272] = 217,
  [273] = 256,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 103,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 285,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 291,
  [293] = 86,
  [294] = 89,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 81,
  [301] = 301,
  [302] = 296,
  [303] = 303,
  [304] = 304,
  [305] = 84,
  [306] = 299,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 316,
  [319] = 319,
  [320] = 320,
  [321] = 312,
  [322] = 314,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 319,
  [329] = 323,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 320,
  [342] = 342,
  [343] = 343,
  [344] = 324,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 342,
  [349] = 347,
  [350] = 332,
  [351] = 351,
  [352] = 330,
  [353] = 353,
  [354] = 354,
  [355] = 327,
  [356] = 311,
  [357] = 326,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 99,
  [362] = 362,
  [363] = 363,
  [364] = 92,
  [365] = 93,
  [366] = 97,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 368,
  [386] = 386,
  [387] = 108,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 384,
  [394] = 394,
  [395] = 111,
  [396] = 362,
  [397] = 397,
  [398] = 100,
  [399] = 399,
  [400] = 362,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 392,
  [405] = 368,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 359,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 413,
  [416] = 369,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 248,
  [435] = 425,
  [436] = 422,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 247,
  [444] = 250,
  [445] = 445,
  [446] = 243,
  [447] = 433,
  [448] = 448,
  [449] = 449,
  [450] = 442,
  [451] = 451,
  [452] = 452,
  [453] = 419,
  [454] = 451,
  [455] = 422,
  [456] = 427,
  [457] = 445,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 452,
  [462] = 253,
  [463] = 439,
  [464] = 418,
  [465] = 465,
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
                    : c <= 'k')))
                : (c <= 'q' || (c < 170
                  ? (c < 'y'
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
                    : c <= 'k')))
                : (c <= 'q' || (c < 170
                  ? (c < 'y'
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
  return (c < 43488
    ? (c < 4159
      ? (c < 2654
        ? (c < 1808
          ? (c < 895
            ? (c < 192
              ? (c < 's'
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'k' || (c < 'p'
                    ? c == 'n'
                    : c <= 'q')))
                : (c <= 'w' || (c < 181
                  ? (c < 170
                    ? (c >= 'y' && c <= 'z')
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
                  : (c <= 'r' || (c < 170
                    ? (c >= 't' && c <= 'z')
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

static inline bool sym_identifier_character_set_9(int32_t c) {
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
                  : (c <= 'h' || (c < 170
                    ? (c >= 'j' && c <= 'z')
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

static inline bool sym_identifier_character_set_10(int32_t c) {
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

static inline bool sym_identifier_character_set_11(int32_t c) {
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
      if (eof) ADVANCE(215);
      if (lookahead == '!') ADVANCE(223);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == ')') ADVANCE(228);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'K') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(200);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(35);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == '^') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(126);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(213)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '^') ADVANCE(295);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == 'w') ADVANCE(348);
      if (lookahead == 'x') ADVANCE(366);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '^') ADVANCE(295);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == 'w') ADVANCE(348);
      if (lookahead == 'x') ADVANCE(366);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == '[') ADVANCE(270);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'x') ADVANCE(366);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(243);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(222);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == ')') ADVANCE(228);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(271);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(385);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'K') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(200);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == ')') ADVANCE(228);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '^') ADVANCE(295);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(385);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == 'w') ADVANCE(348);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == ')') ADVANCE(228);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(271);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(385);
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(271);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(385);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(270);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(385);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '[') ADVANCE(270);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(385);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(322);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(275);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(275);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(279);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(272);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(276);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(273);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(277);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(274);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(278);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(245);
      if (lookahead == '>') ADVANCE(291);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(182);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(150);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(152);
      END_STATE();
    case 31:
      if (lookahead == 'S') ADVANCE(190);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(302);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == 'x') ADVANCE(212);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 199:
      if (lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 200:
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 201:
      if (lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 202:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 203:
      if (lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 204:
      if (lookahead == '{') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 205:
      if (lookahead == '}') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 213:
      if (eof) ADVANCE(215);
      if (lookahead == '!') ADVANCE(223);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == ')') ADVANCE(228);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'K') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(200);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(35);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == '^') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(126);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(213)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 214:
      if (eof) ADVANCE(215);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == ')') ADVANCE(228);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(126);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(214)
      END_STATE();
    case 215:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DeriveStructDrop);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DeriveInterfaceDrop);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DeriveAnonymousSubstruct);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_exported);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(322);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(238);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Ref);
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Kind);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Region);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Prot);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RefList);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Ownership);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Variability);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Mutability);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Location);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ro);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ro);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_imm);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_imm);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(294);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_set);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(245);
      if (lookahead == '>') ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_lshift);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_rshift);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_xor);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (lookahead == '.') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(371);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(385);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(355);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(385);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(334);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(385);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(349);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(311);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(321);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(333);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(297);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(309);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 's') ADVANCE(351);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(381);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(307);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(378);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(379);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(353);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(303);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(352);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(354);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(346);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(356);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(347);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(372);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(340);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(373);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(267);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(358);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(290);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(335);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(305);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(376);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(260);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(336);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(370);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(382);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(360);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(313);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(319);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(337);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(339);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(341);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(350);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(351);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(293);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(285);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(317);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(265);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(383);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(338);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(368);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(380);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(385);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 214},
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
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
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
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 214},
  [61] = {.lex_state = 214},
  [62] = {.lex_state = 214},
  [63] = {.lex_state = 214},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 214},
  [74] = {.lex_state = 214},
  [75] = {.lex_state = 214},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 214},
  [78] = {.lex_state = 214},
  [79] = {.lex_state = 214},
  [80] = {.lex_state = 214},
  [81] = {.lex_state = 214},
  [82] = {.lex_state = 214},
  [83] = {.lex_state = 214},
  [84] = {.lex_state = 214},
  [85] = {.lex_state = 214},
  [86] = {.lex_state = 214},
  [87] = {.lex_state = 214},
  [88] = {.lex_state = 214},
  [89] = {.lex_state = 214},
  [90] = {.lex_state = 214},
  [91] = {.lex_state = 214},
  [92] = {.lex_state = 214},
  [93] = {.lex_state = 214},
  [94] = {.lex_state = 214},
  [95] = {.lex_state = 214},
  [96] = {.lex_state = 214},
  [97] = {.lex_state = 214},
  [98] = {.lex_state = 214},
  [99] = {.lex_state = 214},
  [100] = {.lex_state = 214},
  [101] = {.lex_state = 214},
  [102] = {.lex_state = 214},
  [103] = {.lex_state = 214},
  [104] = {.lex_state = 214},
  [105] = {.lex_state = 214},
  [106] = {.lex_state = 214},
  [107] = {.lex_state = 214},
  [108] = {.lex_state = 214},
  [109] = {.lex_state = 214},
  [110] = {.lex_state = 214},
  [111] = {.lex_state = 214},
  [112] = {.lex_state = 214},
  [113] = {.lex_state = 214},
  [114] = {.lex_state = 214},
  [115] = {.lex_state = 214},
  [116] = {.lex_state = 214},
  [117] = {.lex_state = 214},
  [118] = {.lex_state = 214},
  [119] = {.lex_state = 214},
  [120] = {.lex_state = 214},
  [121] = {.lex_state = 214},
  [122] = {.lex_state = 214},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 214},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 214},
  [128] = {.lex_state = 214},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 214},
  [132] = {.lex_state = 214},
  [133] = {.lex_state = 214},
  [134] = {.lex_state = 214},
  [135] = {.lex_state = 214},
  [136] = {.lex_state = 214},
  [137] = {.lex_state = 214},
  [138] = {.lex_state = 214},
  [139] = {.lex_state = 214},
  [140] = {.lex_state = 214},
  [141] = {.lex_state = 214},
  [142] = {.lex_state = 214},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 214},
  [146] = {.lex_state = 214},
  [147] = {.lex_state = 214},
  [148] = {.lex_state = 214},
  [149] = {.lex_state = 214},
  [150] = {.lex_state = 214},
  [151] = {.lex_state = 214},
  [152] = {.lex_state = 214},
  [153] = {.lex_state = 214},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 214},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 214},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 214},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 214},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 214},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 214},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 214},
  [230] = {.lex_state = 214},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 214},
  [234] = {.lex_state = 214},
  [235] = {.lex_state = 214},
  [236] = {.lex_state = 214},
  [237] = {.lex_state = 214},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 214},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 214},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 214},
  [257] = {.lex_state = 214},
  [258] = {.lex_state = 214},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 214},
  [262] = {.lex_state = 214},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 7},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 6},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 6},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 6},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 6},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 8},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 8},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 8},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 8},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 6},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 8},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 8},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 6},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 8},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 6},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 6},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 8},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 8},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 6},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 8},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 8},
  [390] = {.lex_state = 6},
  [391] = {.lex_state = 6},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 8},
  [396] = {.lex_state = 6},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 6},
  [400] = {.lex_state = 6},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 6},
  [406] = {.lex_state = 8},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 6},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 2},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 214},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 6},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 2},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 214},
  [438] = {.lex_state = 214},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 214},
  [442] = {.lex_state = 2},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 2},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 2},
  [451] = {.lex_state = 2},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 2},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 2},
  [465] = {.lex_state = 214},
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
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_lshift] = ACTIONS(1),
    [anon_sym_rshift] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [aux_sym_int_lit_token1] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(448),
    [sym__top_level] = STATE(191),
    [sym_import] = STATE(191),
    [sym_attribute] = STATE(437),
    [sym_extern] = STATE(458),
    [sym_func_header] = STATE(338),
    [sym_func_proto] = STATE(191),
    [sym_function_definition] = STATE(191),
    [sym_struct_definition] = STATE(191),
    [aux_sym_source_file_repeat1] = STATE(191),
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
  [0] = 35,
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
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(192), 1,
      sym_pattern,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(249), 1,
      sym_reference_type,
    STATE(358), 1,
      sym_array_type,
    STATE(463), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(288), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(54), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(142), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [131] = 35,
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
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym__string_literal,
    STATE(192), 1,
      sym_pattern,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(249), 1,
      sym_reference_type,
    STATE(358), 1,
      sym_array_type,
    STATE(463), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(288), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(54), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(132), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [262] = 35,
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
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym__string_literal,
    STATE(192), 1,
      sym_pattern,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(249), 1,
      sym_reference_type,
    STATE(358), 1,
      sym_array_type,
    STATE(463), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(288), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(3), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(54), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(147), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [393] = 35,
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
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym__string_literal,
    STATE(192), 1,
      sym_pattern,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(249), 1,
      sym_reference_type,
    STATE(358), 1,
      sym_array_type,
    STATE(463), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(288), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(54), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(133), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [524] = 35,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_AMP,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_set,
    ACTIONS(78), 1,
      anon_sym_return,
    ACTIONS(81), 1,
      anon_sym_not,
    ACTIONS(90), 1,
      anon_sym_while,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(96), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(192), 1,
      sym_pattern,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(249), 1,
      sym_reference_type,
    STATE(358), 1,
      sym_array_type,
    STATE(463), 1,
      sym_type,
    ACTIONS(84), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(288), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(54), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(150), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [655] = 35,
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
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym__string_literal,
    STATE(192), 1,
      sym_pattern,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(249), 1,
      sym_reference_type,
    STATE(358), 1,
      sym_array_type,
    STATE(463), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(288), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(54), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(134), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [786] = 35,
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
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym__string_literal,
    STATE(192), 1,
      sym_pattern,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(249), 1,
      sym_reference_type,
    STATE(358), 1,
      sym_array_type,
    STATE(463), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(288), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(54), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(131), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [917] = 35,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
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
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(249), 1,
      sym_reference_type,
    STATE(348), 1,
      sym_pattern,
    STATE(349), 1,
      aux_sym_lambda_repeat1,
    STATE(358), 1,
      sym_array_type,
    STATE(463), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(152), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1046] = 35,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
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
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      sym__string_literal,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(249), 1,
      sym_reference_type,
    STATE(342), 1,
      sym_pattern,
    STATE(347), 1,
      aux_sym_lambda_repeat1,
    STATE(358), 1,
      sym_array_type,
    STATE(463), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(152), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1175] = 30,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
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
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(249), 1,
      sym_reference_type,
    STATE(358), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(120), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1289] = 30,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym__string_literal,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(249), 1,
      sym_reference_type,
    STATE(358), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(120), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1403] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(343), 1,
      aux_sym_call_expr_repeat1,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(128), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1503] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(137), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1597] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(137), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1691] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(137), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1785] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(146), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1876] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(141), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1967] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(113), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2058] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(115), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2149] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(116), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2240] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(117), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2331] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(137), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2422] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(114), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2513] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(148), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2604] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(112), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2695] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(140), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2786] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(106), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2877] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(135), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2968] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(149), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3059] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(139), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3150] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(138), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3241] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(145), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3332] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(120), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3423] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(107), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3514] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(109), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3605] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(153), 1,
      sym_int_lit,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(108), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(127), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(164), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3698] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(151), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3789] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_foreach,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(100), 1,
      sym__string_literal,
    STATE(459), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(108), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(136), 15,
      sym_array_access,
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
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3880] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      anon_sym_else,
    STATE(57), 1,
      sym_else_expr,
    STATE(41), 2,
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
    ACTIONS(161), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [3936] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      anon_sym_else,
    STATE(51), 1,
      sym_else_expr,
    STATE(42), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(165), 15,
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
    ACTIONS(167), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [3992] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_else,
    STATE(42), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(169), 15,
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
    ACTIONS(171), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4045] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 15,
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
    ACTIONS(178), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4092] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 15,
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
    ACTIONS(182), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4139] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 15,
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
    ACTIONS(186), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4186] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 15,
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
    ACTIONS(190), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4233] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 15,
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
    ACTIONS(194), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4279] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 15,
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
    ACTIONS(182), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 15,
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
    ACTIONS(190), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4371] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 15,
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
    ACTIONS(198), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4417] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 15,
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
    ACTIONS(202), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4463] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 15,
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
    ACTIONS(206), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4509] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 15,
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
    ACTIONS(210), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4555] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(214), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(218), 11,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      aux_sym_int_lit_token1,
      sym_identifier,
    ACTIONS(216), 12,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [4605] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 15,
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
    ACTIONS(222), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4651] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 15,
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
    ACTIONS(178), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4697] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 15,
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
    ACTIONS(226), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4743] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 15,
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
    ACTIONS(230), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4789] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 15,
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
    ACTIONS(234), 23,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      sym_identifier,
  [4835] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(93), 1,
      sym_int_type,
    ACTIONS(238), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(240), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
    ACTIONS(236), 21,
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
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [4883] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(176), 29,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [4927] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(188), 29,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [4971] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(180), 29,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5015] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_GT,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      aux_sym_int_lit_token1,
    ACTIONS(256), 1,
      sym_float_lit,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(329), 1,
      aux_sym_type_parameters_repeat1,
    STATE(344), 1,
      sym_type_parameter,
    STATE(398), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(387), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5099] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      aux_sym_int_lit_token1,
    ACTIONS(256), 1,
      sym_float_lit,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_GT,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(323), 1,
      aux_sym_type_parameters_repeat1,
    STATE(324), 1,
      sym_type_parameter,
    STATE(398), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(387), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5183] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      aux_sym_int_lit_token1,
    ACTIONS(256), 1,
      sym_float_lit,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    STATE(398), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(387), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5261] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      aux_sym_int_lit_token1,
    ACTIONS(256), 1,
      sym_float_lit,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    STATE(398), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(387), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5339] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      aux_sym_int_lit_token1,
    ACTIONS(256), 1,
      sym_float_lit,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    STATE(398), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(387), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5417] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      aux_sym_int_lit_token1,
    ACTIONS(256), 1,
      sym_float_lit,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    STATE(398), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(387), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5495] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      aux_sym_int_lit_token1,
    ACTIONS(256), 1,
      sym_float_lit,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    STATE(398), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(387), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5573] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      aux_sym_int_lit_token1,
    ACTIONS(256), 1,
      sym_float_lit,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    STATE(398), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(387), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5651] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      aux_sym_int_lit_token1,
    ACTIONS(256), 1,
      sym_float_lit,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    STATE(398), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(387), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5726] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_else,
    STATE(95), 1,
      sym_else_expr,
    STATE(77), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(167), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(165), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5770] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_else,
    STATE(119), 1,
      sym_else_expr,
    STATE(73), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(161), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(159), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5814] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      anon_sym_LT,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      aux_sym_array_access_repeat1,
    STATE(90), 1,
      sym_type_parameters,
    ACTIONS(216), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(212), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5859] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(288), 1,
      anon_sym_LT,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      anon_sym_AMP,
    STATE(85), 1,
      aux_sym_array_access_repeat1,
    STATE(90), 1,
      sym_type_parameters,
    ACTIONS(296), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(212), 10,
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
    ACTIONS(216), 10,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5912] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_else,
    STATE(77), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(171), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(169), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5953] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(303), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(301), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5993] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(308), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6029] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      anon_sym_LT,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_array_access_repeat1,
    STATE(90), 1,
      sym_type_parameters,
    ACTIONS(285), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(216), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(212), 16,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6079] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(312), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6115] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(216), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(212), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6155] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(316), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6191] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(320), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6227] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(326), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(324), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6267] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(328), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6303] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(332), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6339] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(336), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6375] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(340), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6411] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(344), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6447] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(348), 21,
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
      anon_sym_LBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6482] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(352), 21,
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
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6517] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(356), 21,
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
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6552] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(184), 21,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6587] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(200), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6621] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(192), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6655] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(360), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6689] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(364), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(370), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(368), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6757] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(372), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6791] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(220), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6825] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(208), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6859] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(376), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6893] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(204), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6927] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(230), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(228), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6961] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(380), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7015] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_EQ,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(405), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7069] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(412), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7103] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      anon_sym_EQ,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(416), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7157] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(196), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7191] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(423), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(427), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7259] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(429), 1,
      anon_sym_EQ,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(427), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_or,
  [7309] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(429), 1,
      anon_sym_EQ,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(427), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [7357] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(429), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(427), 12,
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
  [7401] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(429), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(427), 14,
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
  [7443] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(429), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(427), 16,
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
      anon_sym_mod,
  [7481] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(431), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7515] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(224), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7549] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(435), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7603] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(232), 20,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7637] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(288), 1,
      anon_sym_LT,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      aux_sym_array_access_repeat1,
    STATE(90), 1,
      sym_type_parameters,
    ACTIONS(216), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(212), 15,
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
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7682] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    ACTIONS(450), 1,
      anon_sym_set,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(330), 1,
      aux_sym_destruct_repeat1,
    STATE(332), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [7748] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    ACTIONS(456), 1,
      anon_sym_set,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(350), 1,
      sym_pattern,
    STATE(352), 1,
      aux_sym_destruct_repeat1,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [7814] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      anon_sym_LT,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_array_access_repeat1,
    STATE(90), 1,
      sym_type_parameters,
    ACTIONS(216), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(212), 15,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7856] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(456), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(350), 1,
      sym_pattern,
    STATE(352), 1,
      aux_sym_destruct_repeat1,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [7922] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(216), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(212), 15,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7959] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8012] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    ACTIONS(468), 1,
      anon_sym_set,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(326), 1,
      aux_sym_destruct_repeat1,
    STATE(327), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [8075] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    ACTIONS(472), 1,
      anon_sym_set,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(355), 1,
      sym_pattern,
    STATE(357), 1,
      aux_sym_destruct_repeat1,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [8138] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8188] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8238] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8288] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8338] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8388] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_block,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8438] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(482), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8486] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8536] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8586] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8636] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8686] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8736] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(490), 1,
      anon_sym_GT,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      sym_identifier,
    STATE(206), 1,
      sym_region_specifier,
    STATE(210), 1,
      sym__type_identifier,
    STATE(226), 1,
      sym_scoped_type_identifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(333), 1,
      aux_sym_generic_parameters_repeat1,
    STATE(335), 1,
      sym_generic_parameter,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(377), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [8796] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(197), 1,
      sym_type_parameters,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(246), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(496), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8852] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_block,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8902] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8952] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9002] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9049] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9096] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9143] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_EQ,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9190] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9237] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    ACTIONS(414), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(412), 15,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [9268] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(510), 1,
      anon_sym_in,
    STATE(197), 1,
      sym_type_parameters,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(246), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [9322] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(388), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [9376] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(388), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [9430] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_set,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(381), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [9484] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(388), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [9538] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_region_specifier,
    STATE(210), 1,
      sym__type_identifier,
    STATE(226), 1,
      sym_scoped_type_identifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(389), 1,
      sym_generic_parameter,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(377), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9592] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      anon_sym_EQ,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(522), 1,
      anon_sym_DOT,
    ACTIONS(525), 1,
      anon_sym_AMP,
    ACTIONS(528), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(197), 1,
      sym_type_parameters,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(246), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [9646] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(534), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_region_specifier,
    STATE(210), 1,
      sym__type_identifier,
    STATE(226), 1,
      sym_scoped_type_identifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(389), 1,
      sym_generic_parameter,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(377), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9700] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(388), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [9754] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_region_specifier,
    STATE(210), 1,
      sym__type_identifier,
    STATE(226), 1,
      sym_scoped_type_identifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(389), 1,
      sym_generic_parameter,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(377), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9808] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(403), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(393), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9852] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(388), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [9906] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(388), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [9960] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(197), 1,
      sym_type_parameters,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(246), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [10011] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(394), 1,
      sym_type,
    ACTIONS(544), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10060] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(548), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(434), 1,
      sym_destruct,
    STATE(439), 1,
      sym_type,
    STATE(461), 1,
      sym_pattern,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [10111] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(550), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(552), 11,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      aux_sym_int_lit_token1,
      sym_identifier,
  [10138] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(554), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      anon_sym_AMP,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(201), 1,
      sym_type_parameters,
    STATE(208), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(264), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(265), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(455), 2,
      sym_scoped_identifier,
      sym__path,
  [10189] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(548), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(434), 1,
      sym_destruct,
    STATE(439), 1,
      sym_type,
    STATE(452), 1,
      sym_pattern,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [10240] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(407), 1,
      sym_type,
    ACTIONS(560), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10289] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(564), 11,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      aux_sym_int_lit_token1,
      sym_identifier,
  [10316] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(414), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [10367] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(417), 1,
      sym_type,
    ACTIONS(566), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10416] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(319), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [10467] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(412), 1,
      sym_type,
    ACTIONS(568), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10516] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(355), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [10567] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(388), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [10618] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(327), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [10669] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(403), 1,
      sym_type,
    ACTIONS(570), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10718] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(200), 1,
      sym_type_parameters,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [10769] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_destruct,
    STATE(328), 1,
      sym_pattern,
    STATE(463), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(285), 2,
      sym_scoped_identifier,
      sym__path,
  [10820] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(574), 11,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      aux_sym_int_lit_token1,
      sym_identifier,
  [10847] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(402), 1,
      sym_type,
    ACTIONS(576), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10896] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(494), 1,
      sym_identifier,
    STATE(206), 1,
      sym_region_specifier,
    STATE(210), 1,
      sym__type_identifier,
    STATE(226), 1,
      sym_scoped_type_identifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(389), 1,
      sym_generic_parameter,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(377), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10947] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(372), 1,
      sym_type,
    ACTIONS(578), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10996] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(371), 1,
      sym_type,
    ACTIONS(580), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11045] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(554), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      anon_sym_AMP,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(202), 1,
      sym_type_parameters,
    STATE(208), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(246), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(264), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(265), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(455), 2,
      sym_scoped_identifier,
      sym__path,
  [11096] = 13,
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
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    STATE(338), 1,
      sym_func_header,
    STATE(437), 1,
      sym_attribute,
    STATE(458), 1,
      sym_extern,
    ACTIONS(13), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(194), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [11142] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(584), 1,
      anon_sym_AMP,
    ACTIONS(586), 1,
      anon_sym_EQ,
    STATE(209), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(465), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [11190] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    ACTIONS(588), 1,
      anon_sym_BANG,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(430), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11238] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    ACTIONS(592), 1,
      anon_sym_import,
    ACTIONS(595), 1,
      anon_sym_POUND,
    ACTIONS(598), 1,
      anon_sym_extern,
    ACTIONS(604), 1,
      anon_sym_export,
    ACTIONS(607), 1,
      anon_sym_func,
    ACTIONS(610), 1,
      anon_sym_struct,
    STATE(338), 1,
      sym_func_header,
    STATE(437), 1,
      sym_attribute,
    STATE(458), 1,
      sym_extern,
    ACTIONS(601), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(194), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [11284] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [11329] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(378), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11374] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(244), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [11419] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(423), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11464] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(206), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11509] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(207), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [11554] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(554), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      anon_sym_AMP,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(208), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(264), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(265), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(455), 2,
      sym_scoped_identifier,
      sym__path,
  [11599] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(554), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      anon_sym_AMP,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(208), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(244), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(264), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(265), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(455), 2,
      sym_scoped_identifier,
      sym__path,
  [11644] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(584), 1,
      anon_sym_AMP,
    STATE(209), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [11689] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_AMP,
    STATE(211), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11734] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(554), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      anon_sym_AMP,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(208), 1,
      sym_region_specifier,
    STATE(231), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(226), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(249), 2,
      sym_reference_type,
      sym_array_type,
    STATE(264), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(265), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(455), 2,
      sym_scoped_identifier,
      sym__path,
  [11779] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(613), 1,
      sym_identifier,
    STATE(241), 1,
      sym_generic_type,
    STATE(227), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(252), 2,
      sym_reference_type,
      sym_array_type,
    STATE(263), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(269), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11818] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(613), 1,
      sym_identifier,
    STATE(241), 1,
      sym_generic_type,
    STATE(227), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(252), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(262), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [11857] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(554), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      anon_sym_AMP,
    ACTIONS(613), 1,
      sym_identifier,
    STATE(241), 1,
      sym_generic_type,
    STATE(227), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(252), 2,
      sym_reference_type,
      sym_array_type,
    STATE(264), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(265), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(455), 2,
      sym_scoped_identifier,
      sym__path,
  [11896] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      anon_sym_AMP,
    ACTIONS(613), 1,
      sym_identifier,
    STATE(241), 1,
      sym_generic_type,
    STATE(227), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(252), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(422), 2,
      sym_scoped_identifier,
      sym__path,
  [11935] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(621), 1,
      anon_sym_Ref,
    STATE(232), 1,
      sym_generic_parameters,
    STATE(401), 1,
      sym_rune,
    ACTIONS(617), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(619), 9,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [11966] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_AMP,
    ACTIONS(613), 1,
      sym_identifier,
    STATE(241), 1,
      sym_generic_type,
    STATE(227), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(252), 2,
      sym_reference_type,
      sym_array_type,
    STATE(254), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(257), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [12005] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(625), 1,
      anon_sym_Ref,
    ACTIONS(627), 1,
      anon_sym_SQUOTE,
    ACTIONS(623), 12,
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
  [12032] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(631), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(629), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [12055] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(639), 1,
      sym_identifier,
    ACTIONS(637), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(635), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [12078] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(623), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12100] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(623), 12,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12118] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(623), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(643), 11,
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
  [12154] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(645), 11,
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
  [12171] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(649), 1,
      anon_sym_LBRACK,
    ACTIONS(647), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(623), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12192] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(652), 11,
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
  [12209] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(365), 1,
      sym_int_type,
    ACTIONS(236), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(654), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
  [12230] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(623), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(656), 11,
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
  [12266] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACK,
    ACTIONS(641), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(623), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12287] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    STATE(232), 1,
      sym_generic_parameters,
    ACTIONS(617), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12307] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    STATE(232), 1,
      sym_generic_parameters,
    ACTIONS(661), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12327] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(623), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12345] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      anon_sym_export,
    ACTIONS(663), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12362] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_export,
    ACTIONS(667), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12379] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_DOT,
    ACTIONS(617), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12396] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 9,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12411] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_export,
    ACTIONS(675), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12428] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_export,
    ACTIONS(679), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12445] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_export,
    ACTIONS(683), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12462] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 1,
      anon_sym_export,
    ACTIONS(687), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12479] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_export,
    ACTIONS(691), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12496] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12511] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 1,
      anon_sym_export,
    ACTIONS(697), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12528] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12543] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_DOT,
    ACTIONS(661), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12560] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(703), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12574] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [12588] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12602] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12616] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12630] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [12644] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(715), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [12658] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12672] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [12686] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12700] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12714] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [12728] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      anon_sym_LBRACK,
    STATE(258), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(723), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [12745] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(623), 5,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [12762] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    STATE(256), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(727), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [12779] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(732), 1,
      anon_sym_LBRACK,
    STATE(256), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(723), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [12796] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(736), 1,
      anon_sym_LBRACK,
    STATE(258), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(734), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [12813] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(739), 1,
      anon_sym_DOT,
    ACTIONS(741), 1,
      anon_sym_STAR,
    ACTIONS(743), 1,
      sym_identifier,
    STATE(424), 1,
      sym_import_wildcard,
    STATE(426), 1,
      sym_import_path,
    STATE(410), 2,
      sym_scoped_identifier,
      sym__path,
  [12836] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_ro,
    ACTIONS(751), 1,
      sym_identifier,
    ACTIONS(747), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(745), 3,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [12855] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(256), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(723), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12870] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(258), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(723), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12885] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 1,
      anon_sym_LBRACK,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(723), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [12901] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(723), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [12915] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(723), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [12929] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 1,
      anon_sym_DOT,
    ACTIONS(623), 5,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [12943] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
    STATE(303), 1,
      sym_generic_parameters,
    STATE(440), 1,
      sym_mutability,
    ACTIONS(757), 2,
      anon_sym_mut,
      anon_sym_imm,
  [12963] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(759), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12975] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(761), 1,
      anon_sym_LBRACK,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(723), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [12991] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(763), 1,
      anon_sym_LBRACE,
    STATE(304), 1,
      sym_generic_parameters,
    STATE(449), 1,
      sym_mutability,
    ACTIONS(757), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13011] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(734), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      anon_sym_DOT,
    ACTIONS(623), 5,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13041] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(768), 1,
      anon_sym_LBRACK,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(727), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13057] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(771), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13069] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(773), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13081] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13093] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(193), 1,
      sym__field_identifier,
    STATE(290), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13110] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym__field_identifier,
    STATE(284), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13127] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym__field_identifier,
    STATE(290), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13144] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(785), 1,
      anon_sym_BANG,
    STATE(421), 1,
      sym_attribute_name,
    ACTIONS(783), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [13159] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym__field_identifier,
    STATE(290), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13176] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13187] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(193), 1,
      sym__field_identifier,
    STATE(279), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13204] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym__field_identifier,
    STATE(290), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13221] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(715), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [13234] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym__field_identifier,
    STATE(281), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13251] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym__field_identifier,
    STATE(277), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13268] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 1,
      anon_sym_DOT,
    ACTIONS(715), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13281] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(337), 1,
      sym_parameter,
    STATE(345), 1,
      aux_sym_parameters_repeat1,
  [13300] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    ACTIONS(806), 1,
      sym_identifier,
    STATE(193), 1,
      sym__field_identifier,
    STATE(290), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13317] = 4,
    ACTIONS(809), 1,
      sym_line_comment,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    STATE(301), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(811), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [13331] = 4,
    ACTIONS(809), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_DQUOTE,
    STATE(301), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(811), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [13345] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13355] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13365] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_parameters,
    STATE(386), 1,
      sym_generic_parameters,
  [13381] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      aux_sym_int_lit_token1,
    ACTIONS(821), 1,
      sym_identifier,
    STATE(435), 2,
      sym_int_lit,
      sym__type_identifier,
  [13395] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(745), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13405] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_parameters,
    STATE(382), 1,
      sym_generic_parameters,
  [13421] = 4,
    ACTIONS(809), 1,
      sym_line_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    STATE(292), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(823), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [13435] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13445] = 4,
    ACTIONS(809), 1,
      sym_line_comment,
    ACTIONS(830), 1,
      anon_sym_DQUOTE,
    STATE(301), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(827), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [13459] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      aux_sym_int_lit_token1,
    ACTIONS(821), 1,
      sym_identifier,
    STATE(425), 2,
      sym_int_lit,
      sym__type_identifier,
  [13473] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    STATE(431), 1,
      sym_mutability,
    ACTIONS(757), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13487] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
    STATE(440), 1,
      sym_mutability,
    ACTIONS(757), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13501] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13511] = 4,
    ACTIONS(809), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(834), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [13525] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_parameters,
    STATE(375), 1,
      sym_generic_parameters,
  [13541] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_parameters,
    STATE(376), 1,
      sym_generic_parameters,
  [13557] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(438), 1,
      sym_attribute_name,
    ACTIONS(783), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [13569] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_parameter,
  [13582] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_lambda_repeat1,
  [13595] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(842), 1,
      anon_sym_if,
    STATE(52), 1,
      sym_block,
  [13608] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_parameters_repeat1,
  [13621] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_destruct_repeat1,
  [13634] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_GT,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_generic_parameters_repeat1,
  [13647] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_destruct_repeat1,
  [13660] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      anon_sym_GT,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_generic_parameters_repeat1,
  [13673] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_destruct_repeat1,
  [13686] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      aux_sym_destruct_repeat1,
  [13699] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      anon_sym_GT,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_type_parameters_repeat1,
  [13712] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(866), 1,
      anon_sym_if,
    STATE(104), 1,
      sym_block,
  [13725] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_destruct_repeat1,
  [13738] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_type_parameters_repeat1,
  [13751] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym_type_parameters_repeat1,
  [13764] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym__string_literal,
    STATE(460), 1,
      sym_string_literal,
  [13777] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_destruct_repeat1,
  [13790] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [13803] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_destruct_repeat1,
  [13816] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      anon_sym_GT,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_type_parameters_repeat1,
  [13829] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_destruct_repeat1,
  [13842] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_parameter,
  [13855] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(326), 1,
      aux_sym_destruct_repeat1,
  [13868] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      anon_sym_GT,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_generic_parameters_repeat1,
  [13881] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_lambda_repeat1,
  [13894] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      anon_sym_GT,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_generic_parameters_repeat1,
  [13907] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_parameters_repeat1,
  [13920] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_parameters_repeat1,
  [13933] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      sym_block,
  [13946] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_parameter,
  [13959] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(891), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [13968] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      anon_sym_GT,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_type_parameters_repeat1,
  [13981] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_lambda_repeat1,
  [13994] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_call_expr_repeat1,
  [14007] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      anon_sym_GT,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_type_parameters_repeat1,
  [14020] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_parameters_repeat1,
  [14033] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 1,
      anon_sym_GT,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_type_parameters_repeat1,
  [14046] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_lambda_repeat1,
  [14059] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_lambda_repeat1,
  [14072] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_lambda_repeat1,
  [14085] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    STATE(357), 1,
      aux_sym_destruct_repeat1,
  [14098] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_call_expr_repeat1,
  [14111] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_destruct_repeat1,
  [14124] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_destruct_repeat1,
  [14137] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_call_expr_repeat1,
  [14150] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      aux_sym_destruct_repeat1,
  [14163] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_lambda_repeat1,
  [14176] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_destruct_repeat1,
  [14189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_LBRACK,
  [14199] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
  [14209] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(918), 1,
      sym_identifier,
    STATE(118), 1,
      sym__field_identifier,
  [14219] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14227] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(920), 1,
      sym_identifier,
    STATE(238), 1,
      sym__type_identifier,
  [14237] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(922), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [14245] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14253] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14261] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14269] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(924), 1,
      anon_sym_LPAREN,
    ACTIONS(926), 1,
      anon_sym_func,
  [14279] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(928), 1,
      sym_identifier,
    STATE(240), 1,
      sym__type_identifier,
  [14289] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [14299] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      sym_identifier,
    STATE(270), 1,
      sym__type_identifier,
  [14309] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(930), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14317] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(932), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14325] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(934), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14333] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14341] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_parameters,
  [14351] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_parameters,
  [14361] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(936), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14369] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(938), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14377] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14385] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(940), 1,
      anon_sym_STAR,
    ACTIONS(942), 1,
      sym_identifier,
  [14395] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(910), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14403] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_parameters,
  [14413] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [14421] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(944), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
  [14431] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(948), 1,
      sym_identifier,
    STATE(240), 1,
      sym__type_identifier,
  [14441] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_parameters,
  [14451] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14459] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(878), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14467] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14475] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      sym_identifier,
    STATE(267), 1,
      sym__type_identifier,
  [14485] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      sym_identifier,
    STATE(238), 1,
      sym__type_identifier,
  [14495] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
  [14505] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_POUND,
    ACTIONS(950), 1,
      anon_sym_RBRACK,
  [14515] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(952), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14523] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14531] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(954), 1,
      sym_identifier,
    STATE(238), 1,
      sym__type_identifier,
  [14541] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(956), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14549] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14557] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(374), 1,
      sym_parameter,
  [14567] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(958), 1,
      sym_identifier,
    STATE(238), 1,
      sym__type_identifier,
  [14577] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(960), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14585] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(962), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14593] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(964), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14601] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
  [14611] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(966), 1,
      sym_identifier,
    STATE(240), 1,
      sym__type_identifier,
  [14621] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(968), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14629] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14637] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [14645] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(972), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [14653] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(974), 1,
      anon_sym_SEMI,
    ACTIONS(976), 1,
      anon_sym_DOT,
  [14663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
  [14673] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(978), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14681] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
  [14691] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(980), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14699] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [14709] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block,
  [14719] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14727] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_EQ_GT,
  [14734] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(842), 1,
      anon_sym_if,
  [14741] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(986), 1,
      anon_sym_SEMI,
  [14748] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 1,
      anon_sym_struct,
  [14755] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_DOT,
  [14762] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(990), 1,
      anon_sym_SEMI,
  [14769] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(974), 1,
      anon_sym_SEMI,
  [14776] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
  [14783] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(994), 1,
      anon_sym_SEMI,
  [14790] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
  [14797] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      anon_sym_SEMI,
  [14804] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(998), 1,
      sym_identifier,
  [14811] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
  [14818] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
  [14825] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      anon_sym_func,
  [14832] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_EQ_GT,
  [14839] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(715), 1,
      anon_sym_in,
  [14846] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
  [14853] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      anon_sym_DOT,
  [14860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_struct,
  [14867] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1014), 1,
      anon_sym_struct,
  [14874] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1016), 1,
      anon_sym_LBRACK,
  [14881] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
  [14888] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1018), 1,
      anon_sym_struct,
  [14895] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1020), 1,
      anon_sym_EQ_GT,
  [14902] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_in,
  [14909] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 1,
      anon_sym_in,
  [14916] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(944), 1,
      anon_sym_POUND,
  [14923] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_in,
  [14930] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1022), 1,
      anon_sym_EQ_GT,
  [14937] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1024), 1,
      ts_builtin_sym_end,
  [14944] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
  [14951] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1026), 1,
      anon_sym_EQ_GT,
  [14958] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1028), 1,
      anon_sym_EQ_GT,
  [14965] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1030), 1,
      anon_sym_in,
  [14972] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(866), 1,
      anon_sym_if,
  [14979] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1032), 1,
      anon_sym_EQ_GT,
  [14986] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1034), 1,
      anon_sym_DOT,
  [14993] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(950), 1,
      anon_sym_RBRACK,
  [15000] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_POUND,
  [15007] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1036), 1,
      anon_sym_func,
  [15014] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
  [15021] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
  [15028] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1040), 1,
      anon_sym_in,
  [15035] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 1,
      anon_sym_in,
  [15042] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1042), 1,
      anon_sym_LBRACK,
  [15049] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1044), 1,
      anon_sym_EQ_GT,
  [15056] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1046), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 262,
  [SMALL_STATE(5)] = 393,
  [SMALL_STATE(6)] = 524,
  [SMALL_STATE(7)] = 655,
  [SMALL_STATE(8)] = 786,
  [SMALL_STATE(9)] = 917,
  [SMALL_STATE(10)] = 1046,
  [SMALL_STATE(11)] = 1175,
  [SMALL_STATE(12)] = 1289,
  [SMALL_STATE(13)] = 1403,
  [SMALL_STATE(14)] = 1503,
  [SMALL_STATE(15)] = 1597,
  [SMALL_STATE(16)] = 1691,
  [SMALL_STATE(17)] = 1785,
  [SMALL_STATE(18)] = 1876,
  [SMALL_STATE(19)] = 1967,
  [SMALL_STATE(20)] = 2058,
  [SMALL_STATE(21)] = 2149,
  [SMALL_STATE(22)] = 2240,
  [SMALL_STATE(23)] = 2331,
  [SMALL_STATE(24)] = 2422,
  [SMALL_STATE(25)] = 2513,
  [SMALL_STATE(26)] = 2604,
  [SMALL_STATE(27)] = 2695,
  [SMALL_STATE(28)] = 2786,
  [SMALL_STATE(29)] = 2877,
  [SMALL_STATE(30)] = 2968,
  [SMALL_STATE(31)] = 3059,
  [SMALL_STATE(32)] = 3150,
  [SMALL_STATE(33)] = 3241,
  [SMALL_STATE(34)] = 3332,
  [SMALL_STATE(35)] = 3423,
  [SMALL_STATE(36)] = 3514,
  [SMALL_STATE(37)] = 3605,
  [SMALL_STATE(38)] = 3698,
  [SMALL_STATE(39)] = 3789,
  [SMALL_STATE(40)] = 3880,
  [SMALL_STATE(41)] = 3936,
  [SMALL_STATE(42)] = 3992,
  [SMALL_STATE(43)] = 4045,
  [SMALL_STATE(44)] = 4092,
  [SMALL_STATE(45)] = 4139,
  [SMALL_STATE(46)] = 4186,
  [SMALL_STATE(47)] = 4233,
  [SMALL_STATE(48)] = 4279,
  [SMALL_STATE(49)] = 4325,
  [SMALL_STATE(50)] = 4371,
  [SMALL_STATE(51)] = 4417,
  [SMALL_STATE(52)] = 4463,
  [SMALL_STATE(53)] = 4509,
  [SMALL_STATE(54)] = 4555,
  [SMALL_STATE(55)] = 4605,
  [SMALL_STATE(56)] = 4651,
  [SMALL_STATE(57)] = 4697,
  [SMALL_STATE(58)] = 4743,
  [SMALL_STATE(59)] = 4789,
  [SMALL_STATE(60)] = 4835,
  [SMALL_STATE(61)] = 4883,
  [SMALL_STATE(62)] = 4927,
  [SMALL_STATE(63)] = 4971,
  [SMALL_STATE(64)] = 5015,
  [SMALL_STATE(65)] = 5099,
  [SMALL_STATE(66)] = 5183,
  [SMALL_STATE(67)] = 5261,
  [SMALL_STATE(68)] = 5339,
  [SMALL_STATE(69)] = 5417,
  [SMALL_STATE(70)] = 5495,
  [SMALL_STATE(71)] = 5573,
  [SMALL_STATE(72)] = 5651,
  [SMALL_STATE(73)] = 5726,
  [SMALL_STATE(74)] = 5770,
  [SMALL_STATE(75)] = 5814,
  [SMALL_STATE(76)] = 5859,
  [SMALL_STATE(77)] = 5912,
  [SMALL_STATE(78)] = 5953,
  [SMALL_STATE(79)] = 5993,
  [SMALL_STATE(80)] = 6029,
  [SMALL_STATE(81)] = 6079,
  [SMALL_STATE(82)] = 6115,
  [SMALL_STATE(83)] = 6155,
  [SMALL_STATE(84)] = 6191,
  [SMALL_STATE(85)] = 6227,
  [SMALL_STATE(86)] = 6267,
  [SMALL_STATE(87)] = 6303,
  [SMALL_STATE(88)] = 6339,
  [SMALL_STATE(89)] = 6375,
  [SMALL_STATE(90)] = 6411,
  [SMALL_STATE(91)] = 6447,
  [SMALL_STATE(92)] = 6482,
  [SMALL_STATE(93)] = 6517,
  [SMALL_STATE(94)] = 6552,
  [SMALL_STATE(95)] = 6587,
  [SMALL_STATE(96)] = 6621,
  [SMALL_STATE(97)] = 6655,
  [SMALL_STATE(98)] = 6689,
  [SMALL_STATE(99)] = 6723,
  [SMALL_STATE(100)] = 6757,
  [SMALL_STATE(101)] = 6791,
  [SMALL_STATE(102)] = 6825,
  [SMALL_STATE(103)] = 6859,
  [SMALL_STATE(104)] = 6893,
  [SMALL_STATE(105)] = 6927,
  [SMALL_STATE(106)] = 6961,
  [SMALL_STATE(107)] = 7015,
  [SMALL_STATE(108)] = 7069,
  [SMALL_STATE(109)] = 7103,
  [SMALL_STATE(110)] = 7157,
  [SMALL_STATE(111)] = 7191,
  [SMALL_STATE(112)] = 7225,
  [SMALL_STATE(113)] = 7259,
  [SMALL_STATE(114)] = 7309,
  [SMALL_STATE(115)] = 7357,
  [SMALL_STATE(116)] = 7401,
  [SMALL_STATE(117)] = 7443,
  [SMALL_STATE(118)] = 7481,
  [SMALL_STATE(119)] = 7515,
  [SMALL_STATE(120)] = 7549,
  [SMALL_STATE(121)] = 7603,
  [SMALL_STATE(122)] = 7637,
  [SMALL_STATE(123)] = 7682,
  [SMALL_STATE(124)] = 7748,
  [SMALL_STATE(125)] = 7814,
  [SMALL_STATE(126)] = 7856,
  [SMALL_STATE(127)] = 7922,
  [SMALL_STATE(128)] = 7959,
  [SMALL_STATE(129)] = 8012,
  [SMALL_STATE(130)] = 8075,
  [SMALL_STATE(131)] = 8138,
  [SMALL_STATE(132)] = 8188,
  [SMALL_STATE(133)] = 8238,
  [SMALL_STATE(134)] = 8288,
  [SMALL_STATE(135)] = 8338,
  [SMALL_STATE(136)] = 8388,
  [SMALL_STATE(137)] = 8438,
  [SMALL_STATE(138)] = 8486,
  [SMALL_STATE(139)] = 8536,
  [SMALL_STATE(140)] = 8586,
  [SMALL_STATE(141)] = 8636,
  [SMALL_STATE(142)] = 8686,
  [SMALL_STATE(143)] = 8736,
  [SMALL_STATE(144)] = 8796,
  [SMALL_STATE(145)] = 8852,
  [SMALL_STATE(146)] = 8902,
  [SMALL_STATE(147)] = 8952,
  [SMALL_STATE(148)] = 9002,
  [SMALL_STATE(149)] = 9049,
  [SMALL_STATE(150)] = 9096,
  [SMALL_STATE(151)] = 9143,
  [SMALL_STATE(152)] = 9190,
  [SMALL_STATE(153)] = 9237,
  [SMALL_STATE(154)] = 9268,
  [SMALL_STATE(155)] = 9322,
  [SMALL_STATE(156)] = 9376,
  [SMALL_STATE(157)] = 9430,
  [SMALL_STATE(158)] = 9484,
  [SMALL_STATE(159)] = 9538,
  [SMALL_STATE(160)] = 9592,
  [SMALL_STATE(161)] = 9646,
  [SMALL_STATE(162)] = 9700,
  [SMALL_STATE(163)] = 9754,
  [SMALL_STATE(164)] = 9808,
  [SMALL_STATE(165)] = 9852,
  [SMALL_STATE(166)] = 9906,
  [SMALL_STATE(167)] = 9960,
  [SMALL_STATE(168)] = 10011,
  [SMALL_STATE(169)] = 10060,
  [SMALL_STATE(170)] = 10111,
  [SMALL_STATE(171)] = 10138,
  [SMALL_STATE(172)] = 10189,
  [SMALL_STATE(173)] = 10240,
  [SMALL_STATE(174)] = 10289,
  [SMALL_STATE(175)] = 10316,
  [SMALL_STATE(176)] = 10367,
  [SMALL_STATE(177)] = 10416,
  [SMALL_STATE(178)] = 10467,
  [SMALL_STATE(179)] = 10516,
  [SMALL_STATE(180)] = 10567,
  [SMALL_STATE(181)] = 10618,
  [SMALL_STATE(182)] = 10669,
  [SMALL_STATE(183)] = 10718,
  [SMALL_STATE(184)] = 10769,
  [SMALL_STATE(185)] = 10820,
  [SMALL_STATE(186)] = 10847,
  [SMALL_STATE(187)] = 10896,
  [SMALL_STATE(188)] = 10947,
  [SMALL_STATE(189)] = 10996,
  [SMALL_STATE(190)] = 11045,
  [SMALL_STATE(191)] = 11096,
  [SMALL_STATE(192)] = 11142,
  [SMALL_STATE(193)] = 11190,
  [SMALL_STATE(194)] = 11238,
  [SMALL_STATE(195)] = 11284,
  [SMALL_STATE(196)] = 11329,
  [SMALL_STATE(197)] = 11374,
  [SMALL_STATE(198)] = 11419,
  [SMALL_STATE(199)] = 11464,
  [SMALL_STATE(200)] = 11509,
  [SMALL_STATE(201)] = 11554,
  [SMALL_STATE(202)] = 11599,
  [SMALL_STATE(203)] = 11644,
  [SMALL_STATE(204)] = 11689,
  [SMALL_STATE(205)] = 11734,
  [SMALL_STATE(206)] = 11779,
  [SMALL_STATE(207)] = 11818,
  [SMALL_STATE(208)] = 11857,
  [SMALL_STATE(209)] = 11896,
  [SMALL_STATE(210)] = 11935,
  [SMALL_STATE(211)] = 11966,
  [SMALL_STATE(212)] = 12005,
  [SMALL_STATE(213)] = 12032,
  [SMALL_STATE(214)] = 12055,
  [SMALL_STATE(215)] = 12078,
  [SMALL_STATE(216)] = 12100,
  [SMALL_STATE(217)] = 12118,
  [SMALL_STATE(218)] = 12137,
  [SMALL_STATE(219)] = 12154,
  [SMALL_STATE(220)] = 12171,
  [SMALL_STATE(221)] = 12192,
  [SMALL_STATE(222)] = 12209,
  [SMALL_STATE(223)] = 12230,
  [SMALL_STATE(224)] = 12249,
  [SMALL_STATE(225)] = 12266,
  [SMALL_STATE(226)] = 12287,
  [SMALL_STATE(227)] = 12307,
  [SMALL_STATE(228)] = 12327,
  [SMALL_STATE(229)] = 12345,
  [SMALL_STATE(230)] = 12362,
  [SMALL_STATE(231)] = 12379,
  [SMALL_STATE(232)] = 12396,
  [SMALL_STATE(233)] = 12411,
  [SMALL_STATE(234)] = 12428,
  [SMALL_STATE(235)] = 12445,
  [SMALL_STATE(236)] = 12462,
  [SMALL_STATE(237)] = 12479,
  [SMALL_STATE(238)] = 12496,
  [SMALL_STATE(239)] = 12511,
  [SMALL_STATE(240)] = 12528,
  [SMALL_STATE(241)] = 12543,
  [SMALL_STATE(242)] = 12560,
  [SMALL_STATE(243)] = 12574,
  [SMALL_STATE(244)] = 12588,
  [SMALL_STATE(245)] = 12602,
  [SMALL_STATE(246)] = 12616,
  [SMALL_STATE(247)] = 12630,
  [SMALL_STATE(248)] = 12644,
  [SMALL_STATE(249)] = 12658,
  [SMALL_STATE(250)] = 12672,
  [SMALL_STATE(251)] = 12686,
  [SMALL_STATE(252)] = 12700,
  [SMALL_STATE(253)] = 12714,
  [SMALL_STATE(254)] = 12728,
  [SMALL_STATE(255)] = 12745,
  [SMALL_STATE(256)] = 12762,
  [SMALL_STATE(257)] = 12779,
  [SMALL_STATE(258)] = 12796,
  [SMALL_STATE(259)] = 12813,
  [SMALL_STATE(260)] = 12836,
  [SMALL_STATE(261)] = 12855,
  [SMALL_STATE(262)] = 12870,
  [SMALL_STATE(263)] = 12885,
  [SMALL_STATE(264)] = 12901,
  [SMALL_STATE(265)] = 12915,
  [SMALL_STATE(266)] = 12929,
  [SMALL_STATE(267)] = 12943,
  [SMALL_STATE(268)] = 12963,
  [SMALL_STATE(269)] = 12975,
  [SMALL_STATE(270)] = 12991,
  [SMALL_STATE(271)] = 13011,
  [SMALL_STATE(272)] = 13027,
  [SMALL_STATE(273)] = 13041,
  [SMALL_STATE(274)] = 13057,
  [SMALL_STATE(275)] = 13069,
  [SMALL_STATE(276)] = 13081,
  [SMALL_STATE(277)] = 13093,
  [SMALL_STATE(278)] = 13110,
  [SMALL_STATE(279)] = 13127,
  [SMALL_STATE(280)] = 13144,
  [SMALL_STATE(281)] = 13159,
  [SMALL_STATE(282)] = 13176,
  [SMALL_STATE(283)] = 13187,
  [SMALL_STATE(284)] = 13204,
  [SMALL_STATE(285)] = 13221,
  [SMALL_STATE(286)] = 13234,
  [SMALL_STATE(287)] = 13251,
  [SMALL_STATE(288)] = 13268,
  [SMALL_STATE(289)] = 13281,
  [SMALL_STATE(290)] = 13300,
  [SMALL_STATE(291)] = 13317,
  [SMALL_STATE(292)] = 13331,
  [SMALL_STATE(293)] = 13345,
  [SMALL_STATE(294)] = 13355,
  [SMALL_STATE(295)] = 13365,
  [SMALL_STATE(296)] = 13381,
  [SMALL_STATE(297)] = 13395,
  [SMALL_STATE(298)] = 13405,
  [SMALL_STATE(299)] = 13421,
  [SMALL_STATE(300)] = 13435,
  [SMALL_STATE(301)] = 13445,
  [SMALL_STATE(302)] = 13459,
  [SMALL_STATE(303)] = 13473,
  [SMALL_STATE(304)] = 13487,
  [SMALL_STATE(305)] = 13501,
  [SMALL_STATE(306)] = 13511,
  [SMALL_STATE(307)] = 13525,
  [SMALL_STATE(308)] = 13541,
  [SMALL_STATE(309)] = 13557,
  [SMALL_STATE(310)] = 13569,
  [SMALL_STATE(311)] = 13582,
  [SMALL_STATE(312)] = 13595,
  [SMALL_STATE(313)] = 13608,
  [SMALL_STATE(314)] = 13621,
  [SMALL_STATE(315)] = 13634,
  [SMALL_STATE(316)] = 13647,
  [SMALL_STATE(317)] = 13660,
  [SMALL_STATE(318)] = 13673,
  [SMALL_STATE(319)] = 13686,
  [SMALL_STATE(320)] = 13699,
  [SMALL_STATE(321)] = 13712,
  [SMALL_STATE(322)] = 13725,
  [SMALL_STATE(323)] = 13738,
  [SMALL_STATE(324)] = 13751,
  [SMALL_STATE(325)] = 13764,
  [SMALL_STATE(326)] = 13777,
  [SMALL_STATE(327)] = 13790,
  [SMALL_STATE(328)] = 13803,
  [SMALL_STATE(329)] = 13816,
  [SMALL_STATE(330)] = 13829,
  [SMALL_STATE(331)] = 13842,
  [SMALL_STATE(332)] = 13855,
  [SMALL_STATE(333)] = 13868,
  [SMALL_STATE(334)] = 13881,
  [SMALL_STATE(335)] = 13894,
  [SMALL_STATE(336)] = 13907,
  [SMALL_STATE(337)] = 13920,
  [SMALL_STATE(338)] = 13933,
  [SMALL_STATE(339)] = 13946,
  [SMALL_STATE(340)] = 13959,
  [SMALL_STATE(341)] = 13968,
  [SMALL_STATE(342)] = 13981,
  [SMALL_STATE(343)] = 13994,
  [SMALL_STATE(344)] = 14007,
  [SMALL_STATE(345)] = 14020,
  [SMALL_STATE(346)] = 14033,
  [SMALL_STATE(347)] = 14046,
  [SMALL_STATE(348)] = 14059,
  [SMALL_STATE(349)] = 14072,
  [SMALL_STATE(350)] = 14085,
  [SMALL_STATE(351)] = 14098,
  [SMALL_STATE(352)] = 14111,
  [SMALL_STATE(353)] = 14124,
  [SMALL_STATE(354)] = 14137,
  [SMALL_STATE(355)] = 14150,
  [SMALL_STATE(356)] = 14163,
  [SMALL_STATE(357)] = 14176,
  [SMALL_STATE(358)] = 14189,
  [SMALL_STATE(359)] = 14199,
  [SMALL_STATE(360)] = 14209,
  [SMALL_STATE(361)] = 14219,
  [SMALL_STATE(362)] = 14227,
  [SMALL_STATE(363)] = 14237,
  [SMALL_STATE(364)] = 14245,
  [SMALL_STATE(365)] = 14253,
  [SMALL_STATE(366)] = 14261,
  [SMALL_STATE(367)] = 14269,
  [SMALL_STATE(368)] = 14279,
  [SMALL_STATE(369)] = 14289,
  [SMALL_STATE(370)] = 14299,
  [SMALL_STATE(371)] = 14309,
  [SMALL_STATE(372)] = 14317,
  [SMALL_STATE(373)] = 14325,
  [SMALL_STATE(374)] = 14333,
  [SMALL_STATE(375)] = 14341,
  [SMALL_STATE(376)] = 14351,
  [SMALL_STATE(377)] = 14361,
  [SMALL_STATE(378)] = 14369,
  [SMALL_STATE(379)] = 14377,
  [SMALL_STATE(380)] = 14385,
  [SMALL_STATE(381)] = 14395,
  [SMALL_STATE(382)] = 14403,
  [SMALL_STATE(383)] = 14413,
  [SMALL_STATE(384)] = 14421,
  [SMALL_STATE(385)] = 14431,
  [SMALL_STATE(386)] = 14441,
  [SMALL_STATE(387)] = 14451,
  [SMALL_STATE(388)] = 14459,
  [SMALL_STATE(389)] = 14467,
  [SMALL_STATE(390)] = 14475,
  [SMALL_STATE(391)] = 14485,
  [SMALL_STATE(392)] = 14495,
  [SMALL_STATE(393)] = 14505,
  [SMALL_STATE(394)] = 14515,
  [SMALL_STATE(395)] = 14523,
  [SMALL_STATE(396)] = 14531,
  [SMALL_STATE(397)] = 14541,
  [SMALL_STATE(398)] = 14549,
  [SMALL_STATE(399)] = 14557,
  [SMALL_STATE(400)] = 14567,
  [SMALL_STATE(401)] = 14577,
  [SMALL_STATE(402)] = 14585,
  [SMALL_STATE(403)] = 14593,
  [SMALL_STATE(404)] = 14601,
  [SMALL_STATE(405)] = 14611,
  [SMALL_STATE(406)] = 14621,
  [SMALL_STATE(407)] = 14629,
  [SMALL_STATE(408)] = 14637,
  [SMALL_STATE(409)] = 14645,
  [SMALL_STATE(410)] = 14653,
  [SMALL_STATE(411)] = 14663,
  [SMALL_STATE(412)] = 14673,
  [SMALL_STATE(413)] = 14681,
  [SMALL_STATE(414)] = 14691,
  [SMALL_STATE(415)] = 14699,
  [SMALL_STATE(416)] = 14709,
  [SMALL_STATE(417)] = 14719,
  [SMALL_STATE(418)] = 14727,
  [SMALL_STATE(419)] = 14734,
  [SMALL_STATE(420)] = 14741,
  [SMALL_STATE(421)] = 14748,
  [SMALL_STATE(422)] = 14755,
  [SMALL_STATE(423)] = 14762,
  [SMALL_STATE(424)] = 14769,
  [SMALL_STATE(425)] = 14776,
  [SMALL_STATE(426)] = 14783,
  [SMALL_STATE(427)] = 14790,
  [SMALL_STATE(428)] = 14797,
  [SMALL_STATE(429)] = 14804,
  [SMALL_STATE(430)] = 14811,
  [SMALL_STATE(431)] = 14818,
  [SMALL_STATE(432)] = 14825,
  [SMALL_STATE(433)] = 14832,
  [SMALL_STATE(434)] = 14839,
  [SMALL_STATE(435)] = 14846,
  [SMALL_STATE(436)] = 14853,
  [SMALL_STATE(437)] = 14860,
  [SMALL_STATE(438)] = 14867,
  [SMALL_STATE(439)] = 14874,
  [SMALL_STATE(440)] = 14881,
  [SMALL_STATE(441)] = 14888,
  [SMALL_STATE(442)] = 14895,
  [SMALL_STATE(443)] = 14902,
  [SMALL_STATE(444)] = 14909,
  [SMALL_STATE(445)] = 14916,
  [SMALL_STATE(446)] = 14923,
  [SMALL_STATE(447)] = 14930,
  [SMALL_STATE(448)] = 14937,
  [SMALL_STATE(449)] = 14944,
  [SMALL_STATE(450)] = 14951,
  [SMALL_STATE(451)] = 14958,
  [SMALL_STATE(452)] = 14965,
  [SMALL_STATE(453)] = 14972,
  [SMALL_STATE(454)] = 14979,
  [SMALL_STATE(455)] = 14986,
  [SMALL_STATE(456)] = 14993,
  [SMALL_STATE(457)] = 15000,
  [SMALL_STATE(458)] = 15007,
  [SMALL_STATE(459)] = 15014,
  [SMALL_STATE(460)] = 15021,
  [SMALL_STATE(461)] = 15028,
  [SMALL_STATE(462)] = 15035,
  [SMALL_STATE(463)] = 15042,
  [SMALL_STATE(464)] = 15049,
  [SMALL_STATE(465)] = 15056,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(368),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(126),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(111),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(172),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(108),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(299),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(419),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(64),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [288] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(64),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(453),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_access_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 2), SHIFT_REPEAT(37),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 2, .production_id = 14),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 2, .production_id = 14),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 27),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 27),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_access_repeat1, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_type, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment_expr, 4), SHIFT(13),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_not, 2), SHIFT(13),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_return_expr, 2), SHIFT(13),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 29),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 29),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 28),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 28),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_augment, 2), SHIFT(13),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_destruct, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(385),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(195),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(393),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(215),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 19),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 17),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 9),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 11),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(259),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(367),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(458),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(458),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(370),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 16),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proto, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 8),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 6),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 6),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(457),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(456),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 2, .production_id = 14),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(427),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(445),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pattern, 1), SHIFT(362),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(282),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(301),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(399),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(187),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(180),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(72),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(23),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(157),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 18),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 20),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 21),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 31),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 22),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 24),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 23),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 3, .production_id = 14),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 12),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 30),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 3),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 10),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 3),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 1),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1024] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
