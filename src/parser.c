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
#define STATE_COUNT 360
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 2
#define TOKEN_COUNT 80
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
  anon_sym_exported = 13,
  anon_sym_func = 14,
  anon_sym_LT = 15,
  anon_sym_COMMA = 16,
  anon_sym_GT = 17,
  anon_sym_Int = 18,
  anon_sym_Ref = 19,
  anon_sym_Kind = 20,
  anon_sym_Region = 21,
  anon_sym_Prot = 22,
  anon_sym_RefList = 23,
  anon_sym_Ownership = 24,
  anon_sym_Variability = 25,
  anon_sym_Mutability = 26,
  anon_sym_Location = 27,
  anon_sym_struct = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  anon_sym_mut = 31,
  anon_sym_imm = 32,
  anon_sym_AMP = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_bool = 36,
  anon_sym_float = 37,
  anon_sym_str = 38,
  anon_sym_void = 39,
  anon_sym_i32 = 40,
  anon_sym_i64 = 41,
  anon_sym_i16 = 42,
  anon_sym_i8 = 43,
  anon_sym_u32 = 44,
  anon_sym_u64 = 45,
  anon_sym_u16 = 46,
  anon_sym_u8 = 47,
  anon_sym_EQ = 48,
  anon_sym_return = 49,
  anon_sym_EQ_GT = 50,
  anon_sym_not = 51,
  anon_sym_AMP_AMP = 52,
  anon_sym_CARET = 53,
  anon_sym_set = 54,
  anon_sym_true = 55,
  anon_sym_false = 56,
  anon_sym_while = 57,
  anon_sym_foreach = 58,
  anon_sym_in = 59,
  anon_sym_if = 60,
  anon_sym_else = 61,
  anon_sym_and = 62,
  anon_sym_or = 63,
  anon_sym_LT_EQ_GT = 64,
  anon_sym_LT_EQ = 65,
  anon_sym_GT_EQ = 66,
  anon_sym_EQ_EQ_EQ = 67,
  anon_sym_EQ_EQ = 68,
  anon_sym_BANG_EQ = 69,
  anon_sym_PLUS = 70,
  anon_sym_DASH = 71,
  anon_sym_SLASH = 72,
  sym_line_comment = 73,
  sym_int_lit = 74,
  sym_float_lit = 75,
  sym_escape_sequence = 76,
  anon_sym_DQUOTE = 77,
  aux_sym__string_literal_token1 = 78,
  sym_identifier = 79,
  sym_source_file = 80,
  sym__top_level = 81,
  sym_import = 82,
  sym_import_path = 83,
  sym_attribute_name = 84,
  sym_attribute = 85,
  sym_scoped_identifier = 86,
  sym_scoped_type_identifier = 87,
  sym_import_wilacard = 88,
  sym_extern = 89,
  sym_func_header = 90,
  sym_func_proto = 91,
  sym_function_definition = 92,
  sym_generic_parameters = 93,
  sym_rune = 94,
  sym_generic_parameter = 95,
  sym_parameters = 96,
  sym_parameter = 97,
  sym_struct_definition = 98,
  sym_struct_field = 99,
  sym_mutability = 100,
  sym_type = 101,
  sym_reference_type = 102,
  sym_array_type = 103,
  sym_dynamic_array_type = 104,
  sym_static_array_type = 105,
  sym_generic_type = 106,
  sym_block = 107,
  sym_expr_statement = 108,
  sym__statement = 109,
  sym_pattern = 110,
  sym_destruct = 111,
  sym_variable_definition = 112,
  sym_return_expr = 113,
  sym__expr = 114,
  sym_parenthesized_expr = 115,
  sym__expr_ending_with_block = 116,
  sym_lambda = 117,
  sym_not = 118,
  sym_augment = 119,
  sym_field_expr = 120,
  sym_assignment_expr = 121,
  sym_literal = 122,
  sym_bool_lit = 123,
  sym_call_expr = 124,
  sym_generic_function = 125,
  sym_type_parameters = 126,
  sym_type_parameter = 127,
  sym_while_expr = 128,
  sym_foreach = 129,
  sym_if_expr = 130,
  sym_else_if_expr = 131,
  sym_else_expr = 132,
  sym_binary_expr = 133,
  sym_string_literal = 134,
  sym__string_literal = 135,
  sym__type_identifier = 136,
  sym__path = 137,
  sym__field_identifier = 138,
  aux_sym_source_file_repeat1 = 139,
  aux_sym_generic_parameters_repeat1 = 140,
  aux_sym_parameters_repeat1 = 141,
  aux_sym_struct_definition_repeat1 = 142,
  aux_sym_block_repeat1 = 143,
  aux_sym_destruct_repeat1 = 144,
  aux_sym_call_expr_repeat1 = 145,
  aux_sym_type_parameters_repeat1 = 146,
  aux_sym_if_expr_repeat1 = 147,
  aux_sym__string_literal_repeat1 = 148,
  alias_sym_field_identifier = 149,
  alias_sym_type_identifier = 150,
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
  [sym_import_wilacard] = "import_wilacard",
  [sym_extern] = "extern",
  [sym_func_header] = "func_header",
  [sym_func_proto] = "func_proto",
  [sym_function_definition] = "function_definition",
  [sym_generic_parameters] = "generic_parameters",
  [sym_rune] = "rune",
  [sym_generic_parameter] = "generic_parameter",
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
  [sym_import_wilacard] = sym_import_wilacard,
  [sym_extern] = sym_extern,
  [sym_func_header] = sym_func_header,
  [sym_func_proto] = sym_func_proto,
  [sym_function_definition] = sym_function_definition,
  [sym_generic_parameters] = sym_generic_parameters,
  [sym_rune] = sym_rune,
  [sym_generic_parameter] = sym_generic_parameter,
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
  [sym_import_wilacard] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 2,
  [7] = 4,
  [8] = 8,
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
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 22,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 25,
  [41] = 41,
  [42] = 20,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 27,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 29,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 28,
  [57] = 29,
  [58] = 28,
  [59] = 27,
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
  [72] = 24,
  [73] = 73,
  [74] = 54,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 55,
  [81] = 81,
  [82] = 53,
  [83] = 83,
  [84] = 44,
  [85] = 85,
  [86] = 46,
  [87] = 48,
  [88] = 88,
  [89] = 71,
  [90] = 51,
  [91] = 45,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 50,
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
  [111] = 71,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 116,
  [118] = 118,
  [119] = 118,
  [120] = 120,
  [121] = 121,
  [122] = 115,
  [123] = 121,
  [124] = 121,
  [125] = 125,
  [126] = 115,
  [127] = 125,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 120,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 133,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 145,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 148,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
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
  [170] = 170,
  [171] = 167,
  [172] = 172,
  [173] = 173,
  [174] = 168,
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
  [201] = 109,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 94,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 203,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 217,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 222,
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
  [241] = 229,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 246,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 233,
  [254] = 234,
  [255] = 252,
  [256] = 256,
  [257] = 245,
  [258] = 244,
  [259] = 237,
  [260] = 260,
  [261] = 260,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 97,
  [268] = 268,
  [269] = 99,
  [270] = 105,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 78,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 95,
  [280] = 280,
  [281] = 264,
  [282] = 282,
  [283] = 271,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 263,
  [290] = 277,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 294,
  [296] = 275,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 81,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 177,
  [319] = 319,
  [320] = 98,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 79,
  [329] = 329,
  [330] = 322,
  [331] = 173,
  [332] = 332,
  [333] = 93,
  [334] = 334,
  [335] = 335,
  [336] = 172,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 316,
  [343] = 313,
  [344] = 344,
  [345] = 324,
  [346] = 346,
  [347] = 337,
  [348] = 341,
  [349] = 349,
  [350] = 315,
  [351] = 351,
  [352] = 327,
  [353] = 312,
  [354] = 354,
  [355] = 311,
  [356] = 356,
  [357] = 180,
  [358] = 358,
  [359] = 359,
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
      if (eof) ADVANCE(195);
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '&') ADVANCE(234);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'K') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(169);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(66);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '&') ADVANCE(234);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '^') ADVANCE(258);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(334);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == 'w') ADVANCE(310);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '&') ADVANCE(234);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '^') ADVANCE(258);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(334);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'f') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == 'w') ADVANCE(310);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '&') ADVANCE(233);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '[') ADVANCE(235);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(334);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(202);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '&') ADVANCE(233);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(236);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(334);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(202);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'K') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(169);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '&') ADVANCE(234);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '^') ADVANCE(258);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(334);
      if (lookahead == 'f') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == 'w') ADVANCE(310);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '&') ADVANCE(233);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(236);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(334);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(333);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(288);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8') ADVANCE(248);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(241);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(245);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(242);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(246);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(243);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(247);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(283);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(135);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(137);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(170);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(210);
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
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(267);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 179:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 180:
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 182:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 184:
      if (lookahead == '{') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 185:
      if (lookahead == '}') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 193:
      if (eof) ADVANCE(195);
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '&') ADVANCE(234);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'K') ADVANCE(70);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(169);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(66);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 194:
      if (eof) ADVANCE(195);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(197);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(194)
      END_STATE();
    case 195:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DeriveStructDrop);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DeriveInterfaceDrop);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DeriveAnonymousSubstruct);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(283);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_exported);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(280);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_Ref);
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_Kind);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Region);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Prot);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RefList);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Ownership);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Variability);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_Mutability);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_Location);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_imm);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_imm);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(257);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_set);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_int_lit);
      if (lookahead == '.') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_int_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(324);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(334);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(313);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(334);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(300);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(334);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(311);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(275);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(262);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(264);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(271);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(312);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(268);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(314);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(325);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(305);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(326);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(232);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(316);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(253);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(301);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(327);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(331);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(318);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(277);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(302);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(304);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(306);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(260);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(230);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(332);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(303);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(322);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(329);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(334);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 194},
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
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
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
  [57] = {.lex_state = 194},
  [58] = {.lex_state = 194},
  [59] = {.lex_state = 194},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 194},
  [68] = {.lex_state = 194},
  [69] = {.lex_state = 194},
  [70] = {.lex_state = 194},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 194},
  [73] = {.lex_state = 194},
  [74] = {.lex_state = 194},
  [75] = {.lex_state = 194},
  [76] = {.lex_state = 194},
  [77] = {.lex_state = 194},
  [78] = {.lex_state = 194},
  [79] = {.lex_state = 194},
  [80] = {.lex_state = 194},
  [81] = {.lex_state = 194},
  [82] = {.lex_state = 194},
  [83] = {.lex_state = 194},
  [84] = {.lex_state = 194},
  [85] = {.lex_state = 194},
  [86] = {.lex_state = 194},
  [87] = {.lex_state = 194},
  [88] = {.lex_state = 194},
  [89] = {.lex_state = 194},
  [90] = {.lex_state = 194},
  [91] = {.lex_state = 194},
  [92] = {.lex_state = 194},
  [93] = {.lex_state = 194},
  [94] = {.lex_state = 194},
  [95] = {.lex_state = 194},
  [96] = {.lex_state = 194},
  [97] = {.lex_state = 194},
  [98] = {.lex_state = 194},
  [99] = {.lex_state = 194},
  [100] = {.lex_state = 194},
  [101] = {.lex_state = 194},
  [102] = {.lex_state = 194},
  [103] = {.lex_state = 194},
  [104] = {.lex_state = 194},
  [105] = {.lex_state = 194},
  [106] = {.lex_state = 194},
  [107] = {.lex_state = 194},
  [108] = {.lex_state = 194},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 194},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 194},
  [115] = {.lex_state = 194},
  [116] = {.lex_state = 194},
  [117] = {.lex_state = 194},
  [118] = {.lex_state = 194},
  [119] = {.lex_state = 194},
  [120] = {.lex_state = 194},
  [121] = {.lex_state = 194},
  [122] = {.lex_state = 194},
  [123] = {.lex_state = 194},
  [124] = {.lex_state = 194},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 194},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 194},
  [129] = {.lex_state = 194},
  [130] = {.lex_state = 194},
  [131] = {.lex_state = 194},
  [132] = {.lex_state = 194},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 194},
  [135] = {.lex_state = 194},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 194},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 194},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 194},
  [152] = {.lex_state = 194},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 194},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 194},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 194},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 194},
  [184] = {.lex_state = 194},
  [185] = {.lex_state = 194},
  [186] = {.lex_state = 194},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 194},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 194},
  [192] = {.lex_state = 194},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 7},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 7},
  [270] = {.lex_state = 7},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 7},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 194},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 7},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 2},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 194},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 2},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 194},
  [340] = {.lex_state = 194},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 2},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 194},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 5},
  [359] = {.lex_state = 0},
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
    [sym_source_file] = STATE(356),
    [sym__top_level] = STATE(151),
    [sym_import] = STATE(151),
    [sym_attribute] = STATE(354),
    [sym_extern] = STATE(359),
    [sym_func_header] = STATE(230),
    [sym_func_proto] = STATE(151),
    [sym_function_definition] = STATE(151),
    [sym_struct_definition] = STATE(151),
    [aux_sym_source_file_repeat1] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_exported] = ACTIONS(13),
    [anon_sym_func] = ACTIONS(15),
    [anon_sym_struct] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_foreach,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    STATE(157), 1,
      sym_pattern,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(327), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(213), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(8), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(49), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(124), 11,
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
  [118] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_foreach,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym__string_literal,
    STATE(157), 1,
      sym_pattern,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(327), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(213), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(8), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(49), 5,
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
  [236] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_foreach,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym__string_literal,
    STATE(157), 1,
      sym_pattern,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(327), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(213), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(3), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(49), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(115), 11,
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
  [354] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_foreach,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym__string_literal,
    STATE(157), 1,
      sym_pattern,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(327), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(213), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(49), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(122), 11,
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
  [472] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_foreach,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym__string_literal,
    STATE(157), 1,
      sym_pattern,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(327), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(213), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(8), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(49), 5,
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
  [590] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_foreach,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym__string_literal,
    STATE(157), 1,
      sym_pattern,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(327), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(213), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(49), 5,
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
  [708] = 31,
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
      anon_sym_return,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(86), 1,
      anon_sym_set,
    ACTIONS(92), 1,
      anon_sym_while,
    ACTIONS(95), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      sym_int_lit,
    ACTIONS(104), 1,
      sym_float_lit,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    STATE(157), 1,
      sym_pattern,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(327), 1,
      sym_type,
    ACTIONS(83), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(213), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(8), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(49), 5,
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
  [826] = 30,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(259), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(141), 16,
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
  [939] = 30,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      sym__string_literal,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(237), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(141), 16,
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
  [1052] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    STATE(176), 1,
      sym_generic_type,
    STATE(193), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(342), 2,
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
  [1153] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(97), 1,
      sym__string_literal,
    STATE(176), 1,
      sym_generic_type,
    STATE(193), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(342), 2,
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
  [1254] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      anon_sym_else,
    STATE(53), 1,
      sym_else_expr,
    STATE(14), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(139), 15,
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
    ACTIONS(141), 19,
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
  [1306] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      anon_sym_else,
    STATE(51), 1,
      sym_else_expr,
    STATE(16), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(145), 15,
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
    ACTIONS(147), 19,
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
  [1358] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [1437] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 1,
      anon_sym_else,
    STATE(16), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(157), 15,
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
    ACTIONS(159), 19,
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
  [1486] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [1562] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [1638] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [1711] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [1784] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(131), 16,
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
  [1857] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [1930] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(138), 16,
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
  [2003] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 15,
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
    ACTIONS(170), 20,
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
  [2046] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(129), 16,
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
  [2119] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(120), 16,
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
  [2192] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 15,
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
    ACTIONS(174), 20,
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
  [2235] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 15,
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
    ACTIONS(178), 20,
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
  [2278] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 15,
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
    ACTIONS(182), 20,
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
  [2321] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [2394] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [2467] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [2540] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(101), 16,
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
  [2613] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(134), 16,
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
  [2686] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [2759] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(73), 16,
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
  [2832] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [2905] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(76), 16,
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
  [2978] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [3051] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(130), 16,
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
  [3124] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [3197] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
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
  [3270] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_int_lit,
    ACTIONS(47), 1,
      sym_float_lit,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(125), 1,
      anon_sym_foreach,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(97), 1,
      sym__string_literal,
    ACTIONS(33), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(88), 16,
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
  [3343] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 15,
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
    ACTIONS(186), 19,
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
  [3385] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 15,
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
    ACTIONS(190), 19,
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
  [3427] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 15,
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
    ACTIONS(194), 19,
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
  [3469] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 15,
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
    ACTIONS(174), 19,
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
  [3511] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 15,
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
    ACTIONS(198), 19,
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
  [3553] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
    ACTIONS(202), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(204), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(206), 11,
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
  [3599] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 15,
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
    ACTIONS(210), 19,
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
  [3641] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 15,
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
    ACTIONS(214), 19,
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
  [3683] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 15,
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
    ACTIONS(182), 19,
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
  [3725] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 15,
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
    ACTIONS(218), 19,
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
  [3767] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 15,
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
    ACTIONS(222), 19,
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
  [3809] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 15,
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
    ACTIONS(226), 19,
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
  [3851] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 15,
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
    ACTIONS(178), 19,
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
  [3893] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(180), 24,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_extern,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [3931] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(176), 24,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_extern,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [3969] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(172), 24,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_extern,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [4007] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      sym_int_lit,
    ACTIONS(240), 1,
      sym_float_lit,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(254), 1,
      sym_type_parameter,
    STATE(267), 1,
      sym__string_literal,
    ACTIONS(232), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(270), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(288), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4080] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      sym_int_lit,
    ACTIONS(240), 1,
      sym_float_lit,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_GT,
    STATE(176), 1,
      sym_generic_type,
    STATE(234), 1,
      sym_type_parameter,
    STATE(267), 1,
      sym__string_literal,
    ACTIONS(232), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(270), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(288), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4153] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      sym_int_lit,
    ACTIONS(240), 1,
      sym_float_lit,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_GT,
    STATE(176), 1,
      sym_generic_type,
    STATE(267), 1,
      sym__string_literal,
    STATE(286), 1,
      sym_type_parameter,
    ACTIONS(232), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(270), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(288), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4223] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      sym_int_lit,
    ACTIONS(240), 1,
      sym_float_lit,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_GT,
    STATE(176), 1,
      sym_generic_type,
    STATE(267), 1,
      sym__string_literal,
    STATE(286), 1,
      sym_type_parameter,
    ACTIONS(232), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(270), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(288), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4293] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      sym_int_lit,
    ACTIONS(240), 1,
      sym_float_lit,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_GT,
    STATE(176), 1,
      sym_generic_type,
    STATE(267), 1,
      sym__string_literal,
    STATE(286), 1,
      sym_type_parameter,
    ACTIONS(232), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(270), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(288), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4363] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      sym_int_lit,
    ACTIONS(240), 1,
      sym_float_lit,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_GT,
    STATE(176), 1,
      sym_generic_type,
    STATE(267), 1,
      sym__string_literal,
    STATE(286), 1,
      sym_type_parameter,
    ACTIONS(232), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(270), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(288), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4433] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      sym_int_lit,
    ACTIONS(240), 1,
      sym_float_lit,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(267), 1,
      sym__string_literal,
    STATE(286), 1,
      sym_type_parameter,
    ACTIONS(232), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(270), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(288), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [4500] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 1,
      anon_sym_else,
    STATE(82), 1,
      sym_else_expr,
    STATE(68), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(141), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(139), 16,
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
  [4540] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 1,
      anon_sym_else,
    STATE(90), 1,
      sym_else_expr,
    STATE(69), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(147), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(145), 16,
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
  [4580] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_else,
    STATE(69), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(159), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(157), 16,
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
  [4617] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(102), 1,
      sym_type_parameters,
    ACTIONS(204), 5,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(200), 16,
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
  [4652] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LT,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_type_parameters,
    ACTIONS(278), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(204), 6,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(200), 10,
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
  [4695] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(168), 17,
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
  [4726] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(280), 12,
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
  [4764] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(220), 16,
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
  [4794] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(292), 16,
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
  [4824] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(280), 15,
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
  [4856] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(296), 16,
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
  [4886] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(300), 16,
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
  [4916] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(304), 16,
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
  [4946] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(224), 16,
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
  [4976] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(308), 16,
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
  [5006] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(216), 16,
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
  [5036] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(312), 16,
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
  [5066] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(184), 16,
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
  [5096] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(316), 16,
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
  [5126] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(192), 16,
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
  [5156] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(196), 16,
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
  [5186] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_EQ,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(320), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5234] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      anon_sym_LT,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_type_parameters,
    ACTIONS(266), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(204), 4,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(200), 12,
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
  [5274] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(212), 16,
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
  [5304] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(188), 16,
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
  [5334] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(337), 16,
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
  [5364] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(341), 16,
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
  [5394] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(347), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(345), 16,
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
  [5424] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(349), 16,
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
  [5454] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(353), 16,
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
  [5484] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(357), 16,
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
  [5514] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(361), 16,
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
  [5544] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(365), 16,
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
  [5574] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(208), 16,
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
  [5604] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(280), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [5646] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(369), 16,
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
  [5676] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(373), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5724] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      anon_sym_EQ,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
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
  [5772] = 3,
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
  [5802] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(280), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_or,
  [5846] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(286), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(280), 14,
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
  [5882] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_EQ,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
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
  [5930] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 1,
      anon_sym_Ref,
    ACTIONS(273), 2,
      anon_sym_DOT,
      anon_sym_in,
    ACTIONS(335), 17,
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
  [5960] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(402), 11,
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
  [5987] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_LT,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_type_parameters,
    ACTIONS(204), 4,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH,
    ACTIONS(200), 11,
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
  [6022] = 3,
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
  [6049] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE,
    ACTIONS(410), 11,
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
  [6076] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6123] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6167] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6211] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6255] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6299] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_block,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6343] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6387] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6431] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6475] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6519] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6563] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      anon_sym_POUND,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(248), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [6613] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6657] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      anon_sym_POUND,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(246), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [6707] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(440), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6749] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6793] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_block,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6837] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6881] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [6922] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(231), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [6969] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(446), 1,
      anon_sym_EQ,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7010] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7051] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_GT,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(155), 1,
      sym__type_identifier,
    STATE(170), 1,
      sym_scoped_type_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(250), 1,
      sym_generic_parameter,
    STATE(262), 1,
      sym_type,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [7100] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(231), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [7147] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7188] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(231), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [7235] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(231), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [7282] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_and,
    ACTIONS(331), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(333), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [7323] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(285), 1,
      sym_type,
    ACTIONS(464), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [7365] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(231), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [7409] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(466), 1,
      anon_sym_GT,
    STATE(155), 1,
      sym__type_identifier,
    STATE(170), 1,
      sym_scoped_type_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(262), 1,
      sym_type,
    STATE(282), 1,
      sym_generic_parameter,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [7455] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    STATE(176), 1,
      sym_generic_type,
    STATE(352), 1,
      sym_type,
    STATE(355), 1,
      sym_pattern,
    STATE(357), 1,
      sym_destruct,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [7499] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(300), 1,
      sym_type,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [7541] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    STATE(176), 1,
      sym_generic_type,
    STATE(311), 1,
      sym_pattern,
    STATE(352), 1,
      sym_type,
    STATE(357), 1,
      sym_destruct,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [7585] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(253), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [7629] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(305), 1,
      sym_type,
    ACTIONS(472), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [7671] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(298), 1,
      sym_type,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [7713] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_extern,
    ACTIONS(13), 1,
      anon_sym_exported,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    STATE(230), 1,
      sym_func_header,
    STATE(354), 1,
      sym_attribute,
    STATE(359), 1,
      sym_extern,
    STATE(152), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [7755] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 1,
      anon_sym_import,
    ACTIONS(483), 1,
      anon_sym_POUND,
    ACTIONS(486), 1,
      anon_sym_extern,
    ACTIONS(489), 1,
      anon_sym_exported,
    ACTIONS(492), 1,
      anon_sym_func,
    ACTIONS(495), 1,
      anon_sym_struct,
    STATE(230), 1,
      sym_func_header,
    STATE(354), 1,
      sym_attribute,
    STATE(359), 1,
      sym_extern,
    STATE(152), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [7797] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(180), 1,
      sym_destruct,
    STATE(233), 1,
      sym_pattern,
    STATE(327), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(203), 2,
      sym_scoped_identifier,
      sym__path,
  [7841] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_GT,
    STATE(155), 1,
      sym__type_identifier,
    STATE(170), 1,
      sym_scoped_type_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(262), 1,
      sym_type,
    STATE(282), 1,
      sym_generic_parameter,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [7887] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      anon_sym_LT,
    ACTIONS(506), 1,
      anon_sym_Ref,
    STATE(178), 1,
      sym_generic_parameters,
    STATE(301), 1,
      sym_rune,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(504), 9,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [7918] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(508), 1,
      anon_sym_BANG,
    STATE(176), 1,
      sym_generic_type,
    STATE(317), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [7959] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_EQ,
    STATE(176), 1,
      sym_generic_type,
    STATE(310), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(342), 2,
      sym_scoped_identifier,
      sym__path,
  [8000] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(155), 1,
      sym__type_identifier,
    STATE(170), 1,
      sym_scoped_type_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(262), 1,
      sym_type,
    STATE(282), 1,
      sym_generic_parameter,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [8043] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(193), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [8081] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(304), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [8119] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(193), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(342), 2,
      sym_scoped_identifier,
      sym__path,
  [8157] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(176), 1,
      sym_generic_type,
    STATE(335), 1,
      sym_type,
    STATE(170), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(182), 2,
      sym_reference_type,
      sym_array_type,
    STATE(189), 2,
      sym_dynamic_array_type,
      sym_static_array_type,
    STATE(316), 2,
      sym_scoped_identifier,
      sym__path,
  [8195] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 11,
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
  [8212] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 11,
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
  [8229] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 11,
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
  [8246] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(516), 11,
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
  [8263] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(335), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [8284] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(335), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [8305] = 2,
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
  [8322] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      anon_sym_LT,
    STATE(178), 1,
      sym_generic_parameters,
    ACTIONS(502), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8341] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(518), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [8357] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8371] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8385] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(523), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [8401] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8415] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(502), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8431] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8445] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(540), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8459] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8473] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8487] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(546), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8500] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8513] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8526] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(550), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8539] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(552), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8552] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(554), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8565] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      anon_sym_DOT,
    ACTIONS(558), 1,
      anon_sym_STAR,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(344), 1,
      sym_import_wilacard,
    STATE(346), 1,
      sym_import_path,
    STATE(272), 2,
      sym_scoped_identifier,
      sym__path,
  [8588] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8601] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(564), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8614] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(566), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8627] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(568), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8640] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(570), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [8653] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8666] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(574), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8679] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(576), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8692] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(578), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [8705] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [8717] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(582), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [8729] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      anon_sym_LT,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym_generic_parameters,
    STATE(314), 1,
      sym_mutability,
    ACTIONS(586), 2,
      anon_sym_mut,
      anon_sym_imm,
  [8749] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      anon_sym_LT,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_generic_parameters,
    STATE(329), 1,
      sym_mutability,
    ACTIONS(586), 2,
      anon_sym_mut,
      anon_sym_imm,
  [8769] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_LBRACK,
    ACTIONS(273), 4,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8783] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(590), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [8795] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(592), 1,
      anon_sym_DOT,
    ACTIONS(544), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [8808] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(156), 1,
      sym__field_identifier,
    STATE(214), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [8825] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym__field_identifier,
    STATE(215), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [8842] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym__field_identifier,
    STATE(209), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [8859] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(156), 1,
      sym__field_identifier,
    STATE(215), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [8876] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [8887] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym__field_identifier,
    STATE(215), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [8904] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(604), 1,
      anon_sym_BANG,
    STATE(339), 1,
      sym_attribute_name,
    ACTIONS(602), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [8919] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym__field_identifier,
    STATE(207), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [8936] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym__field_identifier,
    STATE(205), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [8953] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(544), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_identifier,
  [8966] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym__field_identifier,
    STATE(215), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [8983] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      sym_identifier,
    STATE(156), 1,
      sym__field_identifier,
    STATE(215), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [9000] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      sym_mutability,
    ACTIONS(586), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9014] = 4,
    ACTIONS(618), 1,
      sym_line_comment,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(620), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9028] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(334), 1,
      sym_attribute_name,
    ACTIONS(602), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [9040] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      anon_sym_LT,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_parameters,
    STATE(287), 1,
      sym_generic_parameters,
  [9056] = 4,
    ACTIONS(618), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    STATE(220), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(626), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9070] = 4,
    ACTIONS(618), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(631), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9084] = 4,
    ACTIONS(618), 1,
      sym_line_comment,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    STATE(220), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(635), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9098] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      anon_sym_LT,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_parameters,
    STATE(293), 1,
      sym_generic_parameters,
  [9114] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(639), 1,
      anon_sym_LT,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(196), 1,
      sym__type_identifier,
    STATE(291), 1,
      sym_type_parameters,
  [9130] = 4,
    ACTIONS(618), 1,
      sym_line_comment,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    STATE(220), 1,
      aux_sym__string_literal_repeat1,
    ACTIONS(635), 2,
      sym_escape_sequence,
      aux_sym__string_literal_token1,
  [9144] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    STATE(321), 1,
      sym_mutability,
    ACTIONS(586), 2,
      anon_sym_mut,
      anon_sym_imm,
  [9158] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_destruct_repeat1,
    ACTIONS(647), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [9172] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(639), 1,
      anon_sym_LT,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(195), 1,
      sym__type_identifier,
    STATE(265), 1,
      sym_type_parameters,
  [9188] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_type_parameters_repeat1,
  [9201] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(654), 1,
      anon_sym_SEMI,
    STATE(184), 1,
      sym_block,
  [9214] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9223] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_GT,
    STATE(232), 1,
      aux_sym_generic_parameters_repeat1,
  [9236] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
    STATE(258), 1,
      aux_sym_destruct_repeat1,
  [9249] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_GT,
    STATE(241), 1,
      aux_sym_type_parameters_repeat1,
  [9262] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_parameters_repeat1,
  [9275] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_call_expr_repeat1,
  [9288] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_destruct_repeat1,
  [9301] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      anon_sym_GT,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_generic_parameters_repeat1,
  [9314] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(682), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [9323] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(684), 1,
      sym_int_lit,
    STATE(325), 1,
      sym__type_identifier,
  [9336] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      anon_sym_GT,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_type_parameters_repeat1,
  [9349] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(247), 1,
      sym_parameter,
  [9362] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_GT,
    STATE(243), 1,
      aux_sym_type_parameters_repeat1,
  [9375] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      aux_sym_destruct_repeat1,
  [9388] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      anon_sym_if,
    STATE(87), 1,
      sym_block,
  [9401] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_destruct_repeat1,
  [9414] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_parameters_repeat1,
  [9427] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_destruct_repeat1,
  [9440] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_call_expr_repeat1,
  [9453] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      anon_sym_GT,
    STATE(238), 1,
      aux_sym_generic_parameters_repeat1,
  [9466] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_parameters_repeat1,
  [9479] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      aux_sym_destruct_repeat1,
  [9492] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      aux_sym_destruct_repeat1,
  [9505] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_GT,
    STATE(229), 1,
      aux_sym_type_parameters_repeat1,
  [9518] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      aux_sym_destruct_repeat1,
  [9531] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym__string_literal,
    STATE(332), 1,
      sym_string_literal,
  [9544] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(724), 1,
      anon_sym_if,
    STATE(48), 1,
      sym_block,
  [9557] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      aux_sym_destruct_repeat1,
  [9570] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_destruct_repeat1,
  [9583] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_destruct_repeat1,
  [9596] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_destruct_repeat1,
  [9609] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(736), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9617] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      sym_identifier,
    STATE(175), 1,
      sym__type_identifier,
  [9627] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [9637] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(190), 1,
      sym__type_identifier,
  [9647] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(740), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9655] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(200), 1,
      sym__type_identifier,
  [9673] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9681] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9689] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
  [9699] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    ACTIONS(744), 1,
      anon_sym_DOT,
  [9709] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(199), 1,
      sym__type_identifier,
  [9719] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9727] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(746), 1,
      sym_identifier,
    STATE(179), 1,
      sym__type_identifier,
  [9737] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(523), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [9745] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
  [9755] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(748), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9763] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9771] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      anon_sym_STAR,
    ACTIONS(752), 1,
      sym_identifier,
  [9781] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
  [9791] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(659), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9799] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
  [9809] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9817] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9825] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9833] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_parameters,
  [9843] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9851] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(758), 1,
      sym_identifier,
    STATE(175), 1,
      sym__type_identifier,
  [9861] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
  [9871] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(194), 1,
      sym__type_identifier,
  [9881] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(518), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [9889] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_parameters,
  [9899] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [9909] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_block,
  [9919] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(760), 1,
      sym_identifier,
    STATE(179), 1,
      sym__type_identifier,
  [9929] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_POUND,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
  [9939] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(762), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9947] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(179), 1,
      sym__type_identifier,
  [9957] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(764), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9965] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(766), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9973] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(768), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9981] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(284), 1,
      sym_parameter,
  [9991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(770), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9999] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(772), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10007] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(776), 1,
      anon_sym_func,
  [10017] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      sym_identifier,
    STATE(77), 1,
      sym__field_identifier,
  [10027] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
  [10034] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      sym_identifier,
  [10041] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      anon_sym_EQ,
  [10048] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_in,
  [10055] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
  [10062] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      anon_sym_EQ_GT,
  [10069] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
  [10076] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(724), 1,
      anon_sym_if,
  [10083] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(786), 1,
      anon_sym_DOT,
  [10090] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(788), 1,
      anon_sym_SEMI,
  [10097] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_in,
  [10104] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(714), 1,
      anon_sym_GT,
  [10111] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 1,
      sym_identifier,
  [10118] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
  [10125] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_GT,
  [10132] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      anon_sym_func,
  [10139] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_EQ_GT,
  [10146] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACK,
  [10153] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(798), 1,
      anon_sym_SEMI,
  [10160] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_LBRACK,
  [10167] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      sym_identifier,
  [10174] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
  [10181] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(722), 1,
      anon_sym_GT,
  [10188] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      anon_sym_in,
  [10195] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [10202] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      sym_identifier,
  [10209] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_struct,
  [10216] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(806), 1,
      anon_sym_SEMI,
  [10223] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_in,
  [10230] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      anon_sym_EQ_GT,
  [10237] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(810), 1,
      sym_identifier,
  [10244] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(812), 1,
      anon_sym_struct,
  [10251] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(814), 1,
      anon_sym_struct,
  [10258] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(816), 1,
      anon_sym_EQ_GT,
  [10265] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(592), 1,
      anon_sym_DOT,
  [10272] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(818), 1,
      anon_sym_EQ_GT,
  [10279] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
  [10286] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(820), 1,
      anon_sym_EQ_GT,
  [10293] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [10300] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(824), 1,
      anon_sym_EQ_GT,
  [10307] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(826), 1,
      anon_sym_EQ_GT,
  [10314] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      anon_sym_SEMI,
  [10321] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 1,
      anon_sym_if,
  [10328] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(830), 1,
      sym_identifier,
  [10335] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      anon_sym_LBRACK,
  [10342] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
  [10349] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(834), 1,
      anon_sym_struct,
  [10356] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_in,
  [10363] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(838), 1,
      ts_builtin_sym_end,
  [10370] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      anon_sym_in,
  [10377] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      sym_identifier,
  [10384] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(842), 1,
      anon_sym_func,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 118,
  [SMALL_STATE(4)] = 236,
  [SMALL_STATE(5)] = 354,
  [SMALL_STATE(6)] = 472,
  [SMALL_STATE(7)] = 590,
  [SMALL_STATE(8)] = 708,
  [SMALL_STATE(9)] = 826,
  [SMALL_STATE(10)] = 939,
  [SMALL_STATE(11)] = 1052,
  [SMALL_STATE(12)] = 1153,
  [SMALL_STATE(13)] = 1254,
  [SMALL_STATE(14)] = 1306,
  [SMALL_STATE(15)] = 1358,
  [SMALL_STATE(16)] = 1437,
  [SMALL_STATE(17)] = 1486,
  [SMALL_STATE(18)] = 1562,
  [SMALL_STATE(19)] = 1638,
  [SMALL_STATE(20)] = 1711,
  [SMALL_STATE(21)] = 1784,
  [SMALL_STATE(22)] = 1857,
  [SMALL_STATE(23)] = 1930,
  [SMALL_STATE(24)] = 2003,
  [SMALL_STATE(25)] = 2046,
  [SMALL_STATE(26)] = 2119,
  [SMALL_STATE(27)] = 2192,
  [SMALL_STATE(28)] = 2235,
  [SMALL_STATE(29)] = 2278,
  [SMALL_STATE(30)] = 2321,
  [SMALL_STATE(31)] = 2394,
  [SMALL_STATE(32)] = 2467,
  [SMALL_STATE(33)] = 2540,
  [SMALL_STATE(34)] = 2613,
  [SMALL_STATE(35)] = 2686,
  [SMALL_STATE(36)] = 2759,
  [SMALL_STATE(37)] = 2832,
  [SMALL_STATE(38)] = 2905,
  [SMALL_STATE(39)] = 2978,
  [SMALL_STATE(40)] = 3051,
  [SMALL_STATE(41)] = 3124,
  [SMALL_STATE(42)] = 3197,
  [SMALL_STATE(43)] = 3270,
  [SMALL_STATE(44)] = 3343,
  [SMALL_STATE(45)] = 3385,
  [SMALL_STATE(46)] = 3427,
  [SMALL_STATE(47)] = 3469,
  [SMALL_STATE(48)] = 3511,
  [SMALL_STATE(49)] = 3553,
  [SMALL_STATE(50)] = 3599,
  [SMALL_STATE(51)] = 3641,
  [SMALL_STATE(52)] = 3683,
  [SMALL_STATE(53)] = 3725,
  [SMALL_STATE(54)] = 3767,
  [SMALL_STATE(55)] = 3809,
  [SMALL_STATE(56)] = 3851,
  [SMALL_STATE(57)] = 3893,
  [SMALL_STATE(58)] = 3931,
  [SMALL_STATE(59)] = 3969,
  [SMALL_STATE(60)] = 4007,
  [SMALL_STATE(61)] = 4080,
  [SMALL_STATE(62)] = 4153,
  [SMALL_STATE(63)] = 4223,
  [SMALL_STATE(64)] = 4293,
  [SMALL_STATE(65)] = 4363,
  [SMALL_STATE(66)] = 4433,
  [SMALL_STATE(67)] = 4500,
  [SMALL_STATE(68)] = 4540,
  [SMALL_STATE(69)] = 4580,
  [SMALL_STATE(70)] = 4617,
  [SMALL_STATE(71)] = 4652,
  [SMALL_STATE(72)] = 4695,
  [SMALL_STATE(73)] = 4726,
  [SMALL_STATE(74)] = 4764,
  [SMALL_STATE(75)] = 4794,
  [SMALL_STATE(76)] = 4824,
  [SMALL_STATE(77)] = 4856,
  [SMALL_STATE(78)] = 4886,
  [SMALL_STATE(79)] = 4916,
  [SMALL_STATE(80)] = 4946,
  [SMALL_STATE(81)] = 4976,
  [SMALL_STATE(82)] = 5006,
  [SMALL_STATE(83)] = 5036,
  [SMALL_STATE(84)] = 5066,
  [SMALL_STATE(85)] = 5096,
  [SMALL_STATE(86)] = 5126,
  [SMALL_STATE(87)] = 5156,
  [SMALL_STATE(88)] = 5186,
  [SMALL_STATE(89)] = 5234,
  [SMALL_STATE(90)] = 5274,
  [SMALL_STATE(91)] = 5304,
  [SMALL_STATE(92)] = 5334,
  [SMALL_STATE(93)] = 5364,
  [SMALL_STATE(94)] = 5394,
  [SMALL_STATE(95)] = 5424,
  [SMALL_STATE(96)] = 5454,
  [SMALL_STATE(97)] = 5484,
  [SMALL_STATE(98)] = 5514,
  [SMALL_STATE(99)] = 5544,
  [SMALL_STATE(100)] = 5574,
  [SMALL_STATE(101)] = 5604,
  [SMALL_STATE(102)] = 5646,
  [SMALL_STATE(103)] = 5676,
  [SMALL_STATE(104)] = 5724,
  [SMALL_STATE(105)] = 5772,
  [SMALL_STATE(106)] = 5802,
  [SMALL_STATE(107)] = 5846,
  [SMALL_STATE(108)] = 5882,
  [SMALL_STATE(109)] = 5930,
  [SMALL_STATE(110)] = 5960,
  [SMALL_STATE(111)] = 5987,
  [SMALL_STATE(112)] = 6022,
  [SMALL_STATE(113)] = 6049,
  [SMALL_STATE(114)] = 6076,
  [SMALL_STATE(115)] = 6123,
  [SMALL_STATE(116)] = 6167,
  [SMALL_STATE(117)] = 6211,
  [SMALL_STATE(118)] = 6255,
  [SMALL_STATE(119)] = 6299,
  [SMALL_STATE(120)] = 6343,
  [SMALL_STATE(121)] = 6387,
  [SMALL_STATE(122)] = 6431,
  [SMALL_STATE(123)] = 6475,
  [SMALL_STATE(124)] = 6519,
  [SMALL_STATE(125)] = 6563,
  [SMALL_STATE(126)] = 6613,
  [SMALL_STATE(127)] = 6657,
  [SMALL_STATE(128)] = 6707,
  [SMALL_STATE(129)] = 6749,
  [SMALL_STATE(130)] = 6793,
  [SMALL_STATE(131)] = 6837,
  [SMALL_STATE(132)] = 6881,
  [SMALL_STATE(133)] = 6922,
  [SMALL_STATE(134)] = 6969,
  [SMALL_STATE(135)] = 7010,
  [SMALL_STATE(136)] = 7051,
  [SMALL_STATE(137)] = 7100,
  [SMALL_STATE(138)] = 7147,
  [SMALL_STATE(139)] = 7188,
  [SMALL_STATE(140)] = 7235,
  [SMALL_STATE(141)] = 7282,
  [SMALL_STATE(142)] = 7323,
  [SMALL_STATE(143)] = 7365,
  [SMALL_STATE(144)] = 7409,
  [SMALL_STATE(145)] = 7455,
  [SMALL_STATE(146)] = 7499,
  [SMALL_STATE(147)] = 7541,
  [SMALL_STATE(148)] = 7585,
  [SMALL_STATE(149)] = 7629,
  [SMALL_STATE(150)] = 7671,
  [SMALL_STATE(151)] = 7713,
  [SMALL_STATE(152)] = 7755,
  [SMALL_STATE(153)] = 7797,
  [SMALL_STATE(154)] = 7841,
  [SMALL_STATE(155)] = 7887,
  [SMALL_STATE(156)] = 7918,
  [SMALL_STATE(157)] = 7959,
  [SMALL_STATE(158)] = 8000,
  [SMALL_STATE(159)] = 8043,
  [SMALL_STATE(160)] = 8081,
  [SMALL_STATE(161)] = 8119,
  [SMALL_STATE(162)] = 8157,
  [SMALL_STATE(163)] = 8195,
  [SMALL_STATE(164)] = 8212,
  [SMALL_STATE(165)] = 8229,
  [SMALL_STATE(166)] = 8246,
  [SMALL_STATE(167)] = 8263,
  [SMALL_STATE(168)] = 8284,
  [SMALL_STATE(169)] = 8305,
  [SMALL_STATE(170)] = 8322,
  [SMALL_STATE(171)] = 8341,
  [SMALL_STATE(172)] = 8357,
  [SMALL_STATE(173)] = 8371,
  [SMALL_STATE(174)] = 8385,
  [SMALL_STATE(175)] = 8401,
  [SMALL_STATE(176)] = 8415,
  [SMALL_STATE(177)] = 8431,
  [SMALL_STATE(178)] = 8445,
  [SMALL_STATE(179)] = 8459,
  [SMALL_STATE(180)] = 8473,
  [SMALL_STATE(181)] = 8487,
  [SMALL_STATE(182)] = 8500,
  [SMALL_STATE(183)] = 8513,
  [SMALL_STATE(184)] = 8526,
  [SMALL_STATE(185)] = 8539,
  [SMALL_STATE(186)] = 8552,
  [SMALL_STATE(187)] = 8565,
  [SMALL_STATE(188)] = 8588,
  [SMALL_STATE(189)] = 8601,
  [SMALL_STATE(190)] = 8614,
  [SMALL_STATE(191)] = 8627,
  [SMALL_STATE(192)] = 8640,
  [SMALL_STATE(193)] = 8653,
  [SMALL_STATE(194)] = 8666,
  [SMALL_STATE(195)] = 8679,
  [SMALL_STATE(196)] = 8692,
  [SMALL_STATE(197)] = 8705,
  [SMALL_STATE(198)] = 8717,
  [SMALL_STATE(199)] = 8729,
  [SMALL_STATE(200)] = 8749,
  [SMALL_STATE(201)] = 8769,
  [SMALL_STATE(202)] = 8783,
  [SMALL_STATE(203)] = 8795,
  [SMALL_STATE(204)] = 8808,
  [SMALL_STATE(205)] = 8825,
  [SMALL_STATE(206)] = 8842,
  [SMALL_STATE(207)] = 8859,
  [SMALL_STATE(208)] = 8876,
  [SMALL_STATE(209)] = 8887,
  [SMALL_STATE(210)] = 8904,
  [SMALL_STATE(211)] = 8919,
  [SMALL_STATE(212)] = 8936,
  [SMALL_STATE(213)] = 8953,
  [SMALL_STATE(214)] = 8966,
  [SMALL_STATE(215)] = 8983,
  [SMALL_STATE(216)] = 9000,
  [SMALL_STATE(217)] = 9014,
  [SMALL_STATE(218)] = 9028,
  [SMALL_STATE(219)] = 9040,
  [SMALL_STATE(220)] = 9056,
  [SMALL_STATE(221)] = 9070,
  [SMALL_STATE(222)] = 9084,
  [SMALL_STATE(223)] = 9098,
  [SMALL_STATE(224)] = 9114,
  [SMALL_STATE(225)] = 9130,
  [SMALL_STATE(226)] = 9144,
  [SMALL_STATE(227)] = 9158,
  [SMALL_STATE(228)] = 9172,
  [SMALL_STATE(229)] = 9188,
  [SMALL_STATE(230)] = 9201,
  [SMALL_STATE(231)] = 9214,
  [SMALL_STATE(232)] = 9223,
  [SMALL_STATE(233)] = 9236,
  [SMALL_STATE(234)] = 9249,
  [SMALL_STATE(235)] = 9262,
  [SMALL_STATE(236)] = 9275,
  [SMALL_STATE(237)] = 9288,
  [SMALL_STATE(238)] = 9301,
  [SMALL_STATE(239)] = 9314,
  [SMALL_STATE(240)] = 9323,
  [SMALL_STATE(241)] = 9336,
  [SMALL_STATE(242)] = 9349,
  [SMALL_STATE(243)] = 9362,
  [SMALL_STATE(244)] = 9375,
  [SMALL_STATE(245)] = 9388,
  [SMALL_STATE(246)] = 9401,
  [SMALL_STATE(247)] = 9414,
  [SMALL_STATE(248)] = 9427,
  [SMALL_STATE(249)] = 9440,
  [SMALL_STATE(250)] = 9453,
  [SMALL_STATE(251)] = 9466,
  [SMALL_STATE(252)] = 9479,
  [SMALL_STATE(253)] = 9492,
  [SMALL_STATE(254)] = 9505,
  [SMALL_STATE(255)] = 9518,
  [SMALL_STATE(256)] = 9531,
  [SMALL_STATE(257)] = 9544,
  [SMALL_STATE(258)] = 9557,
  [SMALL_STATE(259)] = 9570,
  [SMALL_STATE(260)] = 9583,
  [SMALL_STATE(261)] = 9596,
  [SMALL_STATE(262)] = 9609,
  [SMALL_STATE(263)] = 9617,
  [SMALL_STATE(264)] = 9627,
  [SMALL_STATE(265)] = 9637,
  [SMALL_STATE(266)] = 9647,
  [SMALL_STATE(267)] = 9655,
  [SMALL_STATE(268)] = 9663,
  [SMALL_STATE(269)] = 9673,
  [SMALL_STATE(270)] = 9681,
  [SMALL_STATE(271)] = 9689,
  [SMALL_STATE(272)] = 9699,
  [SMALL_STATE(273)] = 9709,
  [SMALL_STATE(274)] = 9719,
  [SMALL_STATE(275)] = 9727,
  [SMALL_STATE(276)] = 9737,
  [SMALL_STATE(277)] = 9745,
  [SMALL_STATE(278)] = 9755,
  [SMALL_STATE(279)] = 9763,
  [SMALL_STATE(280)] = 9771,
  [SMALL_STATE(281)] = 9781,
  [SMALL_STATE(282)] = 9791,
  [SMALL_STATE(283)] = 9799,
  [SMALL_STATE(284)] = 9809,
  [SMALL_STATE(285)] = 9817,
  [SMALL_STATE(286)] = 9825,
  [SMALL_STATE(287)] = 9833,
  [SMALL_STATE(288)] = 9843,
  [SMALL_STATE(289)] = 9851,
  [SMALL_STATE(290)] = 9861,
  [SMALL_STATE(291)] = 9871,
  [SMALL_STATE(292)] = 9881,
  [SMALL_STATE(293)] = 9889,
  [SMALL_STATE(294)] = 9899,
  [SMALL_STATE(295)] = 9909,
  [SMALL_STATE(296)] = 9919,
  [SMALL_STATE(297)] = 9929,
  [SMALL_STATE(298)] = 9939,
  [SMALL_STATE(299)] = 9947,
  [SMALL_STATE(300)] = 9957,
  [SMALL_STATE(301)] = 9965,
  [SMALL_STATE(302)] = 9973,
  [SMALL_STATE(303)] = 9981,
  [SMALL_STATE(304)] = 9991,
  [SMALL_STATE(305)] = 9999,
  [SMALL_STATE(306)] = 10007,
  [SMALL_STATE(307)] = 10017,
  [SMALL_STATE(308)] = 10027,
  [SMALL_STATE(309)] = 10034,
  [SMALL_STATE(310)] = 10041,
  [SMALL_STATE(311)] = 10048,
  [SMALL_STATE(312)] = 10055,
  [SMALL_STATE(313)] = 10062,
  [SMALL_STATE(314)] = 10069,
  [SMALL_STATE(315)] = 10076,
  [SMALL_STATE(316)] = 10083,
  [SMALL_STATE(317)] = 10090,
  [SMALL_STATE(318)] = 10097,
  [SMALL_STATE(319)] = 10104,
  [SMALL_STATE(320)] = 10111,
  [SMALL_STATE(321)] = 10118,
  [SMALL_STATE(322)] = 10125,
  [SMALL_STATE(323)] = 10132,
  [SMALL_STATE(324)] = 10139,
  [SMALL_STATE(325)] = 10146,
  [SMALL_STATE(326)] = 10153,
  [SMALL_STATE(327)] = 10160,
  [SMALL_STATE(328)] = 10167,
  [SMALL_STATE(329)] = 10174,
  [SMALL_STATE(330)] = 10181,
  [SMALL_STATE(331)] = 10188,
  [SMALL_STATE(332)] = 10195,
  [SMALL_STATE(333)] = 10202,
  [SMALL_STATE(334)] = 10209,
  [SMALL_STATE(335)] = 10216,
  [SMALL_STATE(336)] = 10223,
  [SMALL_STATE(337)] = 10230,
  [SMALL_STATE(338)] = 10237,
  [SMALL_STATE(339)] = 10244,
  [SMALL_STATE(340)] = 10251,
  [SMALL_STATE(341)] = 10258,
  [SMALL_STATE(342)] = 10265,
  [SMALL_STATE(343)] = 10272,
  [SMALL_STATE(344)] = 10279,
  [SMALL_STATE(345)] = 10286,
  [SMALL_STATE(346)] = 10293,
  [SMALL_STATE(347)] = 10300,
  [SMALL_STATE(348)] = 10307,
  [SMALL_STATE(349)] = 10314,
  [SMALL_STATE(350)] = 10321,
  [SMALL_STATE(351)] = 10328,
  [SMALL_STATE(352)] = 10335,
  [SMALL_STATE(353)] = 10342,
  [SMALL_STATE(354)] = 10349,
  [SMALL_STATE(355)] = 10356,
  [SMALL_STATE(356)] = 10363,
  [SMALL_STATE(357)] = 10370,
  [SMALL_STATE(358)] = 10377,
  [SMALL_STATE(359)] = 10384,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(289),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(99),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(221),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 18),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 18),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 24),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 24),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(315),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 29),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 29),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 17),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 17),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 26),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 26),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 23),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 23),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(350),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(60),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [269] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(60),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym__path, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 20),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 20),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 21),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 21),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 19),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 19),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 28),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 28),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment_expr, 4), SHIFT(15),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 25),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 25),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 9),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 9),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 27),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 27),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 10),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 10),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_not, 2), SHIFT(15),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_return_expr, 2), SHIFT(15),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_augment, 2), SHIFT(15),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 12),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 6),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(359),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(358),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 5),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 11),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pattern, 1), SHIFT(275),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(208),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(220),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(143),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(158),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(303),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(66),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(39),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 22),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 16),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 15),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 14),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 13),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wilacard, 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wilacard, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [838] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
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
