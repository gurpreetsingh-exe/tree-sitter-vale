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
#define STATE_COUNT 370
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 155
#define ALIAS_COUNT 2
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 31

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
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 4},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 2},
  [20] = {.index = 37, .length = 2},
  [21] = {.index = 39, .length = 3},
  [22] = {.index = 42, .length = 3},
  [23] = {.index = 45, .length = 4},
  [24] = {.index = 49, .length = 3},
  [25] = {.index = 52, .length = 3},
  [26] = {.index = 55, .length = 4},
  [27] = {.index = 59, .length = 4},
  [28] = {.index = 63, .length = 5},
  [29] = {.index = 68, .length = 6},
  [30] = {.index = 74, .length = 2},
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
    {field_name, 0},
  [15] =
    {field_function, 0},
    {field_type_parameters, 1},
  [17] =
    {field_generic_parameters, 1},
    {field_type, 0},
  [19] =
    {field_generic_parameters, 3},
    {field_name, 2},
    {field_parameters, 4},
  [22] =
    {field_name, 2},
    {field_parameters, 3},
    {field_return_type, 4},
  [25] =
    {field_name, 0},
    {field_type, 1},
  [27] =
    {field_name, 0},
    {field_rune, 1},
  [29] =
    {field_generic_parameters, 2},
    {field_name, 1},
    {field_parameters, 3},
    {field_return_type, 4},
  [33] =
    {field_block, 2},
    {field_condition, 1},
  [35] =
    {field_condition, 1},
    {field_then_block, 2},
  [37] =
    {field_field, 2},
    {field_value, 0},
  [39] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [42] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [45] =
    {field_generic_parameters, 3},
    {field_name, 2},
    {field_parameters, 4},
    {field_return_type, 5},
  [49] =
    {field_condition, 1},
    {field_else_block, 3},
    {field_then_block, 2},
  [52] =
    {field_condition, 1},
    {field_else_if, 3},
    {field_then_block, 2},
  [55] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
  [59] =
    {field_condition, 1},
    {field_else_block, 4},
    {field_else_if, 3},
    {field_then_block, 2},
  [63] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
  [68] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
  [74] =
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 2,
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
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 29,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 24,
  [40] = 20,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 21,
  [47] = 47,
  [48] = 23,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 22,
  [55] = 55,
  [56] = 56,
  [57] = 22,
  [58] = 21,
  [59] = 23,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 13,
  [68] = 14,
  [69] = 16,
  [70] = 70,
  [71] = 36,
  [72] = 70,
  [73] = 73,
  [74] = 74,
  [75] = 56,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 44,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 55,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 52,
  [96] = 96,
  [97] = 97,
  [98] = 53,
  [99] = 99,
  [100] = 100,
  [101] = 49,
  [102] = 50,
  [103] = 47,
  [104] = 104,
  [105] = 105,
  [106] = 51,
  [107] = 107,
  [108] = 108,
  [109] = 70,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 120,
  [124] = 124,
  [125] = 125,
  [126] = 120,
  [127] = 119,
  [128] = 128,
  [129] = 129,
  [130] = 121,
  [131] = 131,
  [132] = 116,
  [133] = 117,
  [134] = 131,
  [135] = 135,
  [136] = 118,
  [137] = 124,
  [138] = 121,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 140,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 160,
  [162] = 160,
  [163] = 163,
  [164] = 164,
  [165] = 164,
  [166] = 164,
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
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 167,
  [191] = 172,
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
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 170,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 214,
  [221] = 221,
  [222] = 222,
  [223] = 82,
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
  [236] = 232,
  [237] = 231,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 240,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 239,
  [252] = 252,
  [253] = 253,
  [254] = 252,
  [255] = 255,
  [256] = 256,
  [257] = 242,
  [258] = 258,
  [259] = 259,
  [260] = 248,
  [261] = 261,
  [262] = 247,
  [263] = 263,
  [264] = 246,
  [265] = 258,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 250,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 80,
  [276] = 276,
  [277] = 96,
  [278] = 74,
  [279] = 279,
  [280] = 280,
  [281] = 84,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 90,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 279,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 297,
  [305] = 276,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 311,
  [315] = 287,
  [316] = 316,
  [317] = 317,
  [318] = 293,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 76,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 189,
  [332] = 105,
  [333] = 333,
  [334] = 334,
  [335] = 88,
  [336] = 336,
  [337] = 337,
  [338] = 192,
  [339] = 83,
  [340] = 193,
  [341] = 341,
  [342] = 195,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 330,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 321,
  [353] = 322,
  [354] = 354,
  [355] = 345,
  [356] = 356,
  [357] = 357,
  [358] = 328,
  [359] = 359,
  [360] = 356,
  [361] = 361,
  [362] = 320,
  [363] = 329,
  [364] = 364,
  [365] = 333,
  [366] = 366,
  [367] = 357,
  [368] = 368,
  [369] = 369,
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
      if (eof) ADVANCE(197);
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'K') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(170);
      if (lookahead == 'O') ADVANCE(182);
      if (lookahead == 'P') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'V') ADVANCE(30);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '^') ADVANCE(265);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '^') ADVANCE(265);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(342);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '^') ADVANCE(265);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(342);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '&') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == '[') ADVANCE(242);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(342);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '&') ADVANCE(240);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(215);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(243);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(342);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(215);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'K') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(170);
      if (lookahead == 'O') ADVANCE(182);
      if (lookahead == 'P') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'V') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(215);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '^') ADVANCE(265);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(342);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == 't') ADVANCE(329);
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
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(215);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(243);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(342);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(240);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(242);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(342);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(295);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '8') ADVANCE(255);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(248);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(249);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(253);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(250);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(254);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '>') ADVANCE(261);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(163);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(136);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(171);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(274);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 181:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 182:
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 185:
      if (lookahead == 'y') ADVANCE(227);
      END_STATE();
    case 186:
      if (lookahead == '{') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 187:
      if (lookahead == '}') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 195:
      if (eof) ADVANCE(197);
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'K') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(170);
      if (lookahead == 'O') ADVANCE(182);
      if (lookahead == 'P') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'V') ADVANCE(30);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '^') ADVANCE(265);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 196:
      if (eof) ADVANCE(197);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == ',') ADVANCE(217);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      END_STATE();
    case 197:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DeriveStructDrop);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DeriveInterfaceDrop);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DeriveAnonymousSubstruct);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_exported);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(286);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Ref);
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Kind);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Region);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_Prot);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RefList);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_Ownership);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Variability);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_Mutability);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Location);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_ro);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_ro);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
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
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_imm);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_imm);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
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
      if (lookahead == 'u') ADVANCE(42);
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
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
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
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
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
      if (lookahead == '.') ADVANCE(189);
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
      if (lookahead == 'o') ADVANCE(332);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(342);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(320);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(342);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(307);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(342);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(318);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(282);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(280);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(338);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(336);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(278);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(319);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(275);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(321);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(333);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(312);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(334);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(239);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(323);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(260);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(308);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(335);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(232);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(339);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(325);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(284);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(309);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(311);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(313);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(267);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(340);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(310);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(330);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(337);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(342);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 196},
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
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 7},
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
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
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
  [57] = {.lex_state = 196},
  [58] = {.lex_state = 196},
  [59] = {.lex_state = 196},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 196},
  [68] = {.lex_state = 196},
  [69] = {.lex_state = 196},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 196},
  [72] = {.lex_state = 196},
  [73] = {.lex_state = 196},
  [74] = {.lex_state = 196},
  [75] = {.lex_state = 196},
  [76] = {.lex_state = 196},
  [77] = {.lex_state = 196},
  [78] = {.lex_state = 196},
  [79] = {.lex_state = 196},
  [80] = {.lex_state = 196},
  [81] = {.lex_state = 196},
  [82] = {.lex_state = 196},
  [83] = {.lex_state = 196},
  [84] = {.lex_state = 196},
  [85] = {.lex_state = 196},
  [86] = {.lex_state = 196},
  [87] = {.lex_state = 196},
  [88] = {.lex_state = 196},
  [89] = {.lex_state = 196},
  [90] = {.lex_state = 196},
  [91] = {.lex_state = 196},
  [92] = {.lex_state = 196},
  [93] = {.lex_state = 196},
  [94] = {.lex_state = 196},
  [95] = {.lex_state = 196},
  [96] = {.lex_state = 196},
  [97] = {.lex_state = 196},
  [98] = {.lex_state = 196},
  [99] = {.lex_state = 196},
  [100] = {.lex_state = 196},
  [101] = {.lex_state = 196},
  [102] = {.lex_state = 196},
  [103] = {.lex_state = 196},
  [104] = {.lex_state = 196},
  [105] = {.lex_state = 196},
  [106] = {.lex_state = 196},
  [107] = {.lex_state = 196},
  [108] = {.lex_state = 196},
  [109] = {.lex_state = 196},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 196},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 196},
  [117] = {.lex_state = 196},
  [118] = {.lex_state = 196},
  [119] = {.lex_state = 196},
  [120] = {.lex_state = 196},
  [121] = {.lex_state = 196},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 196},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 196},
  [126] = {.lex_state = 196},
  [127] = {.lex_state = 196},
  [128] = {.lex_state = 196},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 196},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 196},
  [133] = {.lex_state = 196},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 196},
  [136] = {.lex_state = 196},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 196},
  [139] = {.lex_state = 196},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 196},
  [149] = {.lex_state = 196},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 196},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 196},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 196},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 196},
  [175] = {.lex_state = 196},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 196},
  [178] = {.lex_state = 196},
  [179] = {.lex_state = 196},
  [180] = {.lex_state = 196},
  [181] = {.lex_state = 196},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 196},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 196},
  [191] = {.lex_state = 196},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 7},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 7},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 2},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 2},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 196},
  [337] = {.lex_state = 196},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 5},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 196},
  [347] = {.lex_state = 196},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 2},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 2},
  [358] = {.lex_state = 2},
  [359] = {.lex_state = 196},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 2},
  [368] = {.lex_state = 5},
  [369] = {.lex_state = 0},
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
    [sym_source_file] = STATE(361),
    [sym__top_level] = STATE(135),
    [sym_import] = STATE(135),
    [sym_attribute] = STATE(359),
    [sym_extern] = STATE(369),
    [sym_func_header] = STATE(263),
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
    STATE(80), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(320), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(220), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(3), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(45), 5,
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
    STATE(80), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(320), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(220), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(45), 5,
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
    STATE(80), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(320), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(220), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(45), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(126), 11,
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
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(320), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(220), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(45), 5,
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
      anon_sym_return,
    ACTIONS(78), 1,
      anon_sym_not,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(90), 1,
      anon_sym_while,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(96), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      sym_int_lit,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(80), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(320), 1,
      sym_type,
    ACTIONS(81), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(220), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(45), 5,
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
    STATE(80), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(320), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(220), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(8), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(45), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(123), 11,
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
    STATE(80), 1,
      sym__string_literal,
    STATE(156), 1,
      sym_pattern,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(320), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(220), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(45), 5,
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
    STATE(80), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(254), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(149), 16,
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
    STATE(80), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(252), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(149), 16,
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
    STATE(80), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(204), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(352), 2,
      sym_scoped_identifier,
      sym__path,
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
    STATE(80), 1,
      sym__string_literal,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(204), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(352), 2,
      sym_scoped_identifier,
      sym__path,
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
  [1287] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_else,
    STATE(51), 1,
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
    STATE(50), 1,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [1817] = 3,
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
  [1860] = 3,
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
  [1903] = 3,
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
  [1946] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [2019] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [2092] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
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
  [2165] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
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
  [2238] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(116), 16,
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
  [2311] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(136), 16,
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
  [2384] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(87), 16,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(100), 16,
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
  [2530] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [2603] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [2676] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [2749] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [2822] = 3,
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
  [2865] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [2938] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(93), 16,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [3084] = 18,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(94), 16,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
    STATE(80), 1,
      sym__string_literal,
    ACTIONS(35), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
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
  [3418] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
    ACTIONS(192), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(194), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(196), 11,
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
  [3464] = 3,
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
  [3506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 15,
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
    ACTIONS(200), 19,
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
  [3590] = 3,
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
  [3632] = 3,
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
  [3674] = 3,
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
  [3716] = 3,
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
  [3758] = 3,
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
  [3800] = 3,
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
    ACTIONS(176), 19,
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
    ACTIONS(176), 7,
      anon_sym_export,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
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
    STATE(164), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_type_parameter,
    STATE(275), 1,
      sym__string_literal,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(278), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(290), 3,
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
    STATE(164), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(239), 1,
      sym_type_parameter,
    STATE(275), 1,
      sym__string_literal,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(278), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(290), 3,
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
    STATE(164), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(275), 1,
      sym__string_literal,
    STATE(302), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(278), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(290), 3,
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
    STATE(164), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(275), 1,
      sym__string_literal,
    STATE(302), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(278), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(290), 3,
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
    STATE(164), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(275), 1,
      sym__string_literal,
    STATE(302), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(278), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(290), 3,
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
    STATE(164), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(275), 1,
      sym__string_literal,
    STATE(302), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(278), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(290), 3,
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
    STATE(164), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(275), 1,
      sym__string_literal,
    STATE(302), 1,
      sym_type_parameter,
    ACTIONS(234), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(238), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(278), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(290), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4560] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_else,
    STATE(106), 1,
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
    STATE(102), 1,
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
    STATE(99), 1,
      sym_type_parameters,
    ACTIONS(279), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(194), 6,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(190), 10,
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
    ACTIONS(184), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(182), 17,
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
    STATE(99), 1,
      sym_type_parameters,
    ACTIONS(265), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(194), 4,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(190), 12,
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
    STATE(99), 1,
      sym_type_parameters,
    ACTIONS(194), 5,
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
  [4832] = 3,
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
  [4862] = 3,
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
  [4952] = 3,
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
  [4982] = 3,
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
  [5012] = 3,
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
  [5042] = 3,
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
  [5102] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(314), 16,
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
  [5132] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(318), 16,
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
  [5162] = 3,
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
  [5192] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(324), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(322), 16,
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
  [5222] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(330), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(326), 15,
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
  [5254] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(332), 16,
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
  [5284] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(336), 16,
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
  [5314] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(340), 16,
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
  [5344] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
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
  [5392] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_EQ,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(365), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5440] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(330), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(326), 12,
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
  [5478] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_EQ,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(326), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5520] = 3,
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
  [5550] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(372), 16,
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
  [5580] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      anon_sym_EQ,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(326), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_or,
  [5624] = 3,
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
  [5654] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(376), 16,
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
  [5684] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      anon_sym_EQ,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(380), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [5792] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(198), 16,
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
  [5822] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(330), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(326), 14,
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
  [5918] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(391), 16,
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
  [5948] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_EQ,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5996] = 8,
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
    STATE(99), 1,
      sym_type_parameters,
    ACTIONS(194), 4,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(190), 11,
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
  [6034] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(404), 11,
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
  [6061] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_POUND,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(242), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [6114] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(416), 11,
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
  [6141] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_POUND,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(257), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [6194] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6241] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(426), 11,
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
  [6268] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6312] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6356] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6400] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6444] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6488] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6532] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(436), 1,
      anon_sym_GT,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(158), 1,
      sym__type_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_scoped_type_identifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(301), 1,
      sym_generic_parameter,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(307), 2,
      sym_region_parameter,
      sym_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [6582] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6626] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(249), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [6676] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(442), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6718] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6762] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6806] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
    ACTIONS(448), 1,
      anon_sym_import,
    ACTIONS(451), 1,
      anon_sym_POUND,
    ACTIONS(454), 1,
      anon_sym_extern,
    ACTIONS(460), 1,
      anon_sym_export,
    ACTIONS(463), 1,
      anon_sym_func,
    ACTIONS(466), 1,
      anon_sym_struct,
    STATE(263), 1,
      sym_func_header,
    STATE(359), 1,
      sym_attribute,
    STATE(369), 1,
      sym_extern,
    ACTIONS(457), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(128), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [6852] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_GT,
    STATE(158), 1,
      sym__type_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_scoped_type_identifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(301), 1,
      sym_generic_parameter,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(307), 2,
      sym_region_parameter,
      sym_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [6902] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6946] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(249), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [6996] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7040] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7084] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(249), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [7134] = 13,
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
    STATE(263), 1,
      sym_func_header,
    STATE(359), 1,
      sym_attribute,
    STATE(369), 1,
      sym_extern,
    ACTIONS(13), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(128), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [7180] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_block,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7224] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(249), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [7274] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7318] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7359] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(265), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [7406] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_AMP,
    STATE(166), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(282), 1,
      sym_type,
    ACTIONS(483), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [7451] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(258), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [7498] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(195), 1,
      sym_destruct,
    STATE(249), 1,
      sym_pattern,
    STATE(320), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [7545] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(158), 1,
      sym__type_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_scoped_type_identifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(301), 1,
      sym_generic_parameter,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(307), 2,
      sym_region_parameter,
      sym_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [7592] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_AMP,
    STATE(166), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(296), 1,
      sym_type,
    ACTIONS(487), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [7637] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(158), 1,
      sym__type_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(183), 1,
      sym_scoped_type_identifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(245), 1,
      sym_generic_parameter,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(307), 2,
      sym_region_parameter,
      sym_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [7684] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_AMP,
    STATE(166), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(292), 1,
      sym_type,
    ACTIONS(489), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [7729] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7770] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7811] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_AMP,
    STATE(166), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(306), 1,
      sym_type,
    ACTIONS(495), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [7856] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7897] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(333), 1,
      sym_pattern,
    STATE(342), 1,
      sym_destruct,
    STATE(362), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [7944] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(342), 1,
      sym_destruct,
    STATE(362), 1,
      sym_type,
    STATE(365), 1,
      sym_pattern,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(214), 2,
      sym_scoped_identifier,
      sym__path,
  [7991] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_and,
    ACTIONS(357), 1,
      anon_sym_or,
    ACTIONS(363), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_EQ,
    ACTIONS(361), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(359), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [8032] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_BANG,
    STATE(166), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(341), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [8076] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_EQ,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(337), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(352), 2,
      sym_scoped_identifier,
      sym__path,
  [8120] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_AMP,
    STATE(166), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(366), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [8161] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_LT,
    ACTIONS(513), 1,
      anon_sym_Ref,
    STATE(187), 1,
      sym_generic_parameters,
    STATE(283), 1,
      sym_rune,
    ACTIONS(509), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(511), 9,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [8192] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(515), 1,
      sym_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(291), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [8233] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_AMP,
    STATE(166), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(204), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [8274] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(165), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(204), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(352), 2,
      sym_scoped_identifier,
      sym__path,
  [8315] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(515), 1,
      sym_identifier,
    STATE(164), 1,
      sym_region_specifier,
    STATE(188), 1,
      sym_generic_type,
    STATE(204), 1,
      sym_type,
    STATE(183), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(200), 2,
      sym_reference_type,
      sym_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [8356] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      anon_sym_Ref,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 12,
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
  [8383] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(194), 1,
      sym_generic_type,
    STATE(176), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(196), 2,
      sym_reference_type,
      sym_array_type,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [8418] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(194), 1,
      sym_generic_type,
    STATE(176), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(196), 2,
      sym_reference_type,
      sym_array_type,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(352), 2,
      sym_scoped_identifier,
      sym__path,
  [8453] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      anon_sym_AMP,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(194), 1,
      sym_generic_type,
    STATE(176), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(196), 2,
      sym_reference_type,
      sym_array_type,
    STATE(197), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(321), 2,
      sym_scoped_identifier,
      sym__path,
  [8488] = 4,
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
  [8509] = 2,
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
  [8526] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 11,
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
  [8543] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(281), 5,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8564] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 11,
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
  [8581] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 4,
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
  [8602] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 11,
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
  [8619] = 3,
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
  [8636] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_export,
    ACTIONS(543), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8653] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_LT,
    STATE(187), 1,
      sym_generic_parameters,
    ACTIONS(547), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8672] = 3,
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
  [8689] = 3,
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
  [8706] = 3,
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
  [8723] = 3,
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
  [8740] = 3,
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
  [8757] = 3,
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
  [8774] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_LT,
    STATE(187), 1,
      sym_generic_parameters,
    ACTIONS(509), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8793] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 1,
      anon_sym_export,
    ACTIONS(569), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8810] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(573), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8824] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8838] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8852] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_DOT,
    ACTIONS(509), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8868] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8882] = 3,
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
  [8898] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(532), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [8914] = 2,
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
  [8928] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8942] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_DOT,
    ACTIONS(547), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8958] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8972] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(547), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8985] = 2,
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
  [8998] = 2,
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
  [9011] = 2,
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
  [9024] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9037] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9050] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(597), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9063] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_ro,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(599), 3,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [9082] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [9095] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      sym_identifier,
    STATE(349), 1,
      sym_import_wildcard,
    STATE(350), 1,
      sym_import_path,
    STATE(288), 2,
      sym_scoped_identifier,
      sym__path,
  [9118] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9130] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9142] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9154] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_LT,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_generic_parameters,
    STATE(324), 1,
      sym_mutability,
    ACTIONS(623), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9174] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(281), 4,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
  [9190] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_LT,
    ACTIONS(625), 1,
      anon_sym_LBRACE,
    STATE(227), 1,
      sym_generic_parameters,
    STATE(323), 1,
      sym_mutability,
    ACTIONS(623), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9210] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(629), 1,
      sym_identifier,
    STATE(155), 1,
      sym__field_identifier,
    STATE(221), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9227] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(221), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9244] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      anon_sym_DOT,
    ACTIONS(587), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [9257] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 1,
      anon_sym_BANG,
    STATE(346), 1,
      sym_attribute_name,
    ACTIONS(635), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [9272] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(222), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9289] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(221), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9306] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(213), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9323] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(212), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9340] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(645), 1,
      anon_sym_DOT,
    ACTIONS(587), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_identifier,
  [9353] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    ACTIONS(650), 1,
      sym_identifier,
    STATE(155), 1,
      sym__field_identifier,
    STATE(221), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9370] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(221), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9387] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9398] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__field_identifier,
    STATE(217), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9415] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
    ACTIONS(653), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [9429] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(336), 1,
      sym_attribute_name,
    ACTIONS(635), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [9441] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
    STATE(324), 1,
      sym_mutability,
    ACTIONS(623), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9455] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    STATE(343), 1,
      sym_mutability,
    ACTIONS(623), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9469] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [9479] = 4,
    ACTIONS(660), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(662), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9493] = 4,
    ACTIONS(660), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_DQUOTE,
    STATE(236), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(667), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9507] = 4,
    ACTIONS(660), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(671), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9521] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_parameters,
    STATE(317), 1,
      sym_generic_parameters,
  [9537] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_parameters,
    STATE(312), 1,
      sym_generic_parameters,
  [9553] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_LT,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(199), 1,
      sym__type_identifier,
    STATE(310), 1,
      sym_type_parameters,
  [9569] = 4,
    ACTIONS(660), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(671), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9583] = 4,
    ACTIONS(660), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(683), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9597] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_LT,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(198), 1,
      sym__type_identifier,
    STATE(295), 1,
      sym_type_parameters,
  [9613] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_GT,
    STATE(247), 1,
      aux_sym_type_parameters_repeat1,
  [9626] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9639] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [9648] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
    STATE(250), 1,
      aux_sym_destruct_repeat1,
  [9661] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_parameters_repeat1,
  [9674] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9687] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_GT,
    STATE(267), 1,
      aux_sym_generic_parameters_repeat1,
  [9700] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9713] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_type_parameters_repeat1,
  [9726] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    ACTIONS(713), 1,
      anon_sym_if,
    STATE(47), 1,
      sym_block,
  [9739] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(653), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9748] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9761] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_GT,
    STATE(262), 1,
      aux_sym_type_parameters_repeat1,
  [9774] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_destruct_repeat1,
  [9787] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(725), 1,
      sym_int_lit,
    STATE(319), 1,
      sym__type_identifier,
  [9800] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_destruct_repeat1,
  [9813] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_GT,
    STATE(255), 1,
      aux_sym_type_parameters_repeat1,
  [9826] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_GT,
    STATE(256), 1,
      aux_sym_generic_parameters_repeat1,
  [9839] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      aux_sym_destruct_repeat1,
  [9852] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    STATE(264), 1,
      aux_sym_destruct_repeat1,
  [9865] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_parameters_repeat1,
  [9878] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(748), 1,
      anon_sym_if,
    STATE(103), 1,
      sym_block,
  [9891] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_call_expr_repeat1,
  [9904] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      anon_sym_GT,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_type_parameters_repeat1,
  [9917] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym_block,
  [9930] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [9943] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_destruct_repeat1,
  [9956] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_parameters_repeat1,
  [9969] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 1,
      anon_sym_GT,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_generic_parameters_repeat1,
  [9982] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym__string_literal,
    STATE(334), 1,
      sym_string_literal,
  [9995] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      aux_sym_destruct_repeat1,
  [10008] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(767), 1,
      sym_identifier,
    STATE(243), 1,
      sym_parameter,
  [10021] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_call_expr_repeat1,
  [10034] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [10042] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
    ACTIONS(773), 1,
      anon_sym_func,
  [10052] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(209), 1,
      sym__type_identifier,
  [10062] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10070] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [10080] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10088] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10096] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
  [10106] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_STAR,
    ACTIONS(777), 1,
      sym_identifier,
  [10116] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10124] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10132] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10140] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10148] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(785), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [10156] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10164] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block,
  [10174] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    ACTIONS(789), 1,
      anon_sym_DOT,
  [10184] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(767), 1,
      sym_identifier,
    STATE(299), 1,
      sym_parameter,
  [10194] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10202] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(793), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10210] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10218] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 1,
      sym_identifier,
    STATE(186), 1,
      sym__type_identifier,
  [10228] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [10238] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(201), 1,
      sym__type_identifier,
  [10248] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(799), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10256] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
  [10266] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(186), 1,
      sym__type_identifier,
  [10276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(743), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10284] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10292] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(739), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10300] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(734), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10308] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [10316] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
  [10326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_block,
  [10336] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(805), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10344] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10352] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(211), 1,
      sym__type_identifier,
  [10362] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
  [10372] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(202), 1,
      sym__type_identifier,
  [10382] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(809), 1,
      sym_identifier,
    STATE(185), 1,
      sym__type_identifier,
  [10392] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_parameters,
  [10402] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(523), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [10410] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 1,
      sym_identifier,
    STATE(185), 1,
      sym__type_identifier,
  [10420] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
  [10430] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 1,
      sym_identifier,
    STATE(86), 1,
      sym__field_identifier,
  [10440] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_parameters,
  [10450] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      sym_identifier,
    STATE(186), 1,
      sym__type_identifier,
  [10460] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
  [10467] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      anon_sym_LBRACK,
  [10474] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_DOT,
  [10481] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_EQ_GT,
  [10488] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
  [10495] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
  [10502] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(825), 1,
      anon_sym_func,
  [10509] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      sym_identifier,
  [10516] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_SEMI,
  [10523] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(829), 1,
      anon_sym_EQ_GT,
  [10530] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
  [10537] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      anon_sym_GT,
  [10544] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_in,
  [10551] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      sym_identifier,
  [10558] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      anon_sym_in,
  [10565] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [10572] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_identifier,
  [10579] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_struct,
  [10586] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      anon_sym_EQ,
  [10593] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(583), 1,
      anon_sym_in,
  [10600] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      sym_identifier,
  [10607] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 1,
      anon_sym_in,
  [10614] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_SEMI,
  [10621] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 1,
      anon_sym_in,
  [10628] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
  [10635] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      sym_identifier,
  [10642] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(845), 1,
      anon_sym_EQ_GT,
  [10649] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_struct,
  [10656] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_struct,
  [10663] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 1,
      anon_sym_GT,
  [10670] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      anon_sym_SEMI,
  [10677] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 1,
      anon_sym_SEMI,
  [10684] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(853), 1,
      anon_sym_SEMI,
  [10691] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      anon_sym_DOT,
  [10698] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      anon_sym_EQ_GT,
  [10705] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(857), 1,
      sym_identifier,
  [10712] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 1,
      anon_sym_EQ_GT,
  [10719] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_if,
  [10726] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(861), 1,
      anon_sym_EQ_GT,
  [10733] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      anon_sym_EQ_GT,
  [10740] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(865), 1,
      anon_sym_struct,
  [10747] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(748), 1,
      anon_sym_if,
  [10754] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 1,
      ts_builtin_sym_end,
  [10761] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 1,
      anon_sym_LBRACK,
  [10768] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [10775] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
  [10782] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 1,
      anon_sym_in,
  [10789] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_SEMI,
  [10796] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_EQ_GT,
  [10803] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(877), 1,
      sym_identifier,
  [10810] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
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
  [SMALL_STATE(22)] = 1860,
  [SMALL_STATE(23)] = 1903,
  [SMALL_STATE(24)] = 1946,
  [SMALL_STATE(25)] = 2019,
  [SMALL_STATE(26)] = 2092,
  [SMALL_STATE(27)] = 2165,
  [SMALL_STATE(28)] = 2238,
  [SMALL_STATE(29)] = 2311,
  [SMALL_STATE(30)] = 2384,
  [SMALL_STATE(31)] = 2457,
  [SMALL_STATE(32)] = 2530,
  [SMALL_STATE(33)] = 2603,
  [SMALL_STATE(34)] = 2676,
  [SMALL_STATE(35)] = 2749,
  [SMALL_STATE(36)] = 2822,
  [SMALL_STATE(37)] = 2865,
  [SMALL_STATE(38)] = 2938,
  [SMALL_STATE(39)] = 3011,
  [SMALL_STATE(40)] = 3084,
  [SMALL_STATE(41)] = 3157,
  [SMALL_STATE(42)] = 3230,
  [SMALL_STATE(43)] = 3303,
  [SMALL_STATE(44)] = 3376,
  [SMALL_STATE(45)] = 3418,
  [SMALL_STATE(46)] = 3464,
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
  [SMALL_STATE(84)] = 5132,
  [SMALL_STATE(85)] = 5162,
  [SMALL_STATE(86)] = 5192,
  [SMALL_STATE(87)] = 5222,
  [SMALL_STATE(88)] = 5254,
  [SMALL_STATE(89)] = 5284,
  [SMALL_STATE(90)] = 5314,
  [SMALL_STATE(91)] = 5344,
  [SMALL_STATE(92)] = 5392,
  [SMALL_STATE(93)] = 5440,
  [SMALL_STATE(94)] = 5478,
  [SMALL_STATE(95)] = 5520,
  [SMALL_STATE(96)] = 5550,
  [SMALL_STATE(97)] = 5580,
  [SMALL_STATE(98)] = 5624,
  [SMALL_STATE(99)] = 5654,
  [SMALL_STATE(100)] = 5684,
  [SMALL_STATE(101)] = 5732,
  [SMALL_STATE(102)] = 5762,
  [SMALL_STATE(103)] = 5792,
  [SMALL_STATE(104)] = 5822,
  [SMALL_STATE(105)] = 5858,
  [SMALL_STATE(106)] = 5888,
  [SMALL_STATE(107)] = 5918,
  [SMALL_STATE(108)] = 5948,
  [SMALL_STATE(109)] = 5996,
  [SMALL_STATE(110)] = 6034,
  [SMALL_STATE(111)] = 6061,
  [SMALL_STATE(112)] = 6114,
  [SMALL_STATE(113)] = 6141,
  [SMALL_STATE(114)] = 6194,
  [SMALL_STATE(115)] = 6241,
  [SMALL_STATE(116)] = 6268,
  [SMALL_STATE(117)] = 6312,
  [SMALL_STATE(118)] = 6356,
  [SMALL_STATE(119)] = 6400,
  [SMALL_STATE(120)] = 6444,
  [SMALL_STATE(121)] = 6488,
  [SMALL_STATE(122)] = 6532,
  [SMALL_STATE(123)] = 6582,
  [SMALL_STATE(124)] = 6626,
  [SMALL_STATE(125)] = 6676,
  [SMALL_STATE(126)] = 6718,
  [SMALL_STATE(127)] = 6762,
  [SMALL_STATE(128)] = 6806,
  [SMALL_STATE(129)] = 6852,
  [SMALL_STATE(130)] = 6902,
  [SMALL_STATE(131)] = 6946,
  [SMALL_STATE(132)] = 6996,
  [SMALL_STATE(133)] = 7040,
  [SMALL_STATE(134)] = 7084,
  [SMALL_STATE(135)] = 7134,
  [SMALL_STATE(136)] = 7180,
  [SMALL_STATE(137)] = 7224,
  [SMALL_STATE(138)] = 7274,
  [SMALL_STATE(139)] = 7318,
  [SMALL_STATE(140)] = 7359,
  [SMALL_STATE(141)] = 7406,
  [SMALL_STATE(142)] = 7451,
  [SMALL_STATE(143)] = 7498,
  [SMALL_STATE(144)] = 7545,
  [SMALL_STATE(145)] = 7592,
  [SMALL_STATE(146)] = 7637,
  [SMALL_STATE(147)] = 7684,
  [SMALL_STATE(148)] = 7729,
  [SMALL_STATE(149)] = 7770,
  [SMALL_STATE(150)] = 7811,
  [SMALL_STATE(151)] = 7856,
  [SMALL_STATE(152)] = 7897,
  [SMALL_STATE(153)] = 7944,
  [SMALL_STATE(154)] = 7991,
  [SMALL_STATE(155)] = 8032,
  [SMALL_STATE(156)] = 8076,
  [SMALL_STATE(157)] = 8120,
  [SMALL_STATE(158)] = 8161,
  [SMALL_STATE(159)] = 8192,
  [SMALL_STATE(160)] = 8233,
  [SMALL_STATE(161)] = 8274,
  [SMALL_STATE(162)] = 8315,
  [SMALL_STATE(163)] = 8356,
  [SMALL_STATE(164)] = 8383,
  [SMALL_STATE(165)] = 8418,
  [SMALL_STATE(166)] = 8453,
  [SMALL_STATE(167)] = 8488,
  [SMALL_STATE(168)] = 8509,
  [SMALL_STATE(169)] = 8526,
  [SMALL_STATE(170)] = 8543,
  [SMALL_STATE(171)] = 8564,
  [SMALL_STATE(172)] = 8581,
  [SMALL_STATE(173)] = 8602,
  [SMALL_STATE(174)] = 8619,
  [SMALL_STATE(175)] = 8636,
  [SMALL_STATE(176)] = 8653,
  [SMALL_STATE(177)] = 8672,
  [SMALL_STATE(178)] = 8689,
  [SMALL_STATE(179)] = 8706,
  [SMALL_STATE(180)] = 8723,
  [SMALL_STATE(181)] = 8740,
  [SMALL_STATE(182)] = 8757,
  [SMALL_STATE(183)] = 8774,
  [SMALL_STATE(184)] = 8793,
  [SMALL_STATE(185)] = 8810,
  [SMALL_STATE(186)] = 8824,
  [SMALL_STATE(187)] = 8838,
  [SMALL_STATE(188)] = 8852,
  [SMALL_STATE(189)] = 8868,
  [SMALL_STATE(190)] = 8882,
  [SMALL_STATE(191)] = 8898,
  [SMALL_STATE(192)] = 8914,
  [SMALL_STATE(193)] = 8928,
  [SMALL_STATE(194)] = 8942,
  [SMALL_STATE(195)] = 8958,
  [SMALL_STATE(196)] = 8972,
  [SMALL_STATE(197)] = 8985,
  [SMALL_STATE(198)] = 8998,
  [SMALL_STATE(199)] = 9011,
  [SMALL_STATE(200)] = 9024,
  [SMALL_STATE(201)] = 9037,
  [SMALL_STATE(202)] = 9050,
  [SMALL_STATE(203)] = 9063,
  [SMALL_STATE(204)] = 9082,
  [SMALL_STATE(205)] = 9095,
  [SMALL_STATE(206)] = 9118,
  [SMALL_STATE(207)] = 9130,
  [SMALL_STATE(208)] = 9142,
  [SMALL_STATE(209)] = 9154,
  [SMALL_STATE(210)] = 9174,
  [SMALL_STATE(211)] = 9190,
  [SMALL_STATE(212)] = 9210,
  [SMALL_STATE(213)] = 9227,
  [SMALL_STATE(214)] = 9244,
  [SMALL_STATE(215)] = 9257,
  [SMALL_STATE(216)] = 9272,
  [SMALL_STATE(217)] = 9289,
  [SMALL_STATE(218)] = 9306,
  [SMALL_STATE(219)] = 9323,
  [SMALL_STATE(220)] = 9340,
  [SMALL_STATE(221)] = 9353,
  [SMALL_STATE(222)] = 9370,
  [SMALL_STATE(223)] = 9387,
  [SMALL_STATE(224)] = 9398,
  [SMALL_STATE(225)] = 9415,
  [SMALL_STATE(226)] = 9429,
  [SMALL_STATE(227)] = 9441,
  [SMALL_STATE(228)] = 9455,
  [SMALL_STATE(229)] = 9469,
  [SMALL_STATE(230)] = 9479,
  [SMALL_STATE(231)] = 9493,
  [SMALL_STATE(232)] = 9507,
  [SMALL_STATE(233)] = 9521,
  [SMALL_STATE(234)] = 9537,
  [SMALL_STATE(235)] = 9553,
  [SMALL_STATE(236)] = 9569,
  [SMALL_STATE(237)] = 9583,
  [SMALL_STATE(238)] = 9597,
  [SMALL_STATE(239)] = 9613,
  [SMALL_STATE(240)] = 9626,
  [SMALL_STATE(241)] = 9639,
  [SMALL_STATE(242)] = 9648,
  [SMALL_STATE(243)] = 9661,
  [SMALL_STATE(244)] = 9674,
  [SMALL_STATE(245)] = 9687,
  [SMALL_STATE(246)] = 9700,
  [SMALL_STATE(247)] = 9713,
  [SMALL_STATE(248)] = 9726,
  [SMALL_STATE(249)] = 9739,
  [SMALL_STATE(250)] = 9748,
  [SMALL_STATE(251)] = 9761,
  [SMALL_STATE(252)] = 9774,
  [SMALL_STATE(253)] = 9787,
  [SMALL_STATE(254)] = 9800,
  [SMALL_STATE(255)] = 9813,
  [SMALL_STATE(256)] = 9826,
  [SMALL_STATE(257)] = 9839,
  [SMALL_STATE(258)] = 9852,
  [SMALL_STATE(259)] = 9865,
  [SMALL_STATE(260)] = 9878,
  [SMALL_STATE(261)] = 9891,
  [SMALL_STATE(262)] = 9904,
  [SMALL_STATE(263)] = 9917,
  [SMALL_STATE(264)] = 9930,
  [SMALL_STATE(265)] = 9943,
  [SMALL_STATE(266)] = 9956,
  [SMALL_STATE(267)] = 9969,
  [SMALL_STATE(268)] = 9982,
  [SMALL_STATE(269)] = 9995,
  [SMALL_STATE(270)] = 10008,
  [SMALL_STATE(271)] = 10021,
  [SMALL_STATE(272)] = 10034,
  [SMALL_STATE(273)] = 10042,
  [SMALL_STATE(274)] = 10052,
  [SMALL_STATE(275)] = 10062,
  [SMALL_STATE(276)] = 10070,
  [SMALL_STATE(277)] = 10080,
  [SMALL_STATE(278)] = 10088,
  [SMALL_STATE(279)] = 10096,
  [SMALL_STATE(280)] = 10106,
  [SMALL_STATE(281)] = 10116,
  [SMALL_STATE(282)] = 10124,
  [SMALL_STATE(283)] = 10132,
  [SMALL_STATE(284)] = 10140,
  [SMALL_STATE(285)] = 10148,
  [SMALL_STATE(286)] = 10156,
  [SMALL_STATE(287)] = 10164,
  [SMALL_STATE(288)] = 10174,
  [SMALL_STATE(289)] = 10184,
  [SMALL_STATE(290)] = 10194,
  [SMALL_STATE(291)] = 10202,
  [SMALL_STATE(292)] = 10210,
  [SMALL_STATE(293)] = 10218,
  [SMALL_STATE(294)] = 10228,
  [SMALL_STATE(295)] = 10238,
  [SMALL_STATE(296)] = 10248,
  [SMALL_STATE(297)] = 10256,
  [SMALL_STATE(298)] = 10266,
  [SMALL_STATE(299)] = 10276,
  [SMALL_STATE(300)] = 10284,
  [SMALL_STATE(301)] = 10292,
  [SMALL_STATE(302)] = 10300,
  [SMALL_STATE(303)] = 10308,
  [SMALL_STATE(304)] = 10316,
  [SMALL_STATE(305)] = 10326,
  [SMALL_STATE(306)] = 10336,
  [SMALL_STATE(307)] = 10344,
  [SMALL_STATE(308)] = 10352,
  [SMALL_STATE(309)] = 10362,
  [SMALL_STATE(310)] = 10372,
  [SMALL_STATE(311)] = 10382,
  [SMALL_STATE(312)] = 10392,
  [SMALL_STATE(313)] = 10402,
  [SMALL_STATE(314)] = 10410,
  [SMALL_STATE(315)] = 10420,
  [SMALL_STATE(316)] = 10430,
  [SMALL_STATE(317)] = 10440,
  [SMALL_STATE(318)] = 10450,
  [SMALL_STATE(319)] = 10460,
  [SMALL_STATE(320)] = 10467,
  [SMALL_STATE(321)] = 10474,
  [SMALL_STATE(322)] = 10481,
  [SMALL_STATE(323)] = 10488,
  [SMALL_STATE(324)] = 10495,
  [SMALL_STATE(325)] = 10502,
  [SMALL_STATE(326)] = 10509,
  [SMALL_STATE(327)] = 10516,
  [SMALL_STATE(328)] = 10523,
  [SMALL_STATE(329)] = 10530,
  [SMALL_STATE(330)] = 10537,
  [SMALL_STATE(331)] = 10544,
  [SMALL_STATE(332)] = 10551,
  [SMALL_STATE(333)] = 10558,
  [SMALL_STATE(334)] = 10565,
  [SMALL_STATE(335)] = 10572,
  [SMALL_STATE(336)] = 10579,
  [SMALL_STATE(337)] = 10586,
  [SMALL_STATE(338)] = 10593,
  [SMALL_STATE(339)] = 10600,
  [SMALL_STATE(340)] = 10607,
  [SMALL_STATE(341)] = 10614,
  [SMALL_STATE(342)] = 10621,
  [SMALL_STATE(343)] = 10628,
  [SMALL_STATE(344)] = 10635,
  [SMALL_STATE(345)] = 10642,
  [SMALL_STATE(346)] = 10649,
  [SMALL_STATE(347)] = 10656,
  [SMALL_STATE(348)] = 10663,
  [SMALL_STATE(349)] = 10670,
  [SMALL_STATE(350)] = 10677,
  [SMALL_STATE(351)] = 10684,
  [SMALL_STATE(352)] = 10691,
  [SMALL_STATE(353)] = 10698,
  [SMALL_STATE(354)] = 10705,
  [SMALL_STATE(355)] = 10712,
  [SMALL_STATE(356)] = 10719,
  [SMALL_STATE(357)] = 10726,
  [SMALL_STATE(358)] = 10733,
  [SMALL_STATE(359)] = 10740,
  [SMALL_STATE(360)] = 10747,
  [SMALL_STATE(361)] = 10754,
  [SMALL_STATE(362)] = 10761,
  [SMALL_STATE(363)] = 10768,
  [SMALL_STATE(364)] = 10775,
  [SMALL_STATE(365)] = 10782,
  [SMALL_STATE(366)] = 10789,
  [SMALL_STATE(367)] = 10796,
  [SMALL_STATE(368)] = 10803,
  [SMALL_STATE(369)] = 10810,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(314),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(113),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(96),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(237),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 25),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 25),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 19),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 19),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(356),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 30),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 30),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 24),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 24),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 27),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 27),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 18),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 18),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(360),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [268] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(61),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym__path, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(61),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 26),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 26),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 29),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 29),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 9),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 9),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 20),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 20),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 21),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 21),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 22),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 22),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_not, 2), SHIFT(15),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_return_expr, 2), SHIFT(15),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 11),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 11),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment_expr, 4), SHIFT(15),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 28),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 28),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_augment, 2), SHIFT(15),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(369),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(369),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(368),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(308),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 13),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 6),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 5),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 5),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 8),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proto, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 5),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 12),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_specifier, 2, .production_id = 10),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 2, .production_id = 10),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_region_specifier, 2, .production_id = 10),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pattern, 1), SHIFT(293),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(223),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(143),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(230),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(66),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(144),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(289),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(34),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 17),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 16),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 15),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 14),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 23),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 3, .production_id = 10),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [867] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
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
