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
#define STATE_COUNT 426
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
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
  aux_sym_block_repeat1 = 156,
  aux_sym_destruct_repeat1 = 157,
  aux_sym_lambda_repeat1 = 158,
  aux_sym_call_expr_repeat1 = 159,
  aux_sym_type_parameters_repeat1 = 160,
  aux_sym_if_expr_repeat1 = 161,
  aux_sym__string_literal_repeat1 = 162,
  alias_sym_field_identifier = 163,
  alias_sym_type_identifier = 164,
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
  [5] = 4,
  [6] = 4,
  [7] = 7,
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
  [21] = 16,
  [22] = 22,
  [23] = 23,
  [24] = 17,
  [25] = 25,
  [26] = 26,
  [27] = 20,
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 41,
  [49] = 49,
  [50] = 43,
  [51] = 45,
  [52] = 47,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 16,
  [60] = 17,
  [61] = 20,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 13,
  [67] = 65,
  [68] = 68,
  [69] = 14,
  [70] = 68,
  [71] = 71,
  [72] = 15,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 18,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 77,
  [89] = 89,
  [90] = 90,
  [91] = 32,
  [92] = 33,
  [93] = 93,
  [94] = 94,
  [95] = 29,
  [96] = 96,
  [97] = 97,
  [98] = 28,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 35,
  [103] = 103,
  [104] = 30,
  [105] = 105,
  [106] = 23,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 22,
  [113] = 113,
  [114] = 114,
  [115] = 26,
  [116] = 116,
  [117] = 77,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 123,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 127,
  [131] = 125,
  [132] = 132,
  [133] = 124,
  [134] = 121,
  [135] = 125,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 142,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 149,
  [151] = 151,
  [152] = 151,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 157,
  [159] = 159,
  [160] = 160,
  [161] = 159,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 169,
  [171] = 171,
  [172] = 164,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 177,
  [179] = 175,
  [180] = 159,
  [181] = 169,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 186,
  [188] = 188,
  [189] = 188,
  [190] = 185,
  [191] = 185,
  [192] = 186,
  [193] = 188,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 198,
  [200] = 200,
  [201] = 198,
  [202] = 202,
  [203] = 62,
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
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 204,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 206,
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
  [244] = 207,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 114,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 255,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 76,
  [264] = 264,
  [265] = 75,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 268,
  [275] = 275,
  [276] = 268,
  [277] = 79,
  [278] = 74,
  [279] = 264,
  [280] = 280,
  [281] = 281,
  [282] = 273,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 284,
  [302] = 289,
  [303] = 303,
  [304] = 295,
  [305] = 299,
  [306] = 286,
  [307] = 303,
  [308] = 283,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 297,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 315,
  [317] = 313,
  [318] = 318,
  [319] = 309,
  [320] = 85,
  [321] = 321,
  [322] = 86,
  [323] = 323,
  [324] = 90,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 89,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 107,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 105,
  [338] = 335,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 108,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 321,
  [348] = 348,
  [349] = 348,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 355,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 335,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 359,
  [369] = 369,
  [370] = 353,
  [371] = 371,
  [372] = 323,
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
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 231,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 227,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 404,
  [406] = 406,
  [407] = 407,
  [408] = 383,
  [409] = 385,
  [410] = 233,
  [411] = 411,
  [412] = 386,
  [413] = 387,
  [414] = 414,
  [415] = 378,
  [416] = 403,
  [417] = 389,
  [418] = 400,
  [419] = 419,
  [420] = 230,
  [421] = 395,
  [422] = 422,
  [423] = 379,
  [424] = 229,
  [425] = 385,
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
      if (eof) ADVANCE(214);
      if (lookahead == '!') ADVANCE(222);
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'K') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(188);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '^') ADVANCE(294);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(125);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(212)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '^') ADVANCE(294);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(382);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == 'w') ADVANCE(346);
      if (lookahead == 'x') ADVANCE(363);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '^') ADVANCE(294);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(382);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == 'w') ADVANCE(346);
      if (lookahead == 'x') ADVANCE(363);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '&') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(269);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(382);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == 'x') ADVANCE(363);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(242);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '&') ADVANCE(267);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == ']') ADVANCE(270);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(382);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'K') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(188);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '^') ADVANCE(294);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(382);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == 'w') ADVANCE(346);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '&') ADVANCE(267);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == ']') ADVANCE(270);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(382);
      if (lookahead == 'f') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'm') ADVANCE(381);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '&') ADVANCE(267);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == ']') ADVANCE(270);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(382);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(267);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '[') ADVANCE(269);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(382);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(320);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(274);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(274);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(278);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(271);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(275);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(272);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(276);
      END_STATE();
    case 22:
      if (lookahead == '6') ADVANCE(273);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(277);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(244);
      if (lookahead == '>') ADVANCE(290);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(181);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(149);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(151);
      END_STATE();
    case 30:
      if (lookahead == 'S') ADVANCE(189);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(172);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == 'x') ADVANCE(211);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 198:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 199:
      if (lookahead == 'w') ADVANCE(111);
      END_STATE();
    case 200:
      if (lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 201:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 202:
      if (lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 203:
      if (lookahead == '{') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 204:
      if (lookahead == '}') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 212:
      if (eof) ADVANCE(214);
      if (lookahead == '!') ADVANCE(222);
      if (lookahead == '"') ADVANCE(325);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'K') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(188);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '^') ADVANCE(294);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(125);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(212)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 213:
      if (eof) ADVANCE(214);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(125);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(213)
      END_STATE();
    case 214:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DeriveStructDrop);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DeriveInterfaceDrop);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DeriveAnonymousSubstruct);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_exported);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(320);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(240);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Ref);
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Kind);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Region);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Prot);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_RefList);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Ownership);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Variability);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Mutability);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Location);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_ro);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ro);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_imm);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_imm);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(293);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_set);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(244);
      if (lookahead == '>') ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_lshift);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_rshift);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_xor);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (lookahead == '.') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(328);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(368);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(382);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(382);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(332);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(382);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(347);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(309);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(319);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(331);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(296);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(298);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 's') ADVANCE(349);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(378);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(374);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(305);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(375);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(376);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(351);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(302);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(350);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(352);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(344);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(354);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(345);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(369);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(338);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(370);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(266);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(356);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(289);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(333);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(373);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(259);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(334);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(367);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(379);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(358);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(311);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(335);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(337);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(339);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(348);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(349);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(292);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(284);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(313);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(380);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(336);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(365);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(377);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(382);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 213},
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
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 8},
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
  [59] = {.lex_state = 213},
  [60] = {.lex_state = 213},
  [61] = {.lex_state = 213},
  [62] = {.lex_state = 213},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 213},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 213},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 213},
  [73] = {.lex_state = 213},
  [74] = {.lex_state = 213},
  [75] = {.lex_state = 213},
  [76] = {.lex_state = 213},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 213},
  [79] = {.lex_state = 213},
  [80] = {.lex_state = 213},
  [81] = {.lex_state = 213},
  [82] = {.lex_state = 213},
  [83] = {.lex_state = 213},
  [84] = {.lex_state = 213},
  [85] = {.lex_state = 213},
  [86] = {.lex_state = 213},
  [87] = {.lex_state = 213},
  [88] = {.lex_state = 213},
  [89] = {.lex_state = 213},
  [90] = {.lex_state = 213},
  [91] = {.lex_state = 213},
  [92] = {.lex_state = 213},
  [93] = {.lex_state = 213},
  [94] = {.lex_state = 213},
  [95] = {.lex_state = 213},
  [96] = {.lex_state = 213},
  [97] = {.lex_state = 213},
  [98] = {.lex_state = 213},
  [99] = {.lex_state = 213},
  [100] = {.lex_state = 213},
  [101] = {.lex_state = 213},
  [102] = {.lex_state = 213},
  [103] = {.lex_state = 213},
  [104] = {.lex_state = 213},
  [105] = {.lex_state = 213},
  [106] = {.lex_state = 213},
  [107] = {.lex_state = 213},
  [108] = {.lex_state = 213},
  [109] = {.lex_state = 213},
  [110] = {.lex_state = 213},
  [111] = {.lex_state = 213},
  [112] = {.lex_state = 213},
  [113] = {.lex_state = 213},
  [114] = {.lex_state = 213},
  [115] = {.lex_state = 213},
  [116] = {.lex_state = 213},
  [117] = {.lex_state = 213},
  [118] = {.lex_state = 213},
  [119] = {.lex_state = 213},
  [120] = {.lex_state = 213},
  [121] = {.lex_state = 213},
  [122] = {.lex_state = 213},
  [123] = {.lex_state = 213},
  [124] = {.lex_state = 213},
  [125] = {.lex_state = 213},
  [126] = {.lex_state = 213},
  [127] = {.lex_state = 213},
  [128] = {.lex_state = 213},
  [129] = {.lex_state = 213},
  [130] = {.lex_state = 213},
  [131] = {.lex_state = 213},
  [132] = {.lex_state = 213},
  [133] = {.lex_state = 213},
  [134] = {.lex_state = 213},
  [135] = {.lex_state = 213},
  [136] = {.lex_state = 213},
  [137] = {.lex_state = 213},
  [138] = {.lex_state = 213},
  [139] = {.lex_state = 213},
  [140] = {.lex_state = 213},
  [141] = {.lex_state = 213},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 213},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 213},
  [156] = {.lex_state = 213},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
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
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 213},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 213},
  [213] = {.lex_state = 213},
  [214] = {.lex_state = 213},
  [215] = {.lex_state = 213},
  [216] = {.lex_state = 213},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 213},
  [219] = {.lex_state = 213},
  [220] = {.lex_state = 213},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 213},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 213},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 12},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 6},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 8},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 8},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 8},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 8},
  [334] = {.lex_state = 0},
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
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 6},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 6},
  [353] = {.lex_state = 6},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 6},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 6},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 8},
  [370] = {.lex_state = 6},
  [371] = {.lex_state = 8},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 6},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 213},
  [383] = {.lex_state = 2},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 213},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 213},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 213},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 2},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 6},
  [408] = {.lex_state = 2},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 213},
  [412] = {.lex_state = 2},
  [413] = {.lex_state = 2},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 8},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
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
    [sym_source_file] = STATE(414),
    [sym__top_level] = STATE(155),
    [sym_import] = STATE(155),
    [sym_attribute] = STATE(411),
    [sym_extern] = STATE(422),
    [sym_func_header] = STATE(298),
    [sym_func_proto] = STATE(155),
    [sym_function_definition] = STATE(155),
    [sym_struct_definition] = STATE(155),
    [aux_sym_source_file_repeat1] = STATE(155),
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
    STATE(183), 1,
      sym_pattern,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(389), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(259), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(25), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(125), 10,
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
    STATE(183), 1,
      sym_pattern,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(389), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(259), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(25), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(135), 10,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(183), 1,
      sym_pattern,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(389), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(259), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(7), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(25), 5,
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
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__string_literal,
    STATE(183), 1,
      sym_pattern,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(389), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(259), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(7), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(25), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(122), 10,
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
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__string_literal,
    STATE(183), 1,
      sym_pattern,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(389), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(259), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(7), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(25), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(121), 10,
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
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_AMP,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_set,
    ACTIONS(80), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_not,
    ACTIONS(92), 1,
      anon_sym_while,
    ACTIONS(95), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      aux_sym_int_lit_token1,
    ACTIONS(104), 1,
      sym_float_lit,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    STATE(183), 1,
      sym_pattern,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(389), 1,
      sym_type,
    ACTIONS(86), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(259), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(7), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(25), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(137), 10,
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
    STATE(183), 1,
      sym_pattern,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(389), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(259), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(25), 5,
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
  [875] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
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
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(303), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
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
  [995] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(307), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
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
  [1115] = 28,
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
    STATE(108), 1,
      sym__string_literal,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(237), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(403), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
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
  [1223] = 28,
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
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(237), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(403), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(107), 3,
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
  [1331] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_else,
    STATE(28), 1,
      sym_else_expr,
    STATE(14), 2,
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
    ACTIONS(143), 23,
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
  [1387] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_else,
    STATE(26), 1,
      sym_else_expr,
    STATE(15), 2,
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
    ACTIONS(149), 23,
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
  [1443] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_else,
    STATE(15), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(151), 15,
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
    ACTIONS(153), 23,
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
  [1496] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 15,
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
    ACTIONS(160), 24,
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
  [1543] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 15,
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
    ACTIONS(164), 24,
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
  [1590] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 15,
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
    ACTIONS(168), 24,
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
  [1637] = 21,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(119), 15,
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
  [1720] = 3,
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
    ACTIONS(180), 24,
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
  [1767] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 15,
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
    ACTIONS(160), 23,
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
  [1813] = 3,
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
    ACTIONS(184), 23,
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
  [1859] = 3,
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
    ACTIONS(188), 23,
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
  [1905] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 15,
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
    ACTIONS(164), 23,
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
  [1951] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(192), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(196), 11,
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
    ACTIONS(194), 12,
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
  [2001] = 3,
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
  [2047] = 3,
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
    ACTIONS(180), 23,
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
  [2093] = 3,
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
  [2139] = 3,
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
  [2185] = 3,
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
  [2231] = 20,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
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
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [2311] = 3,
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
  [2357] = 3,
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
  [2403] = 20,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [2483] = 3,
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
    ACTIONS(228), 23,
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
  [2529] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [2606] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(100), 15,
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
  [2683] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [2760] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [2837] = 20,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    STATE(138), 1,
      sym_int_lit,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(107), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(120), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(144), 15,
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
  [2916] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [2993] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [3070] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(124), 15,
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
  [3147] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(111), 15,
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
  [3224] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [3301] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(101), 15,
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
  [3378] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(129), 15,
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
  [3455] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(123), 15,
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
  [3532] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(99), 15,
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
  [3609] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [3686] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(127), 15,
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
  [3763] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [3840] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [3917] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(110), 15,
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
  [3994] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(93), 15,
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
  [4071] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(94), 15,
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
  [4148] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
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
  [4225] = 19,
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
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      anon_sym_foreach,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(108), 1,
      sym__string_literal,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(107), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(97), 15,
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
  [4302] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(158), 29,
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
  [4346] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(162), 29,
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
  [4390] = 3,
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
    ACTIONS(178), 29,
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
  [4434] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(85), 1,
      sym_int_type,
    ACTIONS(234), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(236), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
    ACTIONS(232), 21,
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
  [4482] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(238), 1,
      anon_sym_GT,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      aux_sym_int_lit_token1,
    ACTIONS(252), 1,
      sym_float_lit,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(284), 1,
      sym_type_parameter,
    STATE(343), 1,
      sym__string_literal,
    ACTIONS(242), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(326), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(333), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4559] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      aux_sym_int_lit_token1,
    ACTIONS(252), 1,
      sym_float_lit,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(301), 1,
      sym_type_parameter,
    STATE(343), 1,
      sym__string_literal,
    ACTIONS(242), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(326), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(333), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4636] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      aux_sym_int_lit_token1,
    ACTIONS(252), 1,
      sym_float_lit,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_GT,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(343), 1,
      sym__string_literal,
    STATE(356), 1,
      sym_type_parameter,
    ACTIONS(242), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(326), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(333), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4710] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_else,
    STATE(98), 1,
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
    ACTIONS(141), 20,
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
  [4754] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      aux_sym_int_lit_token1,
    ACTIONS(252), 1,
      sym_float_lit,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_GT,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(343), 1,
      sym__string_literal,
    STATE(356), 1,
      sym_type_parameter,
    ACTIONS(242), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(326), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(333), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4828] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      aux_sym_int_lit_token1,
    ACTIONS(252), 1,
      sym_float_lit,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_GT,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(343), 1,
      sym__string_literal,
    STATE(356), 1,
      sym_type_parameter,
    ACTIONS(242), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(326), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(333), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [4902] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_else,
    STATE(115), 1,
      sym_else_expr,
    STATE(72), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(149), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(147), 20,
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
  [4946] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      aux_sym_int_lit_token1,
    ACTIONS(252), 1,
      sym_float_lit,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_GT,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(343), 1,
      sym__string_literal,
    STATE(356), 1,
      sym_type_parameter,
    ACTIONS(242), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(326), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(333), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5020] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      aux_sym_int_lit_token1,
    ACTIONS(252), 1,
      sym_float_lit,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(343), 1,
      sym__string_literal,
    STATE(356), 1,
      sym_type_parameter,
    ACTIONS(242), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(248), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(326), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(333), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5091] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      anon_sym_else,
    STATE(72), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(153), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(151), 20,
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
  [5132] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(275), 22,
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
  [5168] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(279), 22,
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
  [5204] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(283), 22,
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
  [5240] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(287), 22,
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
  [5276] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LT,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_type_parameters,
    ACTIONS(304), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(190), 10,
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
    ACTIONS(194), 10,
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
  [5326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(306), 22,
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
  [5362] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(310), 22,
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
  [5398] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(314), 22,
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
  [5434] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(318), 22,
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
  [5470] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      anon_sym_LT,
    STATE(73), 1,
      sym_type_parameters,
    ACTIONS(194), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(190), 20,
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
  [5512] = 3,
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
  [5548] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(166), 21,
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
  [5583] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(331), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(329), 21,
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
  [5618] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(333), 21,
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
  [5653] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(190), 20,
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
  [5690] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_LT,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_type_parameters,
    ACTIONS(291), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(194), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(190), 16,
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
  [5737] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(337), 20,
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
  [5771] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
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
  [5805] = 3,
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
  [5839] = 3,
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
  [5873] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(347), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(345), 20,
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
  [5907] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(347), 1,
      anon_sym_EQ,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(345), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_or,
  [5957] = 3,
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
  [5991] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(347), 1,
      anon_sym_EQ,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(345), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [6039] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(347), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(345), 12,
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
  [6083] = 3,
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
  [6117] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(347), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(345), 14,
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
  [6159] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_EQ,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(365), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [6213] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(347), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(345), 16,
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
  [6251] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(226), 20,
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
  [6285] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(374), 20,
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
  [6319] = 3,
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
  [6353] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(378), 20,
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
  [6387] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(186), 20,
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
  [6421] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(382), 20,
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
  [6455] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(386), 20,
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
  [6489] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(390), 20,
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
  [6523] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_EQ,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(394), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [6577] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_EQ,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(401), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [6631] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(182), 20,
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
  [6665] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_EQ,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(408), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [6719] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(417), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(415), 20,
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
  [6753] = 3,
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
  [6787] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(419), 20,
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
  [6821] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      anon_sym_LT,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_type_parameters,
    ACTIONS(194), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(190), 15,
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
  [6863] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      anon_sym_LT,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_type_parameters,
    ACTIONS(194), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(190), 15,
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
  [6902] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6955] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    ACTIONS(194), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(190), 15,
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
  [6989] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7039] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7089] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_block,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7139] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7189] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7239] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7289] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7339] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_block,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7389] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7439] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7489] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7539] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(443), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7587] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7637] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7687] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7737] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(447), 1,
      anon_sym_EQ,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7784] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7831] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    ACTIONS(384), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(382), 15,
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
  [7862] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7909] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [7956] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      anon_sym_SEMI,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8003] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(455), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      anon_sym_set,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(295), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [8059] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(455), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(465), 1,
      anon_sym_set,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(304), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [8115] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_and,
    ACTIONS(372), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(353), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(363), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(357), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8159] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(467), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(469), 11,
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
  [8186] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(471), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(473), 11,
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
  [8213] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(475), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(477), 11,
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
  [8240] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(479), 1,
      anon_sym_GT,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(195), 1,
      sym__type_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(211), 1,
      sym_scoped_type_identifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(345), 1,
      sym_generic_parameter,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(332), 2,
      sym_region_parameter,
      sym_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [8290] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [8340] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [8390] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_set,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(312), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [8440] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(491), 1,
      anon_sym_set,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(297), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [8490] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_set,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(374), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [8540] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(495), 1,
      anon_sym_GT,
    STATE(195), 1,
      sym__type_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(211), 1,
      sym_scoped_type_identifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(345), 1,
      sym_generic_parameter,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(332), 2,
      sym_region_parameter,
      sym_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [8590] = 13,
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
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    STATE(298), 1,
      sym_func_header,
    STATE(411), 1,
      sym_attribute,
    STATE(422), 1,
      sym_extern,
    ACTIONS(13), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(156), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [8636] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 1,
      anon_sym_import,
    ACTIONS(504), 1,
      anon_sym_POUND,
    ACTIONS(507), 1,
      anon_sym_extern,
    ACTIONS(513), 1,
      anon_sym_export,
    ACTIONS(516), 1,
      anon_sym_func,
    ACTIONS(519), 1,
      anon_sym_struct,
    STATE(298), 1,
      sym_func_header,
    STATE(411), 1,
      sym_attribute,
    STATE(422), 1,
      sym_extern,
    ACTIONS(510), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(156), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [8682] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [8732] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [8782] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(526), 1,
      anon_sym_LT,
    STATE(190), 1,
      sym_type_parameters,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(403), 2,
      sym_scoped_identifier,
      sym__path,
  [8829] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(376), 1,
      sym_type,
    ACTIONS(528), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [8874] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_type_parameters,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [8921] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(334), 1,
      sym_type,
    ACTIONS(534), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [8966] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(195), 1,
      sym__type_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(211), 1,
      sym_scoped_type_identifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(311), 1,
      sym_generic_parameter,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(332), 2,
      sym_region_parameter,
      sym_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9013] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(297), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [9060] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(328), 1,
      sym_type,
    ACTIONS(536), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9105] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(358), 1,
      sym_type,
    ACTIONS(538), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9150] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(360), 1,
      sym_type,
    ACTIONS(540), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9195] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(366), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [9242] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(193), 1,
      sym_type_parameters,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(241), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9289] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(526), 1,
      anon_sym_LT,
    STATE(188), 1,
      sym_type_parameters,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(241), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(403), 2,
      sym_scoped_identifier,
      sym__path,
  [9336] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(327), 1,
      sym_type,
    ACTIONS(544), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9381] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(312), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [9428] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(195), 1,
      sym__type_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(211), 1,
      sym_scoped_type_identifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(345), 1,
      sym_generic_parameter,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(332), 2,
      sym_region_parameter,
      sym_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9475] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(377), 1,
      sym_type,
    ACTIONS(546), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9520] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(305), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [9567] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(331), 1,
      sym_type,
    ACTIONS(548), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9612] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(550), 1,
      anon_sym_LBRACK,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(395), 1,
      sym_pattern,
    STATE(417), 1,
      sym_type,
    STATE(420), 1,
      sym_destruct,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [9659] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(550), 1,
      anon_sym_LBRACK,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(417), 1,
      sym_type,
    STATE(420), 1,
      sym_destruct,
    STATE(421), 1,
      sym_pattern,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [9706] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(299), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [9753] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(185), 1,
      sym_type_parameters,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(242), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9800] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(189), 1,
      sym_type_parameters,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(241), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9847] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_destruct,
    STATE(363), 1,
      sym_pattern,
    STATE(389), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(255), 2,
      sym_scoped_identifier,
      sym__path,
  [9894] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(552), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(390), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(403), 2,
      sym_scoped_identifier,
      sym__path,
  [9938] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    ACTIONS(554), 1,
      anon_sym_BANG,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(380), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [9982] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(243), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10023] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(237), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(403), 2,
      sym_scoped_identifier,
      sym__path,
  [10064] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(237), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10105] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(235), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(403), 2,
      sym_scoped_identifier,
      sym__path,
  [10146] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(235), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10187] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(243), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(403), 2,
      sym_scoped_identifier,
      sym__path,
  [10228] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(243), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10269] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(237), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10310] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(235), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10351] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_DOT,
    ACTIONS(558), 1,
      anon_sym_Ref,
    ACTIONS(560), 1,
      anon_sym_SQUOTE,
    ACTIONS(556), 12,
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
  [10378] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    ACTIONS(568), 1,
      anon_sym_Ref,
    STATE(224), 1,
      sym_generic_parameters,
    STATE(371), 1,
      sym_rune,
    ACTIONS(564), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(566), 9,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [10409] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(393), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10450] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(201), 1,
      sym_region_specifier,
    STATE(228), 1,
      sym_generic_type,
    STATE(361), 1,
      sym_type,
    STATE(211), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(239), 2,
      sym_reference_type,
      sym_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10491] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(530), 1,
      anon_sym_AMP,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
    ACTIONS(570), 1,
      sym_identifier,
    STATE(232), 1,
      sym_generic_type,
    STATE(217), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(234), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10526] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(457), 1,
      anon_sym_AMP,
    ACTIONS(570), 1,
      sym_identifier,
    STATE(232), 1,
      sym_generic_type,
    STATE(217), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(234), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(403), 2,
      sym_scoped_identifier,
      sym__path,
  [10561] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(574), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(572), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [10584] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(570), 1,
      sym_identifier,
    STATE(232), 1,
      sym_generic_type,
    STATE(217), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(234), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(416), 2,
      sym_scoped_identifier,
      sym__path,
  [10619] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(582), 1,
      sym_identifier,
    ACTIONS(580), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(578), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [10642] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(320), 1,
      sym_int_type,
    ACTIONS(232), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(584), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
  [10663] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(588), 1,
      anon_sym_LBRACK,
    ACTIONS(586), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(556), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [10684] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 11,
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
  [10701] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    ACTIONS(591), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(556), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [10722] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(556), 5,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [10743] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 11,
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
  [10760] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(598), 11,
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
  [10777] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(600), 11,
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
  [10794] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    STATE(224), 1,
      sym_generic_parameters,
    ACTIONS(564), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [10813] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(604), 1,
      anon_sym_export,
    ACTIONS(602), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [10830] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 1,
      anon_sym_export,
    ACTIONS(606), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [10847] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(612), 1,
      anon_sym_export,
    ACTIONS(610), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [10864] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(616), 1,
      anon_sym_export,
    ACTIONS(614), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [10881] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(620), 1,
      anon_sym_export,
    ACTIONS(618), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [10898] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    STATE(224), 1,
      sym_generic_parameters,
    ACTIONS(622), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [10917] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(626), 1,
      anon_sym_export,
    ACTIONS(624), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [10934] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(630), 1,
      anon_sym_export,
    ACTIONS(628), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [10951] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(634), 1,
      anon_sym_export,
    ACTIONS(632), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [10968] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_DOT,
    ACTIONS(556), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [10985] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(586), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [11001] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(636), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11015] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(638), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11029] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(640), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11043] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(591), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [11059] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(642), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11073] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(564), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11089] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(646), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11103] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11117] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11131] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(622), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11147] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(652), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11161] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(622), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11174] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(654), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11187] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(656), 1,
      anon_sym_DOT,
    ACTIONS(658), 1,
      anon_sym_STAR,
    ACTIONS(660), 1,
      sym_identifier,
    STATE(401), 1,
      sym_import_wildcard,
    STATE(402), 1,
      sym_import_path,
    STATE(336), 2,
      sym_scoped_identifier,
      sym__path,
  [11210] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(662), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11223] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(664), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11236] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(564), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11249] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(670), 1,
      anon_sym_ro,
    ACTIONS(672), 1,
      sym_identifier,
    ACTIONS(668), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(666), 3,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [11268] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(674), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11281] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(676), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11294] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(678), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [11307] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_DOT,
    ACTIONS(556), 4,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
  [11323] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(680), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [11335] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_generic_parameters,
    STATE(392), 1,
      sym_mutability,
    ACTIONS(684), 2,
      anon_sym_mut,
      anon_sym_imm,
  [11355] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(686), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [11367] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    STATE(267), 1,
      sym_generic_parameters,
    STATE(388), 1,
      sym_mutability,
    ACTIONS(684), 2,
      anon_sym_mut,
      anon_sym_imm,
  [11387] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [11399] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      sym_identifier,
    STATE(184), 1,
      sym__field_identifier,
    STATE(260), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [11416] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym__field_identifier,
    STATE(261), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [11433] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym__field_identifier,
    STATE(261), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [11450] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      sym_identifier,
    STATE(184), 1,
      sym__field_identifier,
    STATE(261), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [11467] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [11478] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 1,
      anon_sym_DOT,
    ACTIONS(648), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [11491] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym__field_identifier,
    STATE(251), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [11508] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      anon_sym_BANG,
    STATE(396), 1,
      sym_attribute_name,
    ACTIONS(702), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [11523] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym__field_identifier,
    STATE(252), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [11540] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      anon_sym_DOT,
    ACTIONS(648), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_identifier,
  [11553] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym__field_identifier,
    STATE(261), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [11570] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(715), 1,
      sym_identifier,
    STATE(184), 1,
      sym__field_identifier,
    STATE(261), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [11587] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym__field_identifier,
    STATE(253), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [11604] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [11614] = 4,
    ACTIONS(718), 1,
      sym_line_comment,
    ACTIONS(722), 1,
      anon_sym_DQUOTE,
    STATE(280), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(720), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [11628] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [11638] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(666), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [11648] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
    STATE(392), 1,
      sym_mutability,
    ACTIONS(684), 2,
      anon_sym_mut,
      anon_sym_imm,
  [11662] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(724), 1,
      aux_sym_int_lit_token1,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(385), 2,
      sym_int_lit,
      sym__type_identifier,
  [11676] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym_parameters,
    STATE(341), 1,
      sym_generic_parameters,
  [11692] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_parameters,
    STATE(339), 1,
      sym_generic_parameters,
  [11708] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(730), 1,
      anon_sym_LBRACE,
    STATE(381), 1,
      sym_mutability,
    ACTIONS(684), 2,
      anon_sym_mut,
      anon_sym_imm,
  [11722] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(382), 1,
      sym_attribute_name,
    ACTIONS(702), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [11734] = 4,
    ACTIONS(718), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(732), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [11748] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(724), 1,
      aux_sym_int_lit_token1,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(425), 2,
      sym_int_lit,
      sym__type_identifier,
  [11762] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_parameters,
    STATE(367), 1,
      sym_generic_parameters,
  [11778] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(724), 1,
      aux_sym_int_lit_token1,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(409), 2,
      sym_int_lit,
      sym__type_identifier,
  [11792] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [11802] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [11812] = 4,
    ACTIONS(718), 1,
      sym_line_comment,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(280), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(720), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [11826] = 4,
    ACTIONS(718), 1,
      sym_line_comment,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
    STATE(280), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(738), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [11840] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_LT,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_parameters,
    STATE(365), 1,
      sym_generic_parameters,
  [11856] = 4,
    ACTIONS(718), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    STATE(279), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(743), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [11870] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      aux_sym_destruct_repeat1,
  [11883] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_GT,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_type_parameters_repeat1,
  [11896] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(755), 1,
      anon_sym_GT,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_generic_parameters_repeat1,
  [11909] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      anon_sym_GT,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_type_parameters_repeat1,
  [11922] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(762), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [11931] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(764), 1,
      anon_sym_GT,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_type_parameters_repeat1,
  [11944] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      aux_sym_destruct_repeat1,
  [11957] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_parameters_repeat1,
  [11970] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_parameters_repeat1,
  [11983] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym__string_literal,
    STATE(384), 1,
      sym_string_literal,
  [11996] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 1,
      anon_sym_GT,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_generic_parameters_repeat1,
  [12009] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_call_expr_repeat1,
  [12022] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      aux_sym_destruct_repeat1,
  [12035] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(310), 1,
      sym_parameter,
  [12048] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      aux_sym_destruct_repeat1,
  [12061] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      sym_block,
  [12074] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      aux_sym_destruct_repeat1,
  [12087] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_call_expr_repeat1,
  [12100] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 1,
      anon_sym_GT,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_type_parameters_repeat1,
  [12113] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(801), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      aux_sym_destruct_repeat1,
  [12126] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_lambda_repeat1,
  [12139] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      aux_sym_destruct_repeat1,
  [12152] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_destruct_repeat1,
  [12165] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_GT,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_type_parameters_repeat1,
  [12178] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_lambda_repeat1,
  [12191] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      aux_sym_destruct_repeat1,
  [12204] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    ACTIONS(819), 1,
      anon_sym_if,
    STATE(32), 1,
      sym_block,
  [12217] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_parameters_repeat1,
  [12230] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_GT,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_generic_parameters_repeat1,
  [12243] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_destruct_repeat1,
  [12256] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_lambda_repeat1,
  [12269] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      aux_sym_destruct_repeat1,
  [12282] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      aux_sym_destruct_repeat1,
  [12295] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      aux_sym_destruct_repeat1,
  [12308] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_lambda_repeat1,
  [12321] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_lambda_repeat1,
  [12334] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(841), 1,
      anon_sym_if,
    STATE(91), 1,
      sym_block,
  [12347] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12355] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [12365] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12373] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
  [12383] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12391] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      anon_sym_LPAREN,
    ACTIONS(845), 1,
      anon_sym_func,
  [12401] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12409] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12417] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12425] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12433] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(248), 1,
      sym__type_identifier,
  [12443] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(853), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12451] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12459] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12467] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(857), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12475] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 1,
      anon_sym_POUND,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
  [12485] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    ACTIONS(865), 1,
      anon_sym_DOT,
  [12495] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12503] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(455), 1,
      anon_sym_POUND,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
  [12513] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_parameters,
  [12523] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12531] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_parameters,
  [12541] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12549] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12557] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [12565] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(755), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12573] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [12581] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
  [12591] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
  [12601] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
  [12611] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(223), 1,
      sym__type_identifier,
  [12621] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(246), 1,
      sym__type_identifier,
  [12631] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 1,
      sym_identifier,
    STATE(103), 1,
      sym__field_identifier,
  [12641] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      sym_identifier,
    STATE(223), 1,
      sym__type_identifier,
  [12651] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(586), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [12659] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      sym_identifier,
    STATE(225), 1,
      sym__type_identifier,
  [12669] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(764), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12677] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(877), 1,
      sym_identifier,
    STATE(225), 1,
      sym__type_identifier,
  [12687] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12695] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_block,
  [12705] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12713] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12721] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(340), 1,
      sym_parameter,
  [12731] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(885), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12739] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 1,
      anon_sym_POUND,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
  [12749] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_parameters,
  [12759] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12767] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_parameters,
  [12777] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
  [12787] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(891), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12795] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(893), 1,
      sym_identifier,
    STATE(223), 1,
      sym__type_identifier,
  [12805] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(895), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [12813] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block,
  [12823] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 1,
      anon_sym_STAR,
    ACTIONS(899), 1,
      sym_identifier,
  [12833] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12841] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [12849] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(903), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12857] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12865] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      anon_sym_if,
  [12872] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_GT,
  [12879] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(907), 1,
      anon_sym_SEMI,
  [12886] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
  [12893] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(911), 1,
      anon_sym_struct,
  [12900] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      anon_sym_EQ_GT,
  [12907] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
  [12914] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
  [12921] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_EQ_GT,
  [12928] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(921), 1,
      anon_sym_EQ_GT,
  [12935] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
  [12942] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
  [12949] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(925), 1,
      anon_sym_EQ,
  [12956] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_in,
  [12963] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(730), 1,
      anon_sym_LBRACE,
  [12970] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(927), 1,
      anon_sym_SEMI,
  [12977] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(929), 1,
      anon_sym_SEMI,
  [12984] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(931), 1,
      anon_sym_in,
  [12991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 1,
      anon_sym_struct,
  [12998] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(935), 1,
      anon_sym_func,
  [13005] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(642), 1,
      anon_sym_in,
  [13012] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      anon_sym_struct,
  [13019] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
  [13026] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      anon_sym_SEMI,
  [13033] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(939), 1,
      anon_sym_SEMI,
  [13040] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 1,
      anon_sym_DOT,
  [13047] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(941), 1,
      anon_sym_EQ_GT,
  [13054] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(943), 1,
      anon_sym_EQ_GT,
  [13061] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(945), 1,
      anon_sym_SEMI,
  [13068] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(947), 1,
      sym_identifier,
  [13075] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(949), 1,
      anon_sym_EQ_GT,
  [13082] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(951), 1,
      anon_sym_RBRACK,
  [13089] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(652), 1,
      anon_sym_in,
  [13096] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 1,
      anon_sym_struct,
  [13103] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(955), 1,
      anon_sym_EQ_GT,
  [13110] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(957), 1,
      anon_sym_EQ_GT,
  [13117] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(959), 1,
      ts_builtin_sym_end,
  [13124] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      anon_sym_if,
  [13131] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 1,
      anon_sym_DOT,
  [13138] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(963), 1,
      anon_sym_LBRACK,
  [13145] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
  [13152] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
  [13159] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 1,
      anon_sym_in,
  [13166] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 1,
      anon_sym_in,
  [13173] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(967), 1,
      anon_sym_func,
  [13180] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 1,
      anon_sym_GT,
  [13187] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(646), 1,
      anon_sym_in,
  [13194] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
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
  [SMALL_STATE(10)] = 995,
  [SMALL_STATE(11)] = 1115,
  [SMALL_STATE(12)] = 1223,
  [SMALL_STATE(13)] = 1331,
  [SMALL_STATE(14)] = 1387,
  [SMALL_STATE(15)] = 1443,
  [SMALL_STATE(16)] = 1496,
  [SMALL_STATE(17)] = 1543,
  [SMALL_STATE(18)] = 1590,
  [SMALL_STATE(19)] = 1637,
  [SMALL_STATE(20)] = 1720,
  [SMALL_STATE(21)] = 1767,
  [SMALL_STATE(22)] = 1813,
  [SMALL_STATE(23)] = 1859,
  [SMALL_STATE(24)] = 1905,
  [SMALL_STATE(25)] = 1951,
  [SMALL_STATE(26)] = 2001,
  [SMALL_STATE(27)] = 2047,
  [SMALL_STATE(28)] = 2093,
  [SMALL_STATE(29)] = 2139,
  [SMALL_STATE(30)] = 2185,
  [SMALL_STATE(31)] = 2231,
  [SMALL_STATE(32)] = 2311,
  [SMALL_STATE(33)] = 2357,
  [SMALL_STATE(34)] = 2403,
  [SMALL_STATE(35)] = 2483,
  [SMALL_STATE(36)] = 2529,
  [SMALL_STATE(37)] = 2606,
  [SMALL_STATE(38)] = 2683,
  [SMALL_STATE(39)] = 2760,
  [SMALL_STATE(40)] = 2837,
  [SMALL_STATE(41)] = 2916,
  [SMALL_STATE(42)] = 2993,
  [SMALL_STATE(43)] = 3070,
  [SMALL_STATE(44)] = 3147,
  [SMALL_STATE(45)] = 3224,
  [SMALL_STATE(46)] = 3301,
  [SMALL_STATE(47)] = 3378,
  [SMALL_STATE(48)] = 3455,
  [SMALL_STATE(49)] = 3532,
  [SMALL_STATE(50)] = 3609,
  [SMALL_STATE(51)] = 3686,
  [SMALL_STATE(52)] = 3763,
  [SMALL_STATE(53)] = 3840,
  [SMALL_STATE(54)] = 3917,
  [SMALL_STATE(55)] = 3994,
  [SMALL_STATE(56)] = 4071,
  [SMALL_STATE(57)] = 4148,
  [SMALL_STATE(58)] = 4225,
  [SMALL_STATE(59)] = 4302,
  [SMALL_STATE(60)] = 4346,
  [SMALL_STATE(61)] = 4390,
  [SMALL_STATE(62)] = 4434,
  [SMALL_STATE(63)] = 4482,
  [SMALL_STATE(64)] = 4559,
  [SMALL_STATE(65)] = 4636,
  [SMALL_STATE(66)] = 4710,
  [SMALL_STATE(67)] = 4754,
  [SMALL_STATE(68)] = 4828,
  [SMALL_STATE(69)] = 4902,
  [SMALL_STATE(70)] = 4946,
  [SMALL_STATE(71)] = 5020,
  [SMALL_STATE(72)] = 5091,
  [SMALL_STATE(73)] = 5132,
  [SMALL_STATE(74)] = 5168,
  [SMALL_STATE(75)] = 5204,
  [SMALL_STATE(76)] = 5240,
  [SMALL_STATE(77)] = 5276,
  [SMALL_STATE(78)] = 5326,
  [SMALL_STATE(79)] = 5362,
  [SMALL_STATE(80)] = 5398,
  [SMALL_STATE(81)] = 5434,
  [SMALL_STATE(82)] = 5470,
  [SMALL_STATE(83)] = 5512,
  [SMALL_STATE(84)] = 5548,
  [SMALL_STATE(85)] = 5583,
  [SMALL_STATE(86)] = 5618,
  [SMALL_STATE(87)] = 5653,
  [SMALL_STATE(88)] = 5690,
  [SMALL_STATE(89)] = 5737,
  [SMALL_STATE(90)] = 5771,
  [SMALL_STATE(91)] = 5805,
  [SMALL_STATE(92)] = 5839,
  [SMALL_STATE(93)] = 5873,
  [SMALL_STATE(94)] = 5907,
  [SMALL_STATE(95)] = 5957,
  [SMALL_STATE(96)] = 5991,
  [SMALL_STATE(97)] = 6039,
  [SMALL_STATE(98)] = 6083,
  [SMALL_STATE(99)] = 6117,
  [SMALL_STATE(100)] = 6159,
  [SMALL_STATE(101)] = 6213,
  [SMALL_STATE(102)] = 6251,
  [SMALL_STATE(103)] = 6285,
  [SMALL_STATE(104)] = 6319,
  [SMALL_STATE(105)] = 6353,
  [SMALL_STATE(106)] = 6387,
  [SMALL_STATE(107)] = 6421,
  [SMALL_STATE(108)] = 6455,
  [SMALL_STATE(109)] = 6489,
  [SMALL_STATE(110)] = 6523,
  [SMALL_STATE(111)] = 6577,
  [SMALL_STATE(112)] = 6631,
  [SMALL_STATE(113)] = 6665,
  [SMALL_STATE(114)] = 6719,
  [SMALL_STATE(115)] = 6753,
  [SMALL_STATE(116)] = 6787,
  [SMALL_STATE(117)] = 6821,
  [SMALL_STATE(118)] = 6863,
  [SMALL_STATE(119)] = 6902,
  [SMALL_STATE(120)] = 6955,
  [SMALL_STATE(121)] = 6989,
  [SMALL_STATE(122)] = 7039,
  [SMALL_STATE(123)] = 7089,
  [SMALL_STATE(124)] = 7139,
  [SMALL_STATE(125)] = 7189,
  [SMALL_STATE(126)] = 7239,
  [SMALL_STATE(127)] = 7289,
  [SMALL_STATE(128)] = 7339,
  [SMALL_STATE(129)] = 7389,
  [SMALL_STATE(130)] = 7439,
  [SMALL_STATE(131)] = 7489,
  [SMALL_STATE(132)] = 7539,
  [SMALL_STATE(133)] = 7587,
  [SMALL_STATE(134)] = 7637,
  [SMALL_STATE(135)] = 7687,
  [SMALL_STATE(136)] = 7737,
  [SMALL_STATE(137)] = 7784,
  [SMALL_STATE(138)] = 7831,
  [SMALL_STATE(139)] = 7862,
  [SMALL_STATE(140)] = 7909,
  [SMALL_STATE(141)] = 7956,
  [SMALL_STATE(142)] = 8003,
  [SMALL_STATE(143)] = 8059,
  [SMALL_STATE(144)] = 8115,
  [SMALL_STATE(145)] = 8159,
  [SMALL_STATE(146)] = 8186,
  [SMALL_STATE(147)] = 8213,
  [SMALL_STATE(148)] = 8240,
  [SMALL_STATE(149)] = 8290,
  [SMALL_STATE(150)] = 8340,
  [SMALL_STATE(151)] = 8390,
  [SMALL_STATE(152)] = 8440,
  [SMALL_STATE(153)] = 8490,
  [SMALL_STATE(154)] = 8540,
  [SMALL_STATE(155)] = 8590,
  [SMALL_STATE(156)] = 8636,
  [SMALL_STATE(157)] = 8682,
  [SMALL_STATE(158)] = 8732,
  [SMALL_STATE(159)] = 8782,
  [SMALL_STATE(160)] = 8829,
  [SMALL_STATE(161)] = 8874,
  [SMALL_STATE(162)] = 8921,
  [SMALL_STATE(163)] = 8966,
  [SMALL_STATE(164)] = 9013,
  [SMALL_STATE(165)] = 9060,
  [SMALL_STATE(166)] = 9105,
  [SMALL_STATE(167)] = 9150,
  [SMALL_STATE(168)] = 9195,
  [SMALL_STATE(169)] = 9242,
  [SMALL_STATE(170)] = 9289,
  [SMALL_STATE(171)] = 9336,
  [SMALL_STATE(172)] = 9381,
  [SMALL_STATE(173)] = 9428,
  [SMALL_STATE(174)] = 9475,
  [SMALL_STATE(175)] = 9520,
  [SMALL_STATE(176)] = 9567,
  [SMALL_STATE(177)] = 9612,
  [SMALL_STATE(178)] = 9659,
  [SMALL_STATE(179)] = 9706,
  [SMALL_STATE(180)] = 9753,
  [SMALL_STATE(181)] = 9800,
  [SMALL_STATE(182)] = 9847,
  [SMALL_STATE(183)] = 9894,
  [SMALL_STATE(184)] = 9938,
  [SMALL_STATE(185)] = 9982,
  [SMALL_STATE(186)] = 10023,
  [SMALL_STATE(187)] = 10064,
  [SMALL_STATE(188)] = 10105,
  [SMALL_STATE(189)] = 10146,
  [SMALL_STATE(190)] = 10187,
  [SMALL_STATE(191)] = 10228,
  [SMALL_STATE(192)] = 10269,
  [SMALL_STATE(193)] = 10310,
  [SMALL_STATE(194)] = 10351,
  [SMALL_STATE(195)] = 10378,
  [SMALL_STATE(196)] = 10409,
  [SMALL_STATE(197)] = 10450,
  [SMALL_STATE(198)] = 10491,
  [SMALL_STATE(199)] = 10526,
  [SMALL_STATE(200)] = 10561,
  [SMALL_STATE(201)] = 10584,
  [SMALL_STATE(202)] = 10619,
  [SMALL_STATE(203)] = 10642,
  [SMALL_STATE(204)] = 10663,
  [SMALL_STATE(205)] = 10684,
  [SMALL_STATE(206)] = 10701,
  [SMALL_STATE(207)] = 10722,
  [SMALL_STATE(208)] = 10743,
  [SMALL_STATE(209)] = 10760,
  [SMALL_STATE(210)] = 10777,
  [SMALL_STATE(211)] = 10794,
  [SMALL_STATE(212)] = 10813,
  [SMALL_STATE(213)] = 10830,
  [SMALL_STATE(214)] = 10847,
  [SMALL_STATE(215)] = 10864,
  [SMALL_STATE(216)] = 10881,
  [SMALL_STATE(217)] = 10898,
  [SMALL_STATE(218)] = 10917,
  [SMALL_STATE(219)] = 10934,
  [SMALL_STATE(220)] = 10951,
  [SMALL_STATE(221)] = 10968,
  [SMALL_STATE(222)] = 10985,
  [SMALL_STATE(223)] = 11001,
  [SMALL_STATE(224)] = 11015,
  [SMALL_STATE(225)] = 11029,
  [SMALL_STATE(226)] = 11043,
  [SMALL_STATE(227)] = 11059,
  [SMALL_STATE(228)] = 11073,
  [SMALL_STATE(229)] = 11089,
  [SMALL_STATE(230)] = 11103,
  [SMALL_STATE(231)] = 11117,
  [SMALL_STATE(232)] = 11131,
  [SMALL_STATE(233)] = 11147,
  [SMALL_STATE(234)] = 11161,
  [SMALL_STATE(235)] = 11174,
  [SMALL_STATE(236)] = 11187,
  [SMALL_STATE(237)] = 11210,
  [SMALL_STATE(238)] = 11223,
  [SMALL_STATE(239)] = 11236,
  [SMALL_STATE(240)] = 11249,
  [SMALL_STATE(241)] = 11268,
  [SMALL_STATE(242)] = 11281,
  [SMALL_STATE(243)] = 11294,
  [SMALL_STATE(244)] = 11307,
  [SMALL_STATE(245)] = 11323,
  [SMALL_STATE(246)] = 11335,
  [SMALL_STATE(247)] = 11355,
  [SMALL_STATE(248)] = 11367,
  [SMALL_STATE(249)] = 11387,
  [SMALL_STATE(250)] = 11399,
  [SMALL_STATE(251)] = 11416,
  [SMALL_STATE(252)] = 11433,
  [SMALL_STATE(253)] = 11450,
  [SMALL_STATE(254)] = 11467,
  [SMALL_STATE(255)] = 11478,
  [SMALL_STATE(256)] = 11491,
  [SMALL_STATE(257)] = 11508,
  [SMALL_STATE(258)] = 11523,
  [SMALL_STATE(259)] = 11540,
  [SMALL_STATE(260)] = 11553,
  [SMALL_STATE(261)] = 11570,
  [SMALL_STATE(262)] = 11587,
  [SMALL_STATE(263)] = 11604,
  [SMALL_STATE(264)] = 11614,
  [SMALL_STATE(265)] = 11628,
  [SMALL_STATE(266)] = 11638,
  [SMALL_STATE(267)] = 11648,
  [SMALL_STATE(268)] = 11662,
  [SMALL_STATE(269)] = 11676,
  [SMALL_STATE(270)] = 11692,
  [SMALL_STATE(271)] = 11708,
  [SMALL_STATE(272)] = 11722,
  [SMALL_STATE(273)] = 11734,
  [SMALL_STATE(274)] = 11748,
  [SMALL_STATE(275)] = 11762,
  [SMALL_STATE(276)] = 11778,
  [SMALL_STATE(277)] = 11792,
  [SMALL_STATE(278)] = 11802,
  [SMALL_STATE(279)] = 11812,
  [SMALL_STATE(280)] = 11826,
  [SMALL_STATE(281)] = 11840,
  [SMALL_STATE(282)] = 11856,
  [SMALL_STATE(283)] = 11870,
  [SMALL_STATE(284)] = 11883,
  [SMALL_STATE(285)] = 11896,
  [SMALL_STATE(286)] = 11909,
  [SMALL_STATE(287)] = 11922,
  [SMALL_STATE(288)] = 11931,
  [SMALL_STATE(289)] = 11944,
  [SMALL_STATE(290)] = 11957,
  [SMALL_STATE(291)] = 11970,
  [SMALL_STATE(292)] = 11983,
  [SMALL_STATE(293)] = 11996,
  [SMALL_STATE(294)] = 12009,
  [SMALL_STATE(295)] = 12022,
  [SMALL_STATE(296)] = 12035,
  [SMALL_STATE(297)] = 12048,
  [SMALL_STATE(298)] = 12061,
  [SMALL_STATE(299)] = 12074,
  [SMALL_STATE(300)] = 12087,
  [SMALL_STATE(301)] = 12100,
  [SMALL_STATE(302)] = 12113,
  [SMALL_STATE(303)] = 12126,
  [SMALL_STATE(304)] = 12139,
  [SMALL_STATE(305)] = 12152,
  [SMALL_STATE(306)] = 12165,
  [SMALL_STATE(307)] = 12178,
  [SMALL_STATE(308)] = 12191,
  [SMALL_STATE(309)] = 12204,
  [SMALL_STATE(310)] = 12217,
  [SMALL_STATE(311)] = 12230,
  [SMALL_STATE(312)] = 12243,
  [SMALL_STATE(313)] = 12256,
  [SMALL_STATE(314)] = 12269,
  [SMALL_STATE(315)] = 12282,
  [SMALL_STATE(316)] = 12295,
  [SMALL_STATE(317)] = 12308,
  [SMALL_STATE(318)] = 12321,
  [SMALL_STATE(319)] = 12334,
  [SMALL_STATE(320)] = 12347,
  [SMALL_STATE(321)] = 12355,
  [SMALL_STATE(322)] = 12365,
  [SMALL_STATE(323)] = 12373,
  [SMALL_STATE(324)] = 12383,
  [SMALL_STATE(325)] = 12391,
  [SMALL_STATE(326)] = 12401,
  [SMALL_STATE(327)] = 12409,
  [SMALL_STATE(328)] = 12417,
  [SMALL_STATE(329)] = 12425,
  [SMALL_STATE(330)] = 12433,
  [SMALL_STATE(331)] = 12443,
  [SMALL_STATE(332)] = 12451,
  [SMALL_STATE(333)] = 12459,
  [SMALL_STATE(334)] = 12467,
  [SMALL_STATE(335)] = 12475,
  [SMALL_STATE(336)] = 12485,
  [SMALL_STATE(337)] = 12495,
  [SMALL_STATE(338)] = 12503,
  [SMALL_STATE(339)] = 12513,
  [SMALL_STATE(340)] = 12523,
  [SMALL_STATE(341)] = 12531,
  [SMALL_STATE(342)] = 12541,
  [SMALL_STATE(343)] = 12549,
  [SMALL_STATE(344)] = 12557,
  [SMALL_STATE(345)] = 12565,
  [SMALL_STATE(346)] = 12573,
  [SMALL_STATE(347)] = 12581,
  [SMALL_STATE(348)] = 12591,
  [SMALL_STATE(349)] = 12601,
  [SMALL_STATE(350)] = 12611,
  [SMALL_STATE(351)] = 12621,
  [SMALL_STATE(352)] = 12631,
  [SMALL_STATE(353)] = 12641,
  [SMALL_STATE(354)] = 12651,
  [SMALL_STATE(355)] = 12659,
  [SMALL_STATE(356)] = 12669,
  [SMALL_STATE(357)] = 12677,
  [SMALL_STATE(358)] = 12687,
  [SMALL_STATE(359)] = 12695,
  [SMALL_STATE(360)] = 12705,
  [SMALL_STATE(361)] = 12713,
  [SMALL_STATE(362)] = 12721,
  [SMALL_STATE(363)] = 12731,
  [SMALL_STATE(364)] = 12739,
  [SMALL_STATE(365)] = 12749,
  [SMALL_STATE(366)] = 12759,
  [SMALL_STATE(367)] = 12767,
  [SMALL_STATE(368)] = 12777,
  [SMALL_STATE(369)] = 12787,
  [SMALL_STATE(370)] = 12795,
  [SMALL_STATE(371)] = 12805,
  [SMALL_STATE(372)] = 12813,
  [SMALL_STATE(373)] = 12823,
  [SMALL_STATE(374)] = 12833,
  [SMALL_STATE(375)] = 12841,
  [SMALL_STATE(376)] = 12849,
  [SMALL_STATE(377)] = 12857,
  [SMALL_STATE(378)] = 12865,
  [SMALL_STATE(379)] = 12872,
  [SMALL_STATE(380)] = 12879,
  [SMALL_STATE(381)] = 12886,
  [SMALL_STATE(382)] = 12893,
  [SMALL_STATE(383)] = 12900,
  [SMALL_STATE(384)] = 12907,
  [SMALL_STATE(385)] = 12914,
  [SMALL_STATE(386)] = 12921,
  [SMALL_STATE(387)] = 12928,
  [SMALL_STATE(388)] = 12935,
  [SMALL_STATE(389)] = 12942,
  [SMALL_STATE(390)] = 12949,
  [SMALL_STATE(391)] = 12956,
  [SMALL_STATE(392)] = 12963,
  [SMALL_STATE(393)] = 12970,
  [SMALL_STATE(394)] = 12977,
  [SMALL_STATE(395)] = 12984,
  [SMALL_STATE(396)] = 12991,
  [SMALL_STATE(397)] = 12998,
  [SMALL_STATE(398)] = 13005,
  [SMALL_STATE(399)] = 13012,
  [SMALL_STATE(400)] = 13019,
  [SMALL_STATE(401)] = 13026,
  [SMALL_STATE(402)] = 13033,
  [SMALL_STATE(403)] = 13040,
  [SMALL_STATE(404)] = 13047,
  [SMALL_STATE(405)] = 13054,
  [SMALL_STATE(406)] = 13061,
  [SMALL_STATE(407)] = 13068,
  [SMALL_STATE(408)] = 13075,
  [SMALL_STATE(409)] = 13082,
  [SMALL_STATE(410)] = 13089,
  [SMALL_STATE(411)] = 13096,
  [SMALL_STATE(412)] = 13103,
  [SMALL_STATE(413)] = 13110,
  [SMALL_STATE(414)] = 13117,
  [SMALL_STATE(415)] = 13124,
  [SMALL_STATE(416)] = 13131,
  [SMALL_STATE(417)] = 13138,
  [SMALL_STATE(418)] = 13145,
  [SMALL_STATE(419)] = 13152,
  [SMALL_STATE(420)] = 13159,
  [SMALL_STATE(421)] = 13166,
  [SMALL_STATE(422)] = 13173,
  [SMALL_STATE(423)] = 13180,
  [SMALL_STATE(424)] = 13187,
  [SMALL_STATE(425)] = 13194,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(355),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(143),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(53),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(177),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(273),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(378),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(415),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [294] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(64),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 29),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 29),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(64),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_type, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 28),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 28),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_not, 2), SHIFT(19),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 27),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 27),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_return_expr, 2), SHIFT(19),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment_expr, 4), SHIFT(19),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_augment, 2), SHIFT(19),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(257),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(325),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(422),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(422),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(330),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 9),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 19),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 11),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 17),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proto, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 8),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 6),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 16),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 5),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 6),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 2, .production_id = 14),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pattern, 1), SHIFT(353),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(254),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(280),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(173),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(71),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(362),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(38),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(153),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(168),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 12),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 10),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 30),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 31),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 3, .production_id = 14),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 18),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 20),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 21),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 22),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 23),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 24),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 3),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [959] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
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
