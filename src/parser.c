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
#define STATE_COUNT 443
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 164
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
  aux_sym_block_repeat1 = 157,
  aux_sym_destruct_repeat1 = 158,
  aux_sym_lambda_repeat1 = 159,
  aux_sym_call_expr_repeat1 = 160,
  aux_sym_type_parameters_repeat1 = 161,
  aux_sym_if_expr_repeat1 = 162,
  aux_sym__string_literal_repeat1 = 163,
  alias_sym_field_identifier = 164,
  alias_sym_type_identifier = 165,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 5,
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
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 17,
  [34] = 34,
  [35] = 35,
  [36] = 18,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 40,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 43,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 18,
  [61] = 61,
  [62] = 20,
  [63] = 17,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 13,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 66,
  [72] = 70,
  [73] = 14,
  [74] = 15,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 76,
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
  [94] = 19,
  [95] = 95,
  [96] = 96,
  [97] = 28,
  [98] = 31,
  [99] = 30,
  [100] = 24,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 27,
  [113] = 32,
  [114] = 114,
  [115] = 35,
  [116] = 22,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 25,
  [122] = 76,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 128,
  [132] = 132,
  [133] = 132,
  [134] = 134,
  [135] = 130,
  [136] = 129,
  [137] = 129,
  [138] = 128,
  [139] = 139,
  [140] = 127,
  [141] = 127,
  [142] = 126,
  [143] = 134,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 144,
  [148] = 148,
  [149] = 149,
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
  [161] = 153,
  [162] = 153,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 163,
  [170] = 159,
  [171] = 158,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 177,
  [179] = 179,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 173,
  [186] = 173,
  [187] = 187,
  [188] = 188,
  [189] = 180,
  [190] = 190,
  [191] = 191,
  [192] = 182,
  [193] = 174,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 199,
  [202] = 200,
  [203] = 203,
  [204] = 199,
  [205] = 205,
  [206] = 206,
  [207] = 198,
  [208] = 198,
  [209] = 200,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 210,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 61,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
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
  [240] = 218,
  [241] = 241,
  [242] = 221,
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
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 217,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 110,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 272,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 89,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 279,
  [283] = 280,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 79,
  [288] = 288,
  [289] = 289,
  [290] = 87,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 280,
  [295] = 293,
  [296] = 85,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 300,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 306,
  [317] = 314,
  [318] = 318,
  [319] = 305,
  [320] = 307,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 304,
  [325] = 302,
  [326] = 301,
  [327] = 327,
  [328] = 313,
  [329] = 329,
  [330] = 312,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 329,
  [336] = 331,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 308,
  [341] = 311,
  [342] = 91,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 101,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 92,
  [360] = 344,
  [361] = 114,
  [362] = 362,
  [363] = 119,
  [364] = 364,
  [365] = 117,
  [366] = 366,
  [367] = 108,
  [368] = 368,
  [369] = 369,
  [370] = 368,
  [371] = 371,
  [372] = 372,
  [373] = 372,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 344,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 382,
  [384] = 384,
  [385] = 380,
  [386] = 386,
  [387] = 347,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 376,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 245,
  [415] = 415,
  [416] = 241,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 411,
  [421] = 421,
  [422] = 409,
  [423] = 401,
  [424] = 424,
  [425] = 425,
  [426] = 401,
  [427] = 427,
  [428] = 428,
  [429] = 404,
  [430] = 403,
  [431] = 431,
  [432] = 408,
  [433] = 433,
  [434] = 236,
  [435] = 425,
  [436] = 421,
  [437] = 437,
  [438] = 406,
  [439] = 439,
  [440] = 238,
  [441] = 244,
  [442] = 442,
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
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 214},
  [61] = {.lex_state = 214},
  [62] = {.lex_state = 214},
  [63] = {.lex_state = 214},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 214},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 214},
  [74] = {.lex_state = 214},
  [75] = {.lex_state = 214},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 9},
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
  [123] = {.lex_state = 214},
  [124] = {.lex_state = 214},
  [125] = {.lex_state = 214},
  [126] = {.lex_state = 214},
  [127] = {.lex_state = 214},
  [128] = {.lex_state = 214},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 214},
  [131] = {.lex_state = 214},
  [132] = {.lex_state = 214},
  [133] = {.lex_state = 214},
  [134] = {.lex_state = 214},
  [135] = {.lex_state = 214},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 214},
  [139] = {.lex_state = 214},
  [140] = {.lex_state = 214},
  [141] = {.lex_state = 214},
  [142] = {.lex_state = 214},
  [143] = {.lex_state = 214},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 214},
  [146] = {.lex_state = 214},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 214},
  [149] = {.lex_state = 214},
  [150] = {.lex_state = 214},
  [151] = {.lex_state = 214},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 214},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 214},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 214},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
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
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 214},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 214},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 214},
  [227] = {.lex_state = 214},
  [228] = {.lex_state = 214},
  [229] = {.lex_state = 214},
  [230] = {.lex_state = 214},
  [231] = {.lex_state = 214},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 214},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 214},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 214},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 8},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 8},
  [326] = {.lex_state = 8},
  [327] = {.lex_state = 8},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 8},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 8},
  [343] = {.lex_state = 8},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 8},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 6},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 8},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 6},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 6},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 6},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 6},
  [385] = {.lex_state = 6},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 6},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 8},
  [400] = {.lex_state = 214},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 2},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 214},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 2},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 214},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 214},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 2},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 2},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 6},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 2},
  [430] = {.lex_state = 2},
  [431] = {.lex_state = 214},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 2},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
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
    [sym_source_file] = STATE(433),
    [sym__top_level] = STATE(165),
    [sym_import] = STATE(165),
    [sym_attribute] = STATE(431),
    [sym_extern] = STATE(439),
    [sym_func_header] = STATE(315),
    [sym_func_proto] = STATE(165),
    [sym_function_definition] = STATE(165),
    [sym_struct_definition] = STATE(165),
    [aux_sym_source_file_repeat1] = STATE(165),
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
  [0] = 33,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(195), 1,
      sym_pattern,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(411), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(273), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(7), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(21), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(138), 10,
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
  [125] = 33,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(195), 1,
      sym_pattern,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(411), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(273), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(21), 5,
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
  [250] = 33,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_set,
    ACTIONS(74), 1,
      anon_sym_return,
    ACTIONS(77), 1,
      anon_sym_not,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(89), 1,
      anon_sym_foreach,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      aux_sym_int_lit_token1,
    ACTIONS(98), 1,
      sym_float_lit,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    STATE(195), 1,
      sym_pattern,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(411), 1,
      sym_type,
    ACTIONS(80), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(273), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(21), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(149), 10,
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
  [375] = 33,
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
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__string_literal,
    STATE(195), 1,
      sym_pattern,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(411), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(273), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(21), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(140), 10,
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
  [500] = 33,
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
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__string_literal,
    STATE(195), 1,
      sym_pattern,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(411), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(273), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(21), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(127), 10,
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
  [625] = 33,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(195), 1,
      sym_pattern,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(411), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(273), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(21), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(141), 10,
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
  [750] = 33,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(195), 1,
      sym_pattern,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(411), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(273), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(21), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(128), 10,
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
  [875] = 33,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(316), 1,
      sym_pattern,
    STATE(317), 1,
      aux_sym_lambda_repeat1,
    STATE(411), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(150), 15,
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
  [998] = 33,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(306), 1,
      sym_pattern,
    STATE(314), 1,
      aux_sym_lambda_repeat1,
    STATE(411), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(150), 15,
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
  [1121] = 28,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(252), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
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
  [1229] = 28,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(252), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
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
  [1337] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_else,
    STATE(30), 1,
      sym_else_expr,
    STATE(14), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(143), 15,
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
    ACTIONS(145), 23,
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
  [1393] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_else,
    STATE(35), 1,
      sym_else_expr,
    STATE(15), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(149), 15,
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
    ACTIONS(151), 23,
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
  [1449] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_else,
    STATE(15), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(153), 15,
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
    ACTIONS(155), 23,
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
  [1502] = 22,
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
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    STATE(323), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(125), 15,
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
  [1588] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 15,
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
    ACTIONS(170), 24,
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
  [1635] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 15,
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
    ACTIONS(174), 24,
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
  [1682] = 3,
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
  [1729] = 3,
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
  [1776] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(186), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(190), 11,
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
    ACTIONS(188), 12,
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
  [1826] = 3,
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
  [1872] = 20,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [1952] = 3,
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
    ACTIONS(200), 23,
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
  [1998] = 3,
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
    ACTIONS(204), 23,
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
  [2044] = 3,
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
  [2090] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 15,
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
    ACTIONS(208), 23,
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
  [2136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 15,
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
    ACTIONS(212), 23,
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
  [2182] = 20,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [2262] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 15,
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
    ACTIONS(218), 23,
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
  [2308] = 3,
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
  [2354] = 3,
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
  [2400] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 15,
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
    ACTIONS(170), 23,
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
  [2446] = 20,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [2526] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(230), 15,
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
    ACTIONS(232), 23,
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
  [2572] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 15,
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
    ACTIONS(174), 23,
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
  [2618] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [2695] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(134), 15,
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
  [2772] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(130), 15,
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
  [2849] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(133), 15,
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
  [2926] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [3003] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(143), 15,
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
  [3080] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(142), 15,
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
  [3157] = 20,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    STATE(146), 1,
      sym_int_lit,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(124), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(154), 15,
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
  [3236] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(103), 15,
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
  [3313] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(105), 15,
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
  [3390] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [3467] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [3544] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(96), 15,
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
  [3621] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(104), 15,
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
  [3698] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(132), 15,
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
  [3775] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [3852] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [3929] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [4006] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(126), 15,
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
  [4083] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [4160] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(95), 15,
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
  [4237] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(118), 15,
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
  [4314] = 19,
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
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(119), 3,
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
  [4391] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(172), 29,
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
  [4435] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(91), 1,
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
  [4483] = 3,
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
  [4527] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(168), 29,
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
  [4571] = 23,
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
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(325), 1,
      sym_type_parameter,
    STATE(326), 1,
      aux_sym_type_parameters_repeat1,
    STATE(367), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(354), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(363), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4651] = 23,
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
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(301), 1,
      aux_sym_type_parameters_repeat1,
    STATE(302), 1,
      sym_type_parameter,
    STATE(367), 1,
      sym__string_literal,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(354), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(363), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4731] = 21,
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
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(367), 1,
      sym__string_literal,
    STATE(397), 1,
      sym_type_parameter,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(354), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(363), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4805] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_else,
    STATE(99), 1,
      sym_else_expr,
    STATE(73), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(145), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(143), 20,
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
  [4849] = 21,
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
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(367), 1,
      sym__string_literal,
    STATE(397), 1,
      sym_type_parameter,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(354), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(363), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4923] = 21,
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
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(367), 1,
      sym__string_literal,
    STATE(397), 1,
      sym_type_parameter,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(354), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(363), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4997] = 21,
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
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(367), 1,
      sym__string_literal,
    STATE(397), 1,
      sym_type_parameter,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(354), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(363), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5071] = 21,
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
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(367), 1,
      sym__string_literal,
    STATE(397), 1,
      sym_type_parameter,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(354), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(363), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5145] = 21,
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
    ACTIONS(278), 1,
      anon_sym_GT,
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(367), 1,
      sym__string_literal,
    STATE(397), 1,
      sym_type_parameter,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(354), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(363), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5219] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_else,
    STATE(115), 1,
      sym_else_expr,
    STATE(74), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(151), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(149), 20,
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
  [5263] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      anon_sym_else,
    STATE(74), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(155), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(153), 20,
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
  [5304] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LT,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_type_parameters,
    STATE(84), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(188), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(184), 20,
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
  [5349] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_AMP,
    STATE(83), 1,
      sym_type_parameters,
    STATE(84), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(299), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(184), 10,
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
    ACTIONS(188), 10,
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
  [5402] = 20,
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
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(367), 1,
      sym__string_literal,
    STATE(397), 1,
      sym_type_parameter,
    ACTIONS(246), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(252), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(354), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(363), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5473] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(188), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(184), 20,
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
  [5513] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(301), 22,
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
  [5549] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(305), 22,
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
  [5585] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      sym_type_parameters,
    STATE(84), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(288), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(188), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(184), 16,
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
  [5635] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(309), 22,
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
  [5671] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(315), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(313), 22,
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
  [5707] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(319), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(317), 20,
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
  [5747] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(323), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(321), 22,
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
  [5783] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(327), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(325), 22,
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
  [5819] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(331), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(329), 22,
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
  [5855] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(333), 22,
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
  [5891] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(337), 22,
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
  [5927] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(343), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(341), 20,
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
  [5967] = 3,
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
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6002] = 3,
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
  [6037] = 3,
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
      anon_sym_LBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6072] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(176), 21,
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
  [6107] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(377), 1,
      anon_sym_EQ,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(360), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [6161] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(387), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(385), 12,
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
  [6205] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(210), 20,
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
  [6239] = 3,
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
  [6273] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(216), 20,
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
  [6307] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(198), 20,
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
  [6341] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(391), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(389), 20,
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
  [6375] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(393), 20,
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
  [6409] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(385), 20,
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
  [6443] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(397), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [6497] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(387), 1,
      anon_sym_EQ,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(385), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_or,
  [6547] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_EQ,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(385), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [6595] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(387), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(385), 14,
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
  [6637] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(404), 20,
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
  [6671] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(387), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(385), 16,
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
  [6709] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(408), 20,
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
  [6743] = 3,
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
  [6777] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(206), 20,
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
  [6811] = 3,
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
  [6845] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(416), 20,
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
  [6879] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(230), 20,
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
  [6913] = 3,
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
  [6947] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(420), 20,
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
  [6981] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_EQ,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(424), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7035] = 3,
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
  [7069] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
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
  [7123] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(202), 20,
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
  [7157] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      sym_type_parameters,
    STATE(84), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(188), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(184), 15,
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
  [7202] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_LT,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      sym_type_parameters,
    STATE(84), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(188), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(184), 15,
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
  [7244] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(188), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(184), 15,
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
  [7281] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7334] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7384] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7434] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7484] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_POUND,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    ACTIONS(462), 1,
      anon_sym_set,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(308), 1,
      aux_sym_destruct_repeat1,
    STATE(320), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [7546] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7596] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7646] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7696] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7746] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7796] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7846] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_POUND,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    ACTIONS(472), 1,
      anon_sym_set,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(307), 1,
      sym_pattern,
    STATE(340), 1,
      aux_sym_destruct_repeat1,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [7908] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_POUND,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_set,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(307), 1,
      sym_pattern,
    STATE(340), 1,
      aux_sym_destruct_repeat1,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [7970] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8020] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(476), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8068] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8118] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8168] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_block,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8218] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8268] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    ACTIONS(484), 1,
      anon_sym_set,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(312), 1,
      sym_pattern,
    STATE(313), 1,
      aux_sym_destruct_repeat1,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [8327] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_EQ,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8374] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    ACTIONS(433), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(431), 15,
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
  [8405] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    ACTIONS(490), 1,
      anon_sym_set,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(328), 1,
      aux_sym_destruct_repeat1,
    STATE(330), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [8464] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8511] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8558] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8605] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8652] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(498), 1,
      anon_sym_GT,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(205), 1,
      sym__type_identifier,
    STATE(211), 1,
      sym_region_specifier,
    STATE(225), 1,
      sym_scoped_type_identifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(334), 1,
      aux_sym_generic_parameters_repeat1,
    STATE(337), 1,
      sym_generic_parameter,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(349), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [8708] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(208), 1,
      sym_type_parameters,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(504), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8760] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      anon_sym_and,
    ACTIONS(381), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(373), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(375), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8804] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(510), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(512), 11,
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
  [8831] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(516), 11,
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
  [8858] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(518), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(520), 11,
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
  [8885] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [8935] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [8985] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(526), 1,
      anon_sym_GT,
    STATE(205), 1,
      sym__type_identifier,
    STATE(211), 1,
      sym_region_specifier,
    STATE(225), 1,
      sym_scoped_type_identifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(343), 1,
      sym_generic_parameter,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(349), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9035] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_in,
    STATE(208), 1,
      sym_type_parameters,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
  [9085] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_EQ,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      anon_sym_DOT,
    ACTIONS(533), 1,
      anon_sym_AMP,
    ACTIONS(536), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      sym_identifier,
    STATE(208), 1,
      sym_type_parameters,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
  [9135] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [9185] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_GT,
    STATE(205), 1,
      sym__type_identifier,
    STATE(211), 1,
      sym_region_specifier,
    STATE(225), 1,
      sym_scoped_type_identifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(343), 1,
      sym_generic_parameter,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(349), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9235] = 13,
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
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    STATE(315), 1,
      sym_func_header,
    STATE(431), 1,
      sym_attribute,
    STATE(439), 1,
      sym_extern,
    ACTIONS(13), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(168), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [9281] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(548), 1,
      anon_sym_set,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(346), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [9331] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(550), 1,
      anon_sym_GT,
    STATE(205), 1,
      sym__type_identifier,
    STATE(211), 1,
      sym_region_specifier,
    STATE(225), 1,
      sym_scoped_type_identifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(343), 1,
      sym_generic_parameter,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(349), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9381] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    ACTIONS(554), 1,
      anon_sym_import,
    ACTIONS(557), 1,
      anon_sym_POUND,
    ACTIONS(560), 1,
      anon_sym_extern,
    ACTIONS(566), 1,
      anon_sym_export,
    ACTIONS(569), 1,
      anon_sym_func,
    ACTIONS(572), 1,
      anon_sym_struct,
    STATE(315), 1,
      sym_func_header,
    STATE(431), 1,
      sym_attribute,
    STATE(439), 1,
      sym_extern,
    ACTIONS(563), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(168), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [9427] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [9477] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [9527] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [9577] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(357), 1,
      sym_type,
    ACTIONS(581), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9622] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(204), 1,
      sym_type_parameters,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(250), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9669] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(305), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [9716] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(205), 1,
      sym__type_identifier,
    STATE(211), 1,
      sym_region_specifier,
    STATE(225), 1,
      sym_scoped_type_identifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(343), 1,
      sym_generic_parameter,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(349), 2,
      sym_region_parameter,
      sym_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9763] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [9810] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(330), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [9857] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(312), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [9904] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(362), 1,
      sym_type,
    ACTIONS(587), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9949] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(207), 1,
      sym_type_parameters,
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [9996] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(208), 1,
      sym_type_parameters,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
  [10043] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(414), 1,
      sym_destruct,
    STATE(420), 1,
      sym_type,
    STATE(438), 1,
      sym_pattern,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [10090] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(390), 1,
      sym_type,
    ACTIONS(593), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10135] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(374), 1,
      sym_type,
    ACTIONS(595), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10180] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(201), 1,
      sym_type_parameters,
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(250), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10227] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(199), 1,
      sym_type_parameters,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(250), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
  [10274] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(355), 1,
      sym_type,
    ACTIONS(597), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10319] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(386), 1,
      sym_type,
    ACTIONS(599), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10364] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_type_parameters,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10411] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(388), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [10458] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(394), 1,
      sym_type,
    ACTIONS(601), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10503] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(406), 1,
      sym_pattern,
    STATE(414), 1,
      sym_destruct,
    STATE(420), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [10550] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_destruct,
    STATE(319), 1,
      sym_pattern,
    STATE(411), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [10597] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(389), 1,
      sym_type,
    ACTIONS(603), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10642] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(405), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
  [10686] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    ACTIONS(607), 1,
      anon_sym_BANG,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(442), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10730] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(393), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10771] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10812] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(249), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
  [10853] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(252), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
  [10894] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(249), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10935] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(252), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [10976] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_Ref,
    ACTIONS(613), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 12,
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
  [11003] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(249), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11044] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(621), 1,
      anon_sym_Ref,
    STATE(246), 1,
      sym_generic_parameters,
    STATE(399), 1,
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
  [11075] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(410), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11116] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(211), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11157] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(210), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(248), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
  [11198] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_region_specifier,
    STATE(243), 1,
      sym_generic_type,
    STATE(252), 1,
      sym_type,
    STATE(225), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(254), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11239] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(235), 1,
      sym_generic_type,
    STATE(232), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(247), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(421), 2,
      sym_scoped_identifier,
      sym__path,
  [11274] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_AMP,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(235), 1,
      sym_generic_type,
    STATE(232), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(247), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11309] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(627), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(625), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [11332] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(583), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(235), 1,
      sym_generic_type,
    STATE(232), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(247), 2,
      sym_reference_type,
      sym_array_type,
    STATE(256), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(436), 2,
      sym_scoped_identifier,
      sym__path,
  [11367] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(633), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(631), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [11390] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 11,
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
  [11407] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 11,
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
  [11424] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(609), 5,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11445] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(609), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [11466] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(342), 1,
      sym_int_type,
    ACTIONS(236), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(644), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
  [11487] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(646), 11,
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
  [11504] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(609), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [11525] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(653), 11,
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
  [11542] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 11,
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
  [11559] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(659), 1,
      anon_sym_export,
    ACTIONS(657), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [11576] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    STATE(246), 1,
      sym_generic_parameters,
    ACTIONS(617), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11595] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 1,
      anon_sym_export,
    ACTIONS(661), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [11612] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_export,
    ACTIONS(665), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [11629] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_export,
    ACTIONS(669), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [11646] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_export,
    ACTIONS(673), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [11663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_export,
    ACTIONS(677), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [11680] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_export,
    ACTIONS(681), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [11697] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    STATE(246), 1,
      sym_generic_parameters,
    ACTIONS(685), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11716] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      anon_sym_DOT,
    ACTIONS(609), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11733] = 3,
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
  [11750] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(691), 1,
      anon_sym_DOT,
    ACTIONS(685), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11766] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11780] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11794] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(697), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11808] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11822] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(639), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [11838] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11852] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(648), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [11868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(691), 1,
      anon_sym_DOT,
    ACTIONS(617), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11884] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(703), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11898] = 2,
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
  [11912] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11926] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11939] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11952] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11965] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11978] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(715), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12004] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(721), 1,
      anon_sym_STAR,
    ACTIONS(723), 1,
      sym_identifier,
    STATE(418), 1,
      sym_import_wildcard,
    STATE(419), 1,
      sym_import_path,
    STATE(358), 2,
      sym_scoped_identifier,
      sym__path,
  [12027] = 2,
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
  [12040] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_ro,
    ACTIONS(731), 1,
      sym_identifier,
    ACTIONS(727), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(725), 3,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [12059] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12072] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12084] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12096] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(739), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_generic_parameters,
    STATE(412), 1,
      sym_mutability,
    ACTIONS(741), 2,
      anon_sym_mut,
      anon_sym_imm,
  [12116] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(743), 1,
      anon_sym_LBRACE,
    STATE(291), 1,
      sym_generic_parameters,
    STATE(407), 1,
      sym_mutability,
    ACTIONS(741), 2,
      anon_sym_mut,
      anon_sym_imm,
  [12136] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DOT,
    ACTIONS(609), 4,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
  [12152] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(745), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12164] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(196), 1,
      sym__field_identifier,
    STATE(275), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [12181] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym__field_identifier,
    STATE(275), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [12198] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym__field_identifier,
    STATE(270), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [12215] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(196), 1,
      sym__field_identifier,
    STATE(264), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [12232] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_parameters_repeat1,
    STATE(339), 1,
      sym_parameter,
  [12251] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(763), 1,
      anon_sym_BANG,
    STATE(413), 1,
      sym_attribute_name,
    ACTIONS(761), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [12266] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12277] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym__field_identifier,
    STATE(275), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [12294] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym__field_identifier,
    STATE(263), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [12311] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(769), 1,
      anon_sym_DOT,
    ACTIONS(705), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [12324] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(705), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_identifier,
  [12337] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym__field_identifier,
    STATE(276), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [12354] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    ACTIONS(776), 1,
      sym_identifier,
    STATE(196), 1,
      sym__field_identifier,
    STATE(275), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [12371] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym__field_identifier,
    STATE(275), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [12388] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym_mutability,
    ACTIONS(741), 2,
      anon_sym_mut,
      anon_sym_imm,
  [12402] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12412] = 4,
    ACTIONS(781), 1,
      sym_line_comment,
    ACTIONS(785), 1,
      anon_sym_DQUOTE,
    STATE(295), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(783), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [12426] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      aux_sym_int_lit_token1,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(401), 2,
      sym_int_lit,
      sym__type_identifier,
  [12440] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(400), 1,
      sym_attribute_name,
    ACTIONS(761), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [12452] = 4,
    ACTIONS(781), 1,
      sym_line_comment,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
    STATE(293), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(791), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [12466] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      aux_sym_int_lit_token1,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(423), 2,
      sym_int_lit,
      sym__type_identifier,
  [12480] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_parameters,
    STATE(381), 1,
      sym_generic_parameters,
  [12496] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_parameters,
    STATE(353), 1,
      sym_generic_parameters,
  [12512] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_parameters,
    STATE(351), 1,
      sym_generic_parameters,
  [12528] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12538] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LT,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_parameters,
    STATE(377), 1,
      sym_generic_parameters,
  [12554] = 4,
    ACTIONS(781), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(797), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [12568] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12578] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(739), 1,
      anon_sym_LBRACE,
    STATE(412), 1,
      sym_mutability,
    ACTIONS(741), 2,
      anon_sym_mut,
      anon_sym_imm,
  [12592] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12602] = 4,
    ACTIONS(781), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(802), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [12616] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      aux_sym_int_lit_token1,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(426), 2,
      sym_int_lit,
      sym__type_identifier,
  [12630] = 4,
    ACTIONS(781), 1,
      sym_line_comment,
    ACTIONS(806), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(802), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [12644] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(321), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [12654] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_call_expr_repeat1,
  [12667] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_parameters_repeat1,
  [12680] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12689] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [12702] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_GT,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_type_parameters_repeat1,
  [12715] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_GT,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_type_parameters_repeat1,
  [12728] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [12741] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      anon_sym_GT,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_type_parameters_repeat1,
  [12754] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      aux_sym_destruct_repeat1,
  [12767] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_lambda_repeat1,
  [12780] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(328), 1,
      aux_sym_destruct_repeat1,
  [12793] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [12806] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_call_expr_repeat1,
  [12819] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym__string_literal,
    STATE(402), 1,
      sym_string_literal,
  [12832] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_lambda_repeat1,
  [12845] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_destruct_repeat1,
  [12858] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [12871] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_lambda_repeat1,
  [12884] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      sym_block,
  [12897] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_lambda_repeat1,
  [12910] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_lambda_repeat1,
  [12923] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_parameters_repeat1,
  [12936] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_destruct_repeat1,
  [12949] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      aux_sym_destruct_repeat1,
  [12962] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 1,
      anon_sym_GT,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_type_parameters_repeat1,
  [12975] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [12988] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_call_expr_repeat1,
  [13001] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      anon_sym_GT,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_type_parameters_repeat1,
  [13014] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_GT,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_type_parameters_repeat1,
  [13027] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_GT,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_type_parameters_repeat1,
  [13040] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(526), 1,
      anon_sym_GT,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_generic_parameters_repeat1,
  [13053] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [13066] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [13079] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
    STATE(335), 1,
      aux_sym_destruct_repeat1,
  [13092] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    ACTIONS(862), 1,
      anon_sym_if,
    STATE(32), 1,
      sym_block,
  [13105] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(864), 1,
      anon_sym_GT,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_generic_parameters_repeat1,
  [13118] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_lambda_repeat1,
  [13131] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      anon_sym_GT,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_generic_parameters_repeat1,
  [13144] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [13157] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    ACTIONS(876), 1,
      anon_sym_if,
    STATE(113), 1,
      sym_block,
  [13170] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      anon_sym_GT,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym_generic_parameters_repeat1,
  [13183] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_parameters_repeat1,
  [13196] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_parameters_repeat1,
  [13209] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_destruct_repeat1,
  [13222] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_lambda_repeat1,
  [13235] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13243] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(864), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13251] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(882), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
  [13261] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      anon_sym_func,
  [13271] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(852), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13279] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [13289] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(759), 1,
      sym_identifier,
    STATE(391), 1,
      sym_parameter,
  [13299] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13307] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13315] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_parameters,
  [13325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(260), 1,
      sym__type_identifier,
  [13335] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_parameters,
  [13345] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(892), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13353] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(894), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13361] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(639), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [13369] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(896), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13377] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    ACTIONS(900), 1,
      anon_sym_DOT,
  [13387] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13395] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      anon_sym_POUND,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
  [13405] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13413] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(904), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13421] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(431), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13429] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(906), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13437] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13445] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13453] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13461] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(908), 1,
      sym_identifier,
    STATE(239), 1,
      sym__type_identifier,
  [13471] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(910), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [13479] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(912), 1,
      sym_identifier,
    STATE(239), 1,
      sym__type_identifier,
  [13489] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(259), 1,
      sym__type_identifier,
  [13499] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_block,
  [13509] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [13519] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13527] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(237), 1,
      sym__type_identifier,
  [13537] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
  [13547] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_parameters,
  [13557] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(916), 1,
      anon_sym_POUND,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
  [13567] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(920), 1,
      sym_identifier,
    STATE(111), 1,
      sym__field_identifier,
  [13577] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(922), 1,
      sym_identifier,
    STATE(237), 1,
      sym__type_identifier,
  [13587] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_parameters,
  [13597] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_block,
  [13607] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [13617] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(924), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [13625] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(926), 1,
      sym_identifier,
    STATE(237), 1,
      sym__type_identifier,
  [13635] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(928), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13643] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_block,
  [13653] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(930), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13661] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(932), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13669] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(934), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13677] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(810), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13685] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [13693] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(936), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13701] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(938), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13709] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
  [13719] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(940), 1,
      anon_sym_STAR,
    ACTIONS(942), 1,
      sym_identifier,
  [13729] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13737] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(944), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13745] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(946), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13753] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(948), 1,
      anon_sym_struct,
  [13760] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(950), 1,
      anon_sym_RBRACK,
  [13767] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
  [13774] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(954), 1,
      anon_sym_EQ_GT,
  [13781] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(956), 1,
      anon_sym_EQ_GT,
  [13788] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(958), 1,
      anon_sym_EQ,
  [13795] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(960), 1,
      anon_sym_in,
  [13802] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(739), 1,
      anon_sym_LBRACE,
  [13809] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      anon_sym_if,
  [13816] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(962), 1,
      anon_sym_EQ_GT,
  [13823] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(964), 1,
      anon_sym_SEMI,
  [13830] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(966), 1,
      anon_sym_LBRACK,
  [13837] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      anon_sym_LBRACE,
  [13844] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(968), 1,
      anon_sym_struct,
  [13851] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_in,
  [13858] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      anon_sym_struct,
  [13865] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_in,
  [13872] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(972), 1,
      anon_sym_SEMI,
  [13879] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_SEMI,
  [13886] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(974), 1,
      anon_sym_SEMI,
  [13893] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(976), 1,
      anon_sym_LBRACK,
  [13900] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(769), 1,
      anon_sym_DOT,
  [13907] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(978), 1,
      anon_sym_EQ_GT,
  [13914] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
  [13921] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      anon_sym_SEMI,
  [13928] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_EQ_GT,
  [13935] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
  [13942] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 1,
      sym_identifier,
  [13949] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(990), 1,
      anon_sym_func,
  [13956] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 1,
      anon_sym_EQ_GT,
  [13963] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(994), 1,
      anon_sym_EQ_GT,
  [13970] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      anon_sym_struct,
  [13977] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(876), 1,
      anon_sym_if,
  [13984] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(998), 1,
      ts_builtin_sym_end,
  [13991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_in,
  [13998] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_EQ_GT,
  [14005] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_DOT,
  [14012] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      anon_sym_LBRACE,
  [14019] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_in,
  [14026] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1008), 1,
      anon_sym_func,
  [14033] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(697), 1,
      anon_sym_in,
  [14040] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(703), 1,
      anon_sym_in,
  [14047] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 125,
  [SMALL_STATE(4)] = 250,
  [SMALL_STATE(5)] = 375,
  [SMALL_STATE(6)] = 500,
  [SMALL_STATE(7)] = 625,
  [SMALL_STATE(8)] = 750,
  [SMALL_STATE(9)] = 875,
  [SMALL_STATE(10)] = 998,
  [SMALL_STATE(11)] = 1121,
  [SMALL_STATE(12)] = 1229,
  [SMALL_STATE(13)] = 1337,
  [SMALL_STATE(14)] = 1393,
  [SMALL_STATE(15)] = 1449,
  [SMALL_STATE(16)] = 1502,
  [SMALL_STATE(17)] = 1588,
  [SMALL_STATE(18)] = 1635,
  [SMALL_STATE(19)] = 1682,
  [SMALL_STATE(20)] = 1729,
  [SMALL_STATE(21)] = 1776,
  [SMALL_STATE(22)] = 1826,
  [SMALL_STATE(23)] = 1872,
  [SMALL_STATE(24)] = 1952,
  [SMALL_STATE(25)] = 1998,
  [SMALL_STATE(26)] = 2044,
  [SMALL_STATE(27)] = 2090,
  [SMALL_STATE(28)] = 2136,
  [SMALL_STATE(29)] = 2182,
  [SMALL_STATE(30)] = 2262,
  [SMALL_STATE(31)] = 2308,
  [SMALL_STATE(32)] = 2354,
  [SMALL_STATE(33)] = 2400,
  [SMALL_STATE(34)] = 2446,
  [SMALL_STATE(35)] = 2526,
  [SMALL_STATE(36)] = 2572,
  [SMALL_STATE(37)] = 2618,
  [SMALL_STATE(38)] = 2695,
  [SMALL_STATE(39)] = 2772,
  [SMALL_STATE(40)] = 2849,
  [SMALL_STATE(41)] = 2926,
  [SMALL_STATE(42)] = 3003,
  [SMALL_STATE(43)] = 3080,
  [SMALL_STATE(44)] = 3157,
  [SMALL_STATE(45)] = 3236,
  [SMALL_STATE(46)] = 3313,
  [SMALL_STATE(47)] = 3390,
  [SMALL_STATE(48)] = 3467,
  [SMALL_STATE(49)] = 3544,
  [SMALL_STATE(50)] = 3621,
  [SMALL_STATE(51)] = 3698,
  [SMALL_STATE(52)] = 3775,
  [SMALL_STATE(53)] = 3852,
  [SMALL_STATE(54)] = 3929,
  [SMALL_STATE(55)] = 4006,
  [SMALL_STATE(56)] = 4083,
  [SMALL_STATE(57)] = 4160,
  [SMALL_STATE(58)] = 4237,
  [SMALL_STATE(59)] = 4314,
  [SMALL_STATE(60)] = 4391,
  [SMALL_STATE(61)] = 4435,
  [SMALL_STATE(62)] = 4483,
  [SMALL_STATE(63)] = 4527,
  [SMALL_STATE(64)] = 4571,
  [SMALL_STATE(65)] = 4651,
  [SMALL_STATE(66)] = 4731,
  [SMALL_STATE(67)] = 4805,
  [SMALL_STATE(68)] = 4849,
  [SMALL_STATE(69)] = 4923,
  [SMALL_STATE(70)] = 4997,
  [SMALL_STATE(71)] = 5071,
  [SMALL_STATE(72)] = 5145,
  [SMALL_STATE(73)] = 5219,
  [SMALL_STATE(74)] = 5263,
  [SMALL_STATE(75)] = 5304,
  [SMALL_STATE(76)] = 5349,
  [SMALL_STATE(77)] = 5402,
  [SMALL_STATE(78)] = 5473,
  [SMALL_STATE(79)] = 5513,
  [SMALL_STATE(80)] = 5549,
  [SMALL_STATE(81)] = 5585,
  [SMALL_STATE(82)] = 5635,
  [SMALL_STATE(83)] = 5671,
  [SMALL_STATE(84)] = 5707,
  [SMALL_STATE(85)] = 5747,
  [SMALL_STATE(86)] = 5783,
  [SMALL_STATE(87)] = 5819,
  [SMALL_STATE(88)] = 5855,
  [SMALL_STATE(89)] = 5891,
  [SMALL_STATE(90)] = 5927,
  [SMALL_STATE(91)] = 5967,
  [SMALL_STATE(92)] = 6002,
  [SMALL_STATE(93)] = 6037,
  [SMALL_STATE(94)] = 6072,
  [SMALL_STATE(95)] = 6107,
  [SMALL_STATE(96)] = 6161,
  [SMALL_STATE(97)] = 6205,
  [SMALL_STATE(98)] = 6239,
  [SMALL_STATE(99)] = 6273,
  [SMALL_STATE(100)] = 6307,
  [SMALL_STATE(101)] = 6341,
  [SMALL_STATE(102)] = 6375,
  [SMALL_STATE(103)] = 6409,
  [SMALL_STATE(104)] = 6443,
  [SMALL_STATE(105)] = 6497,
  [SMALL_STATE(106)] = 6547,
  [SMALL_STATE(107)] = 6595,
  [SMALL_STATE(108)] = 6637,
  [SMALL_STATE(109)] = 6671,
  [SMALL_STATE(110)] = 6709,
  [SMALL_STATE(111)] = 6743,
  [SMALL_STATE(112)] = 6777,
  [SMALL_STATE(113)] = 6811,
  [SMALL_STATE(114)] = 6845,
  [SMALL_STATE(115)] = 6879,
  [SMALL_STATE(116)] = 6913,
  [SMALL_STATE(117)] = 6947,
  [SMALL_STATE(118)] = 6981,
  [SMALL_STATE(119)] = 7035,
  [SMALL_STATE(120)] = 7069,
  [SMALL_STATE(121)] = 7123,
  [SMALL_STATE(122)] = 7157,
  [SMALL_STATE(123)] = 7202,
  [SMALL_STATE(124)] = 7244,
  [SMALL_STATE(125)] = 7281,
  [SMALL_STATE(126)] = 7334,
  [SMALL_STATE(127)] = 7384,
  [SMALL_STATE(128)] = 7434,
  [SMALL_STATE(129)] = 7484,
  [SMALL_STATE(130)] = 7546,
  [SMALL_STATE(131)] = 7596,
  [SMALL_STATE(132)] = 7646,
  [SMALL_STATE(133)] = 7696,
  [SMALL_STATE(134)] = 7746,
  [SMALL_STATE(135)] = 7796,
  [SMALL_STATE(136)] = 7846,
  [SMALL_STATE(137)] = 7908,
  [SMALL_STATE(138)] = 7970,
  [SMALL_STATE(139)] = 8020,
  [SMALL_STATE(140)] = 8068,
  [SMALL_STATE(141)] = 8118,
  [SMALL_STATE(142)] = 8168,
  [SMALL_STATE(143)] = 8218,
  [SMALL_STATE(144)] = 8268,
  [SMALL_STATE(145)] = 8327,
  [SMALL_STATE(146)] = 8374,
  [SMALL_STATE(147)] = 8405,
  [SMALL_STATE(148)] = 8464,
  [SMALL_STATE(149)] = 8511,
  [SMALL_STATE(150)] = 8558,
  [SMALL_STATE(151)] = 8605,
  [SMALL_STATE(152)] = 8652,
  [SMALL_STATE(153)] = 8708,
  [SMALL_STATE(154)] = 8760,
  [SMALL_STATE(155)] = 8804,
  [SMALL_STATE(156)] = 8831,
  [SMALL_STATE(157)] = 8858,
  [SMALL_STATE(158)] = 8885,
  [SMALL_STATE(159)] = 8935,
  [SMALL_STATE(160)] = 8985,
  [SMALL_STATE(161)] = 9035,
  [SMALL_STATE(162)] = 9085,
  [SMALL_STATE(163)] = 9135,
  [SMALL_STATE(164)] = 9185,
  [SMALL_STATE(165)] = 9235,
  [SMALL_STATE(166)] = 9281,
  [SMALL_STATE(167)] = 9331,
  [SMALL_STATE(168)] = 9381,
  [SMALL_STATE(169)] = 9427,
  [SMALL_STATE(170)] = 9477,
  [SMALL_STATE(171)] = 9527,
  [SMALL_STATE(172)] = 9577,
  [SMALL_STATE(173)] = 9622,
  [SMALL_STATE(174)] = 9669,
  [SMALL_STATE(175)] = 9716,
  [SMALL_STATE(176)] = 9763,
  [SMALL_STATE(177)] = 9810,
  [SMALL_STATE(178)] = 9857,
  [SMALL_STATE(179)] = 9904,
  [SMALL_STATE(180)] = 9949,
  [SMALL_STATE(181)] = 9996,
  [SMALL_STATE(182)] = 10043,
  [SMALL_STATE(183)] = 10090,
  [SMALL_STATE(184)] = 10135,
  [SMALL_STATE(185)] = 10180,
  [SMALL_STATE(186)] = 10227,
  [SMALL_STATE(187)] = 10274,
  [SMALL_STATE(188)] = 10319,
  [SMALL_STATE(189)] = 10364,
  [SMALL_STATE(190)] = 10411,
  [SMALL_STATE(191)] = 10458,
  [SMALL_STATE(192)] = 10503,
  [SMALL_STATE(193)] = 10550,
  [SMALL_STATE(194)] = 10597,
  [SMALL_STATE(195)] = 10642,
  [SMALL_STATE(196)] = 10686,
  [SMALL_STATE(197)] = 10730,
  [SMALL_STATE(198)] = 10771,
  [SMALL_STATE(199)] = 10812,
  [SMALL_STATE(200)] = 10853,
  [SMALL_STATE(201)] = 10894,
  [SMALL_STATE(202)] = 10935,
  [SMALL_STATE(203)] = 10976,
  [SMALL_STATE(204)] = 11003,
  [SMALL_STATE(205)] = 11044,
  [SMALL_STATE(206)] = 11075,
  [SMALL_STATE(207)] = 11116,
  [SMALL_STATE(208)] = 11157,
  [SMALL_STATE(209)] = 11198,
  [SMALL_STATE(210)] = 11239,
  [SMALL_STATE(211)] = 11274,
  [SMALL_STATE(212)] = 11309,
  [SMALL_STATE(213)] = 11332,
  [SMALL_STATE(214)] = 11367,
  [SMALL_STATE(215)] = 11390,
  [SMALL_STATE(216)] = 11407,
  [SMALL_STATE(217)] = 11424,
  [SMALL_STATE(218)] = 11445,
  [SMALL_STATE(219)] = 11466,
  [SMALL_STATE(220)] = 11487,
  [SMALL_STATE(221)] = 11504,
  [SMALL_STATE(222)] = 11525,
  [SMALL_STATE(223)] = 11542,
  [SMALL_STATE(224)] = 11559,
  [SMALL_STATE(225)] = 11576,
  [SMALL_STATE(226)] = 11595,
  [SMALL_STATE(227)] = 11612,
  [SMALL_STATE(228)] = 11629,
  [SMALL_STATE(229)] = 11646,
  [SMALL_STATE(230)] = 11663,
  [SMALL_STATE(231)] = 11680,
  [SMALL_STATE(232)] = 11697,
  [SMALL_STATE(233)] = 11716,
  [SMALL_STATE(234)] = 11733,
  [SMALL_STATE(235)] = 11750,
  [SMALL_STATE(236)] = 11766,
  [SMALL_STATE(237)] = 11780,
  [SMALL_STATE(238)] = 11794,
  [SMALL_STATE(239)] = 11808,
  [SMALL_STATE(240)] = 11822,
  [SMALL_STATE(241)] = 11838,
  [SMALL_STATE(242)] = 11852,
  [SMALL_STATE(243)] = 11868,
  [SMALL_STATE(244)] = 11884,
  [SMALL_STATE(245)] = 11898,
  [SMALL_STATE(246)] = 11912,
  [SMALL_STATE(247)] = 11926,
  [SMALL_STATE(248)] = 11939,
  [SMALL_STATE(249)] = 11952,
  [SMALL_STATE(250)] = 11965,
  [SMALL_STATE(251)] = 11978,
  [SMALL_STATE(252)] = 11991,
  [SMALL_STATE(253)] = 12004,
  [SMALL_STATE(254)] = 12027,
  [SMALL_STATE(255)] = 12040,
  [SMALL_STATE(256)] = 12059,
  [SMALL_STATE(257)] = 12072,
  [SMALL_STATE(258)] = 12084,
  [SMALL_STATE(259)] = 12096,
  [SMALL_STATE(260)] = 12116,
  [SMALL_STATE(261)] = 12136,
  [SMALL_STATE(262)] = 12152,
  [SMALL_STATE(263)] = 12164,
  [SMALL_STATE(264)] = 12181,
  [SMALL_STATE(265)] = 12198,
  [SMALL_STATE(266)] = 12215,
  [SMALL_STATE(267)] = 12232,
  [SMALL_STATE(268)] = 12251,
  [SMALL_STATE(269)] = 12266,
  [SMALL_STATE(270)] = 12277,
  [SMALL_STATE(271)] = 12294,
  [SMALL_STATE(272)] = 12311,
  [SMALL_STATE(273)] = 12324,
  [SMALL_STATE(274)] = 12337,
  [SMALL_STATE(275)] = 12354,
  [SMALL_STATE(276)] = 12371,
  [SMALL_STATE(277)] = 12388,
  [SMALL_STATE(278)] = 12402,
  [SMALL_STATE(279)] = 12412,
  [SMALL_STATE(280)] = 12426,
  [SMALL_STATE(281)] = 12440,
  [SMALL_STATE(282)] = 12452,
  [SMALL_STATE(283)] = 12466,
  [SMALL_STATE(284)] = 12480,
  [SMALL_STATE(285)] = 12496,
  [SMALL_STATE(286)] = 12512,
  [SMALL_STATE(287)] = 12528,
  [SMALL_STATE(288)] = 12538,
  [SMALL_STATE(289)] = 12554,
  [SMALL_STATE(290)] = 12568,
  [SMALL_STATE(291)] = 12578,
  [SMALL_STATE(292)] = 12592,
  [SMALL_STATE(293)] = 12602,
  [SMALL_STATE(294)] = 12616,
  [SMALL_STATE(295)] = 12630,
  [SMALL_STATE(296)] = 12644,
  [SMALL_STATE(297)] = 12654,
  [SMALL_STATE(298)] = 12667,
  [SMALL_STATE(299)] = 12680,
  [SMALL_STATE(300)] = 12689,
  [SMALL_STATE(301)] = 12702,
  [SMALL_STATE(302)] = 12715,
  [SMALL_STATE(303)] = 12728,
  [SMALL_STATE(304)] = 12741,
  [SMALL_STATE(305)] = 12754,
  [SMALL_STATE(306)] = 12767,
  [SMALL_STATE(307)] = 12780,
  [SMALL_STATE(308)] = 12793,
  [SMALL_STATE(309)] = 12806,
  [SMALL_STATE(310)] = 12819,
  [SMALL_STATE(311)] = 12832,
  [SMALL_STATE(312)] = 12845,
  [SMALL_STATE(313)] = 12858,
  [SMALL_STATE(314)] = 12871,
  [SMALL_STATE(315)] = 12884,
  [SMALL_STATE(316)] = 12897,
  [SMALL_STATE(317)] = 12910,
  [SMALL_STATE(318)] = 12923,
  [SMALL_STATE(319)] = 12936,
  [SMALL_STATE(320)] = 12949,
  [SMALL_STATE(321)] = 12962,
  [SMALL_STATE(322)] = 12975,
  [SMALL_STATE(323)] = 12988,
  [SMALL_STATE(324)] = 13001,
  [SMALL_STATE(325)] = 13014,
  [SMALL_STATE(326)] = 13027,
  [SMALL_STATE(327)] = 13040,
  [SMALL_STATE(328)] = 13053,
  [SMALL_STATE(329)] = 13066,
  [SMALL_STATE(330)] = 13079,
  [SMALL_STATE(331)] = 13092,
  [SMALL_STATE(332)] = 13105,
  [SMALL_STATE(333)] = 13118,
  [SMALL_STATE(334)] = 13131,
  [SMALL_STATE(335)] = 13144,
  [SMALL_STATE(336)] = 13157,
  [SMALL_STATE(337)] = 13170,
  [SMALL_STATE(338)] = 13183,
  [SMALL_STATE(339)] = 13196,
  [SMALL_STATE(340)] = 13209,
  [SMALL_STATE(341)] = 13222,
  [SMALL_STATE(342)] = 13235,
  [SMALL_STATE(343)] = 13243,
  [SMALL_STATE(344)] = 13251,
  [SMALL_STATE(345)] = 13261,
  [SMALL_STATE(346)] = 13271,
  [SMALL_STATE(347)] = 13279,
  [SMALL_STATE(348)] = 13289,
  [SMALL_STATE(349)] = 13299,
  [SMALL_STATE(350)] = 13307,
  [SMALL_STATE(351)] = 13315,
  [SMALL_STATE(352)] = 13325,
  [SMALL_STATE(353)] = 13335,
  [SMALL_STATE(354)] = 13345,
  [SMALL_STATE(355)] = 13353,
  [SMALL_STATE(356)] = 13361,
  [SMALL_STATE(357)] = 13369,
  [SMALL_STATE(358)] = 13377,
  [SMALL_STATE(359)] = 13387,
  [SMALL_STATE(360)] = 13395,
  [SMALL_STATE(361)] = 13405,
  [SMALL_STATE(362)] = 13413,
  [SMALL_STATE(363)] = 13421,
  [SMALL_STATE(364)] = 13429,
  [SMALL_STATE(365)] = 13437,
  [SMALL_STATE(366)] = 13445,
  [SMALL_STATE(367)] = 13453,
  [SMALL_STATE(368)] = 13461,
  [SMALL_STATE(369)] = 13471,
  [SMALL_STATE(370)] = 13479,
  [SMALL_STATE(371)] = 13489,
  [SMALL_STATE(372)] = 13499,
  [SMALL_STATE(373)] = 13509,
  [SMALL_STATE(374)] = 13519,
  [SMALL_STATE(375)] = 13527,
  [SMALL_STATE(376)] = 13537,
  [SMALL_STATE(377)] = 13547,
  [SMALL_STATE(378)] = 13557,
  [SMALL_STATE(379)] = 13567,
  [SMALL_STATE(380)] = 13577,
  [SMALL_STATE(381)] = 13587,
  [SMALL_STATE(382)] = 13597,
  [SMALL_STATE(383)] = 13607,
  [SMALL_STATE(384)] = 13617,
  [SMALL_STATE(385)] = 13625,
  [SMALL_STATE(386)] = 13635,
  [SMALL_STATE(387)] = 13643,
  [SMALL_STATE(388)] = 13653,
  [SMALL_STATE(389)] = 13661,
  [SMALL_STATE(390)] = 13669,
  [SMALL_STATE(391)] = 13677,
  [SMALL_STATE(392)] = 13685,
  [SMALL_STATE(393)] = 13693,
  [SMALL_STATE(394)] = 13701,
  [SMALL_STATE(395)] = 13709,
  [SMALL_STATE(396)] = 13719,
  [SMALL_STATE(397)] = 13729,
  [SMALL_STATE(398)] = 13737,
  [SMALL_STATE(399)] = 13745,
  [SMALL_STATE(400)] = 13753,
  [SMALL_STATE(401)] = 13760,
  [SMALL_STATE(402)] = 13767,
  [SMALL_STATE(403)] = 13774,
  [SMALL_STATE(404)] = 13781,
  [SMALL_STATE(405)] = 13788,
  [SMALL_STATE(406)] = 13795,
  [SMALL_STATE(407)] = 13802,
  [SMALL_STATE(408)] = 13809,
  [SMALL_STATE(409)] = 13816,
  [SMALL_STATE(410)] = 13823,
  [SMALL_STATE(411)] = 13830,
  [SMALL_STATE(412)] = 13837,
  [SMALL_STATE(413)] = 13844,
  [SMALL_STATE(414)] = 13851,
  [SMALL_STATE(415)] = 13858,
  [SMALL_STATE(416)] = 13865,
  [SMALL_STATE(417)] = 13872,
  [SMALL_STATE(418)] = 13879,
  [SMALL_STATE(419)] = 13886,
  [SMALL_STATE(420)] = 13893,
  [SMALL_STATE(421)] = 13900,
  [SMALL_STATE(422)] = 13907,
  [SMALL_STATE(423)] = 13914,
  [SMALL_STATE(424)] = 13921,
  [SMALL_STATE(425)] = 13928,
  [SMALL_STATE(426)] = 13935,
  [SMALL_STATE(427)] = 13942,
  [SMALL_STATE(428)] = 13949,
  [SMALL_STATE(429)] = 13956,
  [SMALL_STATE(430)] = 13963,
  [SMALL_STATE(431)] = 13970,
  [SMALL_STATE(432)] = 13977,
  [SMALL_STATE(433)] = 13984,
  [SMALL_STATE(434)] = 13991,
  [SMALL_STATE(435)] = 13998,
  [SMALL_STATE(436)] = 14005,
  [SMALL_STATE(437)] = 14012,
  [SMALL_STATE(438)] = 14019,
  [SMALL_STATE(439)] = 14026,
  [SMALL_STATE(440)] = 14033,
  [SMALL_STATE(441)] = 14040,
  [SMALL_STATE(442)] = 14047,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(368),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(136),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(117),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(55),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(192),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(282),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(408),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(432),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(65),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [291] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(65),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 29),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 29),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 2, .production_id = 14),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 2, .production_id = 14),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_access_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 2), SHIFT_REPEAT(44),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_type, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_access_repeat1, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_return_expr, 2), SHIFT(16),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 28),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 28),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment_expr, 4), SHIFT(16),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 27),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 27),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_not, 2), SHIFT(16),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_augment, 2), SHIFT(16),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_destruct, 2),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(370),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(200),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(360),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(217),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(345),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(439),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(439),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(352),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 17),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 19),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 11),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 9),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 5),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proto, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 8),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 5),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 6),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 6),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 16),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 2, .production_id = 14),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pattern, 1), SHIFT(380),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(269),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(289),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(348),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(37),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(77),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(166),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(175),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(176),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 10),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 30),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 31),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 3, .production_id = 14),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 24),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 23),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 18),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 20),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 21),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 12),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 22),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 1),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [998] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
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
