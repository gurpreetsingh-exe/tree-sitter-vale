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
#define STATE_COUNT 483
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 177
#define ALIAS_COUNT 2
#define TOKEN_COUNT 92
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
  sym__interpolated_string_text_fragment = 86,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 87,
  anon_sym_LBRACE_LF = 88,
  sym__interpolated_verbatim_string_text_fragment = 89,
  anon_sym_LBRACE_BSLASH = 90,
  sym_identifier = 91,
  sym_source_file = 92,
  sym__top_level = 93,
  sym_import = 94,
  sym_import_path = 95,
  sym_attribute_name = 96,
  sym_attribute = 97,
  sym_scoped_identifier = 98,
  sym_scoped_type_identifier = 99,
  sym_import_wildcard = 100,
  sym_extern = 101,
  sym_func_header = 102,
  sym_func_proto = 103,
  sym_function_definition = 104,
  sym_generic_parameters = 105,
  sym_rune = 106,
  sym_generic_parameter = 107,
  sym_region_parameter = 108,
  sym_region_specifier = 109,
  sym_parameters = 110,
  sym_parameter = 111,
  sym_struct_definition = 112,
  sym_struct_field = 113,
  sym_mutability = 114,
  sym_type = 115,
  sym_reference_type = 116,
  sym_array_access = 117,
  sym_array_type = 118,
  sym_dynamic_array_type = 119,
  sym_static_array_type = 120,
  sym_generic_type = 121,
  sym_int_type = 122,
  sym_block = 123,
  sym_expr_statement = 124,
  sym__statement = 125,
  sym_pattern = 126,
  sym_destruct = 127,
  sym_variable_definition = 128,
  sym_return_expr = 129,
  sym__expr = 130,
  sym_parenthesized_expr = 131,
  sym__expr_ending_with_block = 132,
  sym_lambda = 133,
  sym_not = 134,
  sym_augment = 135,
  sym_field_expr = 136,
  sym_assignment_expr = 137,
  sym_literal = 138,
  sym_bool_lit = 139,
  sym_call_expr = 140,
  sym_generic_function = 141,
  sym_type_parameters = 142,
  sym_type_parameter = 143,
  sym_while_expr = 144,
  sym_foreach = 145,
  sym_if_expr = 146,
  sym_else_if_expr = 147,
  sym_else_expr = 148,
  sym_binary_expr = 149,
  sym_int_lit = 150,
  sym_string_literal = 151,
  sym__string_literal = 152,
  sym__interpolated_string_content = 153,
  sym_interpolated_string_text = 154,
  sym__big_string_literal = 155,
  sym__interpolated_raw_string_content = 156,
  sym_interpolated_raw_string_text = 157,
  sym_interpolation = 158,
  sym__type_identifier = 159,
  sym__path = 160,
  sym__field_identifier = 161,
  aux_sym_source_file_repeat1 = 162,
  aux_sym_generic_parameters_repeat1 = 163,
  aux_sym_parameters_repeat1 = 164,
  aux_sym_struct_definition_repeat1 = 165,
  aux_sym_array_access_repeat1 = 166,
  aux_sym_array_type_repeat1 = 167,
  aux_sym_array_type_repeat2 = 168,
  aux_sym_block_repeat1 = 169,
  aux_sym_destruct_repeat1 = 170,
  aux_sym_lambda_repeat1 = 171,
  aux_sym_call_expr_repeat1 = 172,
  aux_sym_type_parameters_repeat1 = 173,
  aux_sym_if_expr_repeat1 = 174,
  aux_sym__string_literal_repeat1 = 175,
  aux_sym__big_string_literal_repeat1 = 176,
  alias_sym_field_identifier = 177,
  alias_sym_type_identifier = 178,
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
  [sym__interpolated_string_text_fragment] = "_interpolated_string_text_fragment",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_LBRACE_LF] = "{\n",
  [sym__interpolated_verbatim_string_text_fragment] = "_interpolated_verbatim_string_text_fragment",
  [anon_sym_LBRACE_BSLASH] = "{\\",
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
  [sym__interpolated_string_content] = "_interpolated_string_content",
  [sym_interpolated_string_text] = "interpolated_string_text",
  [sym__big_string_literal] = "_big_string_literal",
  [sym__interpolated_raw_string_content] = "_interpolated_raw_string_content",
  [sym_interpolated_raw_string_text] = "interpolated_raw_string_text",
  [sym_interpolation] = "interpolation",
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
  [aux_sym__big_string_literal_repeat1] = "_big_string_literal_repeat1",
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
  [sym__interpolated_string_text_fragment] = sym__interpolated_string_text_fragment,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_LBRACE_LF] = anon_sym_LBRACE_LF,
  [sym__interpolated_verbatim_string_text_fragment] = sym__interpolated_verbatim_string_text_fragment,
  [anon_sym_LBRACE_BSLASH] = anon_sym_LBRACE_BSLASH,
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
  [sym__interpolated_string_content] = sym__interpolated_string_content,
  [sym_interpolated_string_text] = sym_interpolated_string_text,
  [sym__big_string_literal] = sym__big_string_literal,
  [sym__interpolated_raw_string_content] = sym__interpolated_raw_string_content,
  [sym_interpolated_raw_string_text] = sym_interpolated_raw_string_text,
  [sym_interpolation] = sym_interpolation,
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
  [aux_sym__big_string_literal_repeat1] = aux_sym__big_string_literal_repeat1,
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
  [sym__interpolated_string_text_fragment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__interpolated_verbatim_string_text_fragment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_BSLASH] = {
    .visible = true,
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
  [sym__interpolated_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolated_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym__big_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolated_raw_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolated_raw_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
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
  [aux_sym__big_string_literal_repeat1] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 3,
  [7] = 3,
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
  [29] = 21,
  [30] = 17,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 27,
  [37] = 23,
  [38] = 38,
  [39] = 34,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 46,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 45,
  [56] = 56,
  [57] = 57,
  [58] = 48,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 48,
  [63] = 63,
  [64] = 63,
  [65] = 45,
  [66] = 66,
  [67] = 46,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 71,
  [73] = 68,
  [74] = 74,
  [75] = 43,
  [76] = 42,
  [77] = 77,
  [78] = 44,
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
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 77,
  [93] = 93,
  [94] = 94,
  [95] = 47,
  [96] = 96,
  [97] = 97,
  [98] = 57,
  [99] = 99,
  [100] = 56,
  [101] = 49,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 59,
  [106] = 106,
  [107] = 60,
  [108] = 108,
  [109] = 109,
  [110] = 61,
  [111] = 111,
  [112] = 112,
  [113] = 50,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 54,
  [123] = 123,
  [124] = 53,
  [125] = 125,
  [126] = 77,
  [127] = 127,
  [128] = 127,
  [129] = 129,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 140,
  [142] = 142,
  [143] = 136,
  [144] = 144,
  [145] = 137,
  [146] = 144,
  [147] = 135,
  [148] = 148,
  [149] = 148,
  [150] = 150,
  [151] = 140,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 142,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 142,
  [169] = 169,
  [170] = 170,
  [171] = 161,
  [172] = 170,
  [173] = 167,
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
  [187] = 178,
  [188] = 188,
  [189] = 186,
  [190] = 190,
  [191] = 179,
  [192] = 183,
  [193] = 193,
  [194] = 194,
  [195] = 176,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 201,
  [204] = 201,
  [205] = 205,
  [206] = 205,
  [207] = 207,
  [208] = 201,
  [209] = 209,
  [210] = 201,
  [211] = 202,
  [212] = 212,
  [213] = 213,
  [214] = 213,
  [215] = 213,
  [216] = 216,
  [217] = 213,
  [218] = 213,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 226,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 224,
  [233] = 231,
  [234] = 66,
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
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 250,
  [256] = 240,
  [257] = 257,
  [258] = 258,
  [259] = 259,
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
  [272] = 221,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 271,
  [278] = 278,
  [279] = 273,
  [280] = 280,
  [281] = 273,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 273,
  [286] = 286,
  [287] = 276,
  [288] = 224,
  [289] = 271,
  [290] = 280,
  [291] = 291,
  [292] = 235,
  [293] = 293,
  [294] = 271,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 275,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 303,
  [309] = 309,
  [310] = 310,
  [311] = 106,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 86,
  [318] = 90,
  [319] = 319,
  [320] = 320,
  [321] = 91,
  [322] = 322,
  [323] = 314,
  [324] = 324,
  [325] = 83,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
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
  [341] = 341,
  [342] = 328,
  [343] = 343,
  [344] = 344,
  [345] = 331,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 343,
  [350] = 330,
  [351] = 332,
  [352] = 335,
  [353] = 336,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 326,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 348,
  [366] = 366,
  [367] = 367,
  [368] = 337,
  [369] = 333,
  [370] = 355,
  [371] = 347,
  [372] = 346,
  [373] = 103,
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
  [385] = 381,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 382,
  [400] = 400,
  [401] = 401,
  [402] = 99,
  [403] = 403,
  [404] = 102,
  [405] = 93,
  [406] = 94,
  [407] = 407,
  [408] = 403,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 375,
  [413] = 413,
  [414] = 414,
  [415] = 375,
  [416] = 416,
  [417] = 417,
  [418] = 121,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 109,
  [423] = 423,
  [424] = 382,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 386,
  [429] = 429,
  [430] = 104,
  [431] = 420,
  [432] = 123,
  [433] = 433,
  [434] = 413,
  [435] = 261,
  [436] = 263,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 440,
  [450] = 269,
  [451] = 451,
  [452] = 452,
  [453] = 442,
  [454] = 264,
  [455] = 441,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 438,
  [461] = 461,
  [462] = 459,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 463,
  [468] = 451,
  [469] = 469,
  [470] = 452,
  [471] = 471,
  [472] = 440,
  [473] = 464,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 457,
  [479] = 445,
  [480] = 265,
  [481] = 481,
  [482] = 482,
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
      if (eof) ADVANCE(214);
      if (lookahead == '!') ADVANCE(222);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '&') ADVANCE(270);
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
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'K') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'M') ADVANCE(188);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '^') ADVANCE(296);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == 'x') ADVANCE(126);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(212)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(328);
      if (lookahead == '/') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '^') ADVANCE(296);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == 'w') ADVANCE(357);
      if (lookahead == 'x') ADVANCE(375);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '^') ADVANCE(296);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == 'w') ADVANCE(357);
      if (lookahead == 'x') ADVANCE(375);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(271);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == 'x') ADVANCE(375);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(242);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(394);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'K') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'M') ADVANCE(188);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '^') ADVANCE(296);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == 'w') ADVANCE(357);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(393);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '/') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(333);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(328);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(394);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == '[') ADVANCE(271);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '[') ADVANCE(271);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(323);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(276);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(280);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(273);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(277);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(274);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(278);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(275);
      END_STATE();
    case 25:
      if (lookahead == '6') ADVANCE(279);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(244);
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'S') ADVANCE(181);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(149);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(189);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(172);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(125);
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
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(317);
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
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(34);
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
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == 'x') ADVANCE(211);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 198:
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 199:
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 200:
      if (lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 201:
      if (lookahead == 'y') ADVANCE(102);
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
      if (lookahead == '}') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
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
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '&') ADVANCE(270);
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
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'K') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'M') ADVANCE(188);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '^') ADVANCE(296);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == 'x') ADVANCE(126);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(212)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 213:
      if (eof) ADVANCE(214);
      if (lookahead == '!') ADVANCE(26);
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
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(126);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(264);
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
      if (lookahead == 'e') ADVANCE(55);
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
      if (lookahead == '/') ADVANCE(323);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
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
      if (lookahead == 'L') ADVANCE(84);
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
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(339);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(339);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_imm);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_imm);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(295);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_set);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(244);
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_lshift);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_rshift);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_xor);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (lookahead == '.') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__interpolated_string_text_fragment);
      if (lookahead == '/') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__interpolated_string_text_fragment);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__interpolated_string_text_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LBRACE_LF);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__interpolated_verbatim_string_text_fragment);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__interpolated_verbatim_string_text_fragment);
      if (lookahead == '/') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__interpolated_verbatim_string_text_fragment);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__interpolated_verbatim_string_text_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LBRACE_BSLASH);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(380);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(394);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(364);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(394);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(343);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(394);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(358);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(312);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(322);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(342);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(298);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(302);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(310);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 's') ADVANCE(360);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(390);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(386);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(308);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(387);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(388);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(362);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(304);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(361);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(363);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(355);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(365);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(356);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(381);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(349);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(382);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(268);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(367);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(291);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(344);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(306);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(385);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(259);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(345);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(379);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(391);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(369);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(314);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(320);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(346);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(348);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(350);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(359);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(360);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(286);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(316);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(318);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(266);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(392);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(347);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(377);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(389);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(394);
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
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
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
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 213},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 213},
  [66] = {.lex_state = 213},
  [67] = {.lex_state = 213},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
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
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 213},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 213},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 213},
  [135] = {.lex_state = 213},
  [136] = {.lex_state = 213},
  [137] = {.lex_state = 213},
  [138] = {.lex_state = 213},
  [139] = {.lex_state = 213},
  [140] = {.lex_state = 213},
  [141] = {.lex_state = 213},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 213},
  [144] = {.lex_state = 213},
  [145] = {.lex_state = 213},
  [146] = {.lex_state = 213},
  [147] = {.lex_state = 213},
  [148] = {.lex_state = 213},
  [149] = {.lex_state = 213},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 213},
  [152] = {.lex_state = 213},
  [153] = {.lex_state = 213},
  [154] = {.lex_state = 213},
  [155] = {.lex_state = 213},
  [156] = {.lex_state = 213},
  [157] = {.lex_state = 213},
  [158] = {.lex_state = 213},
  [159] = {.lex_state = 213},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 213},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 13},
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
  [197] = {.lex_state = 213},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 213},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 213},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 213},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 213},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 213},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 213},
  [245] = {.lex_state = 213},
  [246] = {.lex_state = 213},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 213},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 213},
  [253] = {.lex_state = 213},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 213},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 213},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 213},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 213},
  [277] = {.lex_state = 213},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 213},
  [280] = {.lex_state = 213},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 6},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 213},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 213},
  [294] = {.lex_state = 8},
  [295] = {.lex_state = 6},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 6},
  [301] = {.lex_state = 7},
  [302] = {.lex_state = 6},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 6},
  [309] = {.lex_state = 6},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 6},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 213},
  [314] = {.lex_state = 6},
  [315] = {.lex_state = 213},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 8},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 213},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 8},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 213},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 8},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 6},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 8},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 213},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 6},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 8},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 8},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 8},
  [379] = {.lex_state = 6},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 213},
  [382] = {.lex_state = 6},
  [383] = {.lex_state = 213},
  [384] = {.lex_state = 213},
  [385] = {.lex_state = 213},
  [386] = {.lex_state = 213},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 8},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 8},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 213},
  [394] = {.lex_state = 213},
  [395] = {.lex_state = 6},
  [396] = {.lex_state = 213},
  [397] = {.lex_state = 213},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 6},
  [400] = {.lex_state = 6},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 8},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 8},
  [405] = {.lex_state = 8},
  [406] = {.lex_state = 8},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 8},
  [410] = {.lex_state = 213},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 6},
  [413] = {.lex_state = 213},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 6},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 8},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 213},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 8},
  [423] = {.lex_state = 213},
  [424] = {.lex_state = 6},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 6},
  [427] = {.lex_state = 8},
  [428] = {.lex_state = 213},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 8},
  [431] = {.lex_state = 213},
  [432] = {.lex_state = 8},
  [433] = {.lex_state = 6},
  [434] = {.lex_state = 213},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 213},
  [438] = {.lex_state = 2},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 213},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 2},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 213},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 213},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 2},
  [461] = {.lex_state = 213},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 2},
  [464] = {.lex_state = 2},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 2},
  [468] = {.lex_state = 2},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 6},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 2},
  [474] = {.lex_state = 213},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 213},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 213},
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
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_LF] = ACTIONS(1),
    [anon_sym_LBRACE_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(475),
    [sym__top_level] = STATE(197),
    [sym_import] = STATE(197),
    [sym_attribute] = STATE(474),
    [sym_extern] = STATE(481),
    [sym_func_header] = STATE(338),
    [sym_func_proto] = STATE(197),
    [sym_function_definition] = STATE(197),
    [sym_struct_definition] = STATE(197),
    [aux_sym_source_file_repeat1] = STATE(197),
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
  [0] = 36,
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
      anon_sym_set,
    ACTIONS(38), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_while,
    ACTIONS(53), 1,
      anon_sym_foreach,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      aux_sym_int_lit_token1,
    ACTIONS(62), 1,
      sym_float_lit,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(198), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(263), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(441), 1,
      sym_type,
    ACTIONS(44), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(308), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(52), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(159), 10,
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
  [135] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      anon_sym_while,
    ACTIONS(96), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(198), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(263), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(441), 1,
      sym_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(308), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(52), 5,
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
  [270] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      anon_sym_while,
    ACTIONS(96), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(263), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(441), 1,
      sym_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(308), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(52), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(143), 10,
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
  [405] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      anon_sym_while,
    ACTIONS(96), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(263), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(441), 1,
      sym_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(308), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(52), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(136), 10,
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
  [540] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      anon_sym_while,
    ACTIONS(96), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(263), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(441), 1,
      sym_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(308), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(52), 5,
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
  [675] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      anon_sym_while,
    ACTIONS(96), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(263), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(441), 1,
      sym_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(308), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(8), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(52), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(151), 10,
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
  [810] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      anon_sym_while,
    ACTIONS(96), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(263), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(441), 1,
      sym_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(308), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(52), 5,
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
  [945] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(263), 1,
      sym_destruct,
    STATE(368), 1,
      sym_pattern,
    STATE(369), 1,
      aux_sym_lambda_repeat1,
    STATE(419), 1,
      sym_array_type,
    STATE(441), 1,
      sym_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(153), 15,
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
  [1078] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(263), 1,
      sym_destruct,
    STATE(333), 1,
      aux_sym_lambda_repeat1,
    STATE(337), 1,
      sym_pattern,
    STATE(419), 1,
      sym_array_type,
    STATE(441), 1,
      sym_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(153), 15,
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
  [1211] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(260), 1,
      sym_type,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
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
  [1329] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_reference_type,
    STATE(260), 1,
      sym_type,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(103), 3,
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
  [1447] = 27,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(329), 1,
      aux_sym_call_expr_repeat1,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [1551] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [1649] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [1747] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [1845] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(155), 15,
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
  [1940] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2035] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2130] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2225] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2320] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(156), 15,
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
  [2415] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2510] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2605] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2700] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2795] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2890] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [2985] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(147), 15,
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
  [3080] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
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
  [3175] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(157), 1,
      sym_int_lit,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(103), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(132), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(166), 15,
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
  [3272] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [3367] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [3462] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
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
  [3557] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(108), 15,
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
  [3652] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [3747] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [3842] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [3937] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [4032] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
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
  [4127] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_set,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      aux_sym_int_lit_token1,
    ACTIONS(102), 1,
      sym_float_lit,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(476), 1,
      sym_array_type,
    ACTIONS(90), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(103), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(158), 15,
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
  [4222] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      anon_sym_else,
    STATE(56), 1,
      sym_else_expr,
    STATE(43), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(164), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(166), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4279] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      anon_sym_else,
    STATE(50), 1,
      sym_else_expr,
    STATE(44), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(172), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4336] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 1,
      anon_sym_else,
    STATE(44), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(176), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4390] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(183), 25,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4438] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(187), 25,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4486] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(191), 25,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4534] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(195), 25,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4582] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(199), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4629] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(203), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4676] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(187), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4723] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(207), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(209), 12,
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
    ACTIONS(211), 12,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4774] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(215), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4821] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(219), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(183), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4915] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(223), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [4962] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(227), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [5009] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(195), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [5056] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(231), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [5103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(235), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [5150] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 15,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(239), 24,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [5197] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(193), 29,
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
  [5241] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_GT,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(330), 1,
      aux_sym_type_parameters_repeat1,
    STATE(332), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(432), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(427), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5329] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_GT,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(350), 1,
      aux_sym_type_parameters_repeat1,
    STATE(351), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(432), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(427), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5417] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(181), 29,
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
  [5461] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(93), 1,
      sym_int_type,
    ACTIONS(269), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(271), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
    ACTIONS(267), 21,
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
  [5509] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(185), 29,
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
  [5553] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(388), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(432), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(427), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5635] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(388), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(432), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(427), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5717] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(388), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(432), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(427), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5799] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(388), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(432), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(427), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5881] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(388), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(432), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(427), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5963] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(388), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(432), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(427), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [6045] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(388), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(432), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(373), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(427), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [6124] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_else,
    STATE(113), 1,
      sym_else_expr,
    STATE(78), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(172), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(170), 20,
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
  [6168] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_else,
    STATE(100), 1,
      sym_else_expr,
    STATE(75), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(166), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(164), 20,
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
  [6212] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(296), 1,
      anon_sym_AMP,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      aux_sym_array_access_repeat1,
    STATE(82), 1,
      sym_type_parameters,
    ACTIONS(300), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(205), 10,
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
    ACTIONS(209), 10,
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
  [6265] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_else,
    STATE(78), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(176), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(174), 20,
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
  [6306] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_LT,
    STATE(81), 1,
      aux_sym_array_access_repeat1,
    STATE(82), 1,
      sym_type_parameters,
    ACTIONS(209), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(205), 20,
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
  [6351] = 3,
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
  [6387] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(314), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(312), 20,
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
  [6427] = 3,
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
  [6463] = 3,
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
  [6499] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(326), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(324), 22,
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
  [6535] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(209), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(205), 20,
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
  [6575] = 3,
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
  [6611] = 3,
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
  [6647] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(338), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(336), 20,
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
  [6687] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(343), 22,
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
  [6723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(347), 22,
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
  [6759] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(353), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(351), 22,
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
  [6795] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      aux_sym_array_access_repeat1,
    STATE(82), 1,
      sym_type_parameters,
    ACTIONS(287), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(209), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(205), 16,
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
  [6845] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(355), 21,
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
  [6880] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(359), 21,
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
  [6915] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(189), 21,
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
  [6950] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(363), 21,
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
  [6985] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(367), 20,
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
  [7019] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(225), 20,
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
  [7053] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(371), 20,
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
  [7087] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(221), 20,
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
  [7121] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(197), 20,
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
  [7155] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(375), 20,
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
  [7189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(379), 20,
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
  [7223] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(385), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(383), 20,
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
  [7257] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(229), 20,
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
  [7291] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(387), 20,
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
  [7325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(233), 20,
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
  [7359] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(391), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7413] = 3,
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
  [7447] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(237), 20,
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
  [7481] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(421), 1,
      anon_sym_EQ,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(419), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7535] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_EQ,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(423), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7589] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(201), 20,
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
  [7623] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(427), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
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
  [7659] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(429), 1,
      anon_sym_EQ,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(427), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_or,
  [7711] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(429), 1,
      anon_sym_EQ,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(427), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [7761] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(429), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(427), 11,
      anon_sym_SEMI,
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
  [7807] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(429), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(427), 13,
      anon_sym_SEMI,
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
  [7851] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 3,
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
    ACTIONS(427), 15,
      anon_sym_SEMI,
      anon_sym_STAR,
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
  [7891] = 3,
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
  [7925] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(435), 20,
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
  [7959] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(217), 20,
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
  [7993] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(441), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(439), 20,
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
  [8027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(213), 20,
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
  [8061] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(445), 1,
      anon_sym_EQ,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(443), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8115] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      aux_sym_array_access_repeat1,
    STATE(82), 1,
      sym_type_parameters,
    ACTIONS(209), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(205), 15,
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
  [8160] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(447), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    ACTIONS(455), 1,
      anon_sym_set,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(326), 1,
      sym_pattern,
    STATE(370), 1,
      aux_sym_destruct_repeat1,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [8226] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(447), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(455), 1,
      anon_sym_set,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(326), 1,
      sym_pattern,
    STATE(370), 1,
      aux_sym_destruct_repeat1,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [8292] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_LT,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_array_access_repeat1,
    STATE(82), 1,
      sym_type_parameters,
    ACTIONS(209), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(205), 15,
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
  [8334] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(447), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    ACTIONS(465), 1,
      anon_sym_set,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(355), 1,
      aux_sym_destruct_repeat1,
    STATE(357), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [8400] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    ACTIONS(469), 1,
      anon_sym_set,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(335), 1,
      aux_sym_destruct_repeat1,
    STATE(336), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [8463] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(209), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(205), 15,
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
  [8500] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    ACTIONS(473), 1,
      anon_sym_set,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(352), 1,
      aux_sym_destruct_repeat1,
    STATE(353), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [8563] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8616] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_block,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8666] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8716] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8766] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8816] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(485), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8864] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8914] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8964] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(489), 1,
      anon_sym_LT,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(206), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(267), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(487), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9020] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9070] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_block,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9120] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9170] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_block,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9220] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9270] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9320] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9370] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      anon_sym_GT,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(239), 1,
      sym_scoped_type_identifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(362), 1,
      sym_generic_parameter,
    STATE(363), 1,
      aux_sym_generic_parameters_repeat1,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [9430] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9480] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(505), 1,
      anon_sym_EQ,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9527] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9574] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9621] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9668] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(513), 1,
      anon_sym_SEMI,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9715] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    ACTIONS(381), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(379), 15,
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
  [9746] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(515), 1,
      anon_sym_SEMI,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9793] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9840] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(517), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(239), 1,
      sym_scoped_type_identifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(398), 1,
      sym_generic_parameter,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [9894] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(417), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [9948] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(521), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(239), 1,
      sym_scoped_type_identifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(398), 1,
      sym_generic_parameter,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10002] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_LT,
    ACTIONS(523), 1,
      anon_sym_in,
    STATE(206), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(267), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [10056] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(527), 12,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [10084] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(529), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(531), 12,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [10112] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(409), 1,
      anon_sym_and,
    ACTIONS(411), 1,
      anon_sym_or,
    ACTIONS(395), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(399), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(413), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(403), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [10156] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(417), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [10210] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(487), 1,
      anon_sym_EQ,
    ACTIONS(489), 1,
      anon_sym_LT,
    ACTIONS(535), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      anon_sym_AMP,
    ACTIONS(541), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(206), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(267), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [10264] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(547), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(549), 12,
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
      anon_sym_DQUOTE,
      sym_identifier,
  [10292] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(417), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [10346] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(417), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [10400] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(417), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [10454] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(417), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [10508] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(559), 1,
      anon_sym_set,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(429), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [10562] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(561), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(239), 1,
      sym_scoped_type_identifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(398), 1,
      sym_generic_parameter,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10616] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(489), 1,
      anon_sym_LT,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(565), 1,
      anon_sym_AMP,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(205), 1,
      sym_type_parameters,
    STATE(218), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(267), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(289), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [10667] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(410), 1,
      sym_type,
    ACTIONS(569), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10716] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(336), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [10767] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(436), 1,
      sym_destruct,
    STATE(455), 1,
      sym_type,
    STATE(478), 1,
      sym_pattern,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [10818] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(383), 1,
      sym_type,
    ACTIONS(575), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10867] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(416), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [10918] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(384), 1,
      sym_type,
    ACTIONS(577), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10967] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(489), 1,
      anon_sym_LT,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(565), 1,
      anon_sym_AMP,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(202), 1,
      sym_type_parameters,
    STATE(218), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(262), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(289), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [11018] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(397), 1,
      sym_type,
    ACTIONS(579), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11067] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(396), 1,
      sym_type,
    ACTIONS(581), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11116] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(346), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [11167] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(353), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [11218] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(393), 1,
      sym_type,
    ACTIONS(583), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11267] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(372), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [11318] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(394), 1,
      sym_type,
    ACTIONS(585), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11367] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(436), 1,
      sym_destruct,
    STATE(455), 1,
      sym_type,
    STATE(457), 1,
      sym_pattern,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [11418] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(489), 1,
      anon_sym_LT,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(211), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(262), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [11469] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(263), 1,
      sym_destruct,
    STATE(417), 1,
      sym_pattern,
    STATE(441), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(303), 2,
      sym_scoped_identifier,
      sym__path,
  [11520] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(423), 1,
      sym_type,
    ACTIONS(587), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11569] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(489), 1,
      anon_sym_LT,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(206), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(267), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [11620] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(239), 1,
      sym_scoped_type_identifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(398), 1,
      sym_generic_parameter,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11671] = 13,
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
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    STATE(338), 1,
      sym_func_header,
    STATE(474), 1,
      sym_attribute,
    STATE(481), 1,
      sym_extern,
    ACTIONS(13), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(200), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [11717] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(591), 1,
      anon_sym_AMP,
    ACTIONS(593), 1,
      anon_sym_EQ,
    STATE(215), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(482), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [11765] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    ACTIONS(595), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(439), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11813] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
    ACTIONS(599), 1,
      anon_sym_import,
    ACTIONS(602), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_extern,
    ACTIONS(611), 1,
      anon_sym_export,
    ACTIONS(614), 1,
      anon_sym_func,
    ACTIONS(617), 1,
      anon_sym_struct,
    STATE(338), 1,
      sym_func_header,
    STATE(474), 1,
      sym_attribute,
    STATE(481), 1,
      sym_extern,
    ACTIONS(608), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(200), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [11859] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(260), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11904] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(565), 1,
      anon_sym_AMP,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(218), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(266), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(289), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [11949] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(565), 1,
      anon_sym_AMP,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(218), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(260), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(289), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [11994] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(591), 1,
      anon_sym_AMP,
    STATE(215), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(260), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12039] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(565), 1,
      anon_sym_AMP,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(218), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(268), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(289), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [12084] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(268), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12129] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(444), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [12174] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(260), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [12219] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(390), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [12264] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(260), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12309] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(242), 1,
      sym_generic_type,
    STATE(266), 1,
      sym_type,
    STATE(239), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(259), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12354] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(622), 1,
      anon_sym_Ref,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(620), 12,
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
  [12381] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(247), 1,
      sym_generic_type,
    STATE(238), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(258), 2,
      sym_reference_type,
      sym_array_type,
    STATE(285), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(294), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [12420] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(247), 1,
      sym_generic_type,
    STATE(238), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(258), 2,
      sym_reference_type,
      sym_array_type,
    STATE(273), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(277), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12459] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(591), 1,
      anon_sym_AMP,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(247), 1,
      sym_generic_type,
    STATE(238), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(258), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12498] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(634), 1,
      anon_sym_Ref,
    STATE(251), 1,
      sym_generic_parameters,
    STATE(409), 1,
      sym_rune,
    ACTIONS(630), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(632), 9,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [12529] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(571), 1,
      anon_sym_AMP,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(247), 1,
      sym_generic_type,
    STATE(238), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(258), 2,
      sym_reference_type,
      sym_array_type,
    STATE(271), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(279), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [12568] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(565), 1,
      anon_sym_AMP,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(247), 1,
      sym_generic_type,
    STATE(238), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(258), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(289), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [12607] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(640), 1,
      sym_identifier,
    ACTIONS(638), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(636), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [12630] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(646), 1,
      sym_identifier,
    ACTIONS(644), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(642), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [12653] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(296), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12675] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(620), 12,
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
  [12693] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 11,
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
  [12710] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12729] = 2,
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
  [12746] = 6,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(662), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(654), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(658), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(660), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(230), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12771] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(664), 11,
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
  [12788] = 6,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(666), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(654), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(658), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(660), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(230), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12813] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(668), 11,
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
  [12830] = 6,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(670), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(673), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(676), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(230), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12855] = 6,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(654), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(658), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(660), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(228), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12880] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12901] = 6,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(654), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(658), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(660), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(226), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12926] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(405), 1,
      sym_int_type,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(688), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
  [12947] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12968] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12987] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(620), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13005] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    STATE(251), 1,
      sym_generic_parameters,
    ACTIONS(695), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13025] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    STATE(251), 1,
      sym_generic_parameters,
    ACTIONS(630), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13045] = 5,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(699), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(250), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [13066] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_export,
    ACTIONS(703), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13083] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_DOT,
    ACTIONS(630), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13100] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13115] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_export,
    ACTIONS(711), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13132] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 1,
      anon_sym_export,
    ACTIONS(715), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13149] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 1,
      anon_sym_export,
    ACTIONS(719), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13166] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_DOT,
    ACTIONS(695), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13183] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      anon_sym_export,
    ACTIONS(723), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13200] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(727), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13215] = 5,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(699), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(254), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [13236] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(731), 9,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13251] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      anon_sym_export,
    ACTIONS(733), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13268] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(739), 1,
      anon_sym_export,
    ACTIONS(737), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13285] = 5,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    ACTIONS(741), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(744), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(254), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [13306] = 5,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(699), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(254), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [13327] = 5,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(699), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(255), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [13348] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(755), 1,
      anon_sym_export,
    ACTIONS(753), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13365] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13379] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(630), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13393] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13407] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(759), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13421] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(761), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13435] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(763), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13449] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13463] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(767), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13477] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(769), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13491] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(771), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13505] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(773), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13519] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13533] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(781), 1,
      anon_sym_ro,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(779), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(777), 3,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [13552] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    STATE(280), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(785), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [13569] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(620), 5,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13586] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(276), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(785), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13601] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_DOT,
    ACTIONS(791), 1,
      anon_sym_STAR,
    ACTIONS(793), 1,
      sym_identifier,
    STATE(465), 1,
      sym_import_wildcard,
    STATE(466), 1,
      sym_import_path,
    STATE(387), 2,
      sym_scoped_identifier,
      sym__path,
  [13624] = 3,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(797), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(795), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE_LF,
      anon_sym_LBRACE_BSLASH,
  [13639] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACK,
    STATE(276), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(799), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [13656] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(280), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(785), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13671] = 3,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(806), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(804), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE_LF,
      anon_sym_LBRACE_BSLASH,
  [13686] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      anon_sym_LBRACK,
    STATE(276), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(785), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [13703] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(812), 1,
      anon_sym_LBRACK,
    STATE(280), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(810), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [13720] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(287), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(785), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13734] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13746] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13758] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13770] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_LBRACK,
    STATE(287), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(785), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13786] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(823), 1,
      anon_sym_LBRACE,
    STATE(313), 1,
      sym_generic_parameters,
    STATE(477), 1,
      sym_mutability,
    ACTIONS(825), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13806] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_LBRACK,
    STATE(287), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(799), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13822] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT,
    ACTIONS(620), 5,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13836] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(290), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(785), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13850] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(830), 1,
      anon_sym_LBRACK,
    STATE(290), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(810), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13866] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(833), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13878] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      anon_sym_DOT,
    ACTIONS(620), 5,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13892] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(835), 1,
      anon_sym_LBRACE,
    STATE(315), 1,
      sym_generic_parameters,
    STATE(458), 1,
      sym_mutability,
    ACTIONS(825), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13912] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      anon_sym_LBRACK,
    STATE(290), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(785), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13928] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    ACTIONS(841), 1,
      sym_identifier,
    STATE(199), 1,
      sym__field_identifier,
    STATE(297), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13945] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    ACTIONS(841), 1,
      sym_identifier,
    STATE(199), 1,
      sym__field_identifier,
    STATE(298), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13962] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
    ACTIONS(845), 1,
      sym_identifier,
    STATE(199), 1,
      sym__field_identifier,
    STATE(297), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13979] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym__field_identifier,
    STATE(297), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13996] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(446), 1,
      sym_string_literal,
    STATE(123), 2,
      sym__string_literal,
      sym__big_string_literal,
  [14013] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym__field_identifier,
    STATE(307), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14030] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(852), 1,
      anon_sym_BANG,
    STATE(456), 1,
      sym_attribute_name,
    ACTIONS(850), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [14045] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym__field_identifier,
    STATE(309), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14062] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(856), 1,
      anon_sym_DOT,
    ACTIONS(763), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [14075] = 3,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(797), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    ACTIONS(795), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_BSLASH,
  [14088] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      sym_identifier,
    STATE(327), 1,
      sym_parameter,
    STATE(361), 1,
      aux_sym_parameters_repeat1,
  [14107] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym__field_identifier,
    STATE(295), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14124] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym__field_identifier,
    STATE(297), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14141] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(866), 1,
      anon_sym_DOT,
    ACTIONS(763), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_identifier,
  [14154] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym__field_identifier,
    STATE(297), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14171] = 3,
    ACTIONS(656), 1,
      sym_line_comment,
    ACTIONS(873), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    ACTIONS(871), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_BSLASH,
  [14184] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14195] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_parameters,
    STATE(407), 1,
      sym_generic_parameters,
  [14211] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(877), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym_mutability,
    ACTIONS(825), 2,
      anon_sym_mut,
      anon_sym_imm,
  [14225] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      aux_sym_int_lit_token1,
    ACTIONS(881), 1,
      sym_identifier,
    STATE(442), 2,
      sym_int_lit,
      sym__type_identifier,
  [14239] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_LBRACE,
    STATE(477), 1,
      sym_mutability,
    ACTIONS(825), 2,
      anon_sym_mut,
      anon_sym_imm,
  [14253] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_parameters,
    STATE(411), 1,
      sym_generic_parameters,
  [14269] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14279] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(347), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14289] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(777), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14299] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_parameters,
    STATE(425), 1,
      sym_generic_parameters,
  [14315] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14325] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_parameters,
    STATE(421), 1,
      sym_generic_parameters,
  [14341] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      aux_sym_int_lit_token1,
    ACTIONS(881), 1,
      sym_identifier,
    STATE(453), 2,
      sym_int_lit,
      sym__type_identifier,
  [14355] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(448), 1,
      sym_attribute_name,
    ACTIONS(850), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [14367] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14377] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(335), 1,
      aux_sym_destruct_repeat1,
  [14390] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_parameters_repeat1,
  [14403] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14416] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_call_expr_repeat1,
  [14429] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      anon_sym_GT,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_type_parameters_repeat1,
  [14442] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14455] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      anon_sym_GT,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_type_parameters_repeat1,
  [14468] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14481] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14494] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14507] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      aux_sym_destruct_repeat1,
  [14520] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_lambda_repeat1,
  [14533] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(902), 1,
      anon_sym_SEMI,
    STATE(257), 1,
      sym_block,
  [14546] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_call_expr_repeat1,
  [14559] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14572] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_call_expr_repeat1,
  [14585] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14598] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(916), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14611] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(918), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [14620] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14633] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      aux_sym_destruct_repeat1,
  [14646] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_GT,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_type_parameters_repeat1,
  [14659] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(926), 1,
      anon_sym_if,
    STATE(110), 1,
      sym_block,
  [14672] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14685] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_GT,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_type_parameters_repeat1,
  [14698] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_GT,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_type_parameters_repeat1,
  [14711] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14724] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    STATE(349), 1,
      aux_sym_destruct_repeat1,
  [14737] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_parameter,
  [14750] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14763] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(934), 1,
      anon_sym_GT,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_generic_parameters_repeat1,
  [14776] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_destruct_repeat1,
  [14789] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      sym_identifier,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_parameter,
  [14802] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(939), 1,
      anon_sym_GT,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_type_parameters_repeat1,
  [14815] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 1,
      anon_sym_GT,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_generic_parameters_repeat1,
  [14828] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_parameters_repeat1,
  [14841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 1,
      anon_sym_GT,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_generic_parameters_repeat1,
  [14854] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 1,
      anon_sym_GT,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_generic_parameters_repeat1,
  [14867] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_parameters_repeat1,
  [14880] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    ACTIONS(953), 1,
      anon_sym_if,
    STATE(61), 1,
      sym_block,
  [14893] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_parameters_repeat1,
  [14906] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      sym_identifier,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_parameter,
  [14919] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      aux_sym_lambda_repeat1,
  [14932] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14945] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14958] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_type_parameters_repeat1,
  [14971] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(916), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_destruct_repeat1,
  [14984] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14992] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [15000] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(963), 1,
      sym_identifier,
    STATE(249), 1,
      sym__type_identifier,
  [15010] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 1,
      sym_identifier,
    STATE(120), 1,
      sym__field_identifier,
  [15020] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    ACTIONS(969), 1,
      anon_sym_func,
  [15030] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(971), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15038] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 1,
      sym_identifier,
    STATE(249), 1,
      sym__type_identifier,
  [15048] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 1,
      sym_identifier,
    STATE(293), 1,
      sym__type_identifier,
  [15058] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_block,
  [15068] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 1,
      sym_identifier,
    STATE(243), 1,
      sym__type_identifier,
  [15078] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(975), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15086] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(977), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15094] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
  [15104] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [15114] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(979), 1,
      anon_sym_SEMI,
    ACTIONS(981), 1,
      anon_sym_DOT,
  [15124] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(939), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15132] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15140] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(983), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15148] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(985), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15156] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      sym_identifier,
    STATE(389), 1,
      sym_parameter,
  [15166] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(987), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15174] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(989), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15182] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 1,
      sym_identifier,
    STATE(286), 1,
      sym__type_identifier,
  [15192] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(991), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15200] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(993), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15208] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(934), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15216] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(995), 1,
      sym_identifier,
    STATE(243), 1,
      sym__type_identifier,
  [15226] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(997), 1,
      anon_sym_STAR,
    ACTIONS(999), 1,
      sym_identifier,
  [15236] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1001), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15244] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15252] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1003), 1,
      anon_sym_POUND,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
  [15262] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15270] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15278] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15286] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_parameters,
  [15296] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      anon_sym_POUND,
    ACTIONS(1007), 1,
      anon_sym_RBRACK,
  [15306] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1009), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15314] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1011), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15322] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_parameters,
  [15332] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1013), 1,
      sym_identifier,
    STATE(249), 1,
      sym__type_identifier,
  [15342] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
  [15352] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [15360] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1015), 1,
      sym_identifier,
    STATE(249), 1,
      sym__type_identifier,
  [15370] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1017), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15378] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(906), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15386] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(435), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15394] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
  [15404] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_block,
  [15414] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_parameters,
  [15424] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15432] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1019), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15440] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1021), 1,
      sym_identifier,
    STATE(243), 1,
      sym__type_identifier,
  [15450] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_parameters,
  [15460] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1023), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [15468] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1025), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15476] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_block,
  [15486] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15494] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15502] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [15512] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15520] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1027), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [15528] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_block,
  [15538] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(759), 1,
      anon_sym_in,
  [15545] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(763), 1,
      anon_sym_in,
  [15552] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1029), 1,
      anon_sym_LBRACE,
  [15559] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1031), 1,
      anon_sym_EQ_GT,
  [15566] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      anon_sym_SEMI,
  [15573] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(856), 1,
      anon_sym_DOT,
  [15580] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      anon_sym_LBRACK,
  [15587] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      anon_sym_RBRACK,
  [15594] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1039), 1,
      anon_sym_SEMI,
  [15601] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1041), 1,
      anon_sym_SEMI,
  [15608] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
  [15615] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
  [15622] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1045), 1,
      anon_sym_func,
  [15629] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1047), 1,
      anon_sym_struct,
  [15636] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1049), 1,
      anon_sym_DOT,
  [15643] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_in,
  [15650] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1051), 1,
      anon_sym_EQ_GT,
  [15657] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 1,
      anon_sym_if,
  [15664] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1053), 1,
      anon_sym_RBRACK,
  [15671] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 1,
      anon_sym_in,
  [15678] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1055), 1,
      anon_sym_LBRACK,
  [15685] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1057), 1,
      anon_sym_struct,
  [15692] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1059), 1,
      anon_sym_in,
  [15699] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_LBRACE,
  [15706] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      anon_sym_POUND,
  [15713] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1061), 1,
      anon_sym_EQ_GT,
  [15720] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1063), 1,
      anon_sym_struct,
  [15727] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1003), 1,
      anon_sym_POUND,
  [15734] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1065), 1,
      anon_sym_EQ_GT,
  [15741] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1067), 1,
      anon_sym_EQ_GT,
  [15748] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(979), 1,
      anon_sym_SEMI,
  [15755] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1069), 1,
      anon_sym_SEMI,
  [15762] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1071), 1,
      anon_sym_EQ_GT,
  [15769] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1073), 1,
      anon_sym_EQ_GT,
  [15776] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1075), 1,
      anon_sym_SEMI,
  [15783] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(926), 1,
      anon_sym_if,
  [15790] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1077), 1,
      sym_identifier,
  [15797] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1079), 1,
      anon_sym_DOT,
  [15804] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      anon_sym_EQ_GT,
  [15811] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1083), 1,
      anon_sym_struct,
  [15818] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1085), 1,
      ts_builtin_sym_end,
  [15825] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
  [15832] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(877), 1,
      anon_sym_LBRACE,
  [15839] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1087), 1,
      anon_sym_in,
  [15846] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1007), 1,
      anon_sym_RBRACK,
  [15853] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(767), 1,
      anon_sym_in,
  [15860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1089), 1,
      anon_sym_func,
  [15867] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1091), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 135,
  [SMALL_STATE(4)] = 270,
  [SMALL_STATE(5)] = 405,
  [SMALL_STATE(6)] = 540,
  [SMALL_STATE(7)] = 675,
  [SMALL_STATE(8)] = 810,
  [SMALL_STATE(9)] = 945,
  [SMALL_STATE(10)] = 1078,
  [SMALL_STATE(11)] = 1211,
  [SMALL_STATE(12)] = 1329,
  [SMALL_STATE(13)] = 1447,
  [SMALL_STATE(14)] = 1551,
  [SMALL_STATE(15)] = 1649,
  [SMALL_STATE(16)] = 1747,
  [SMALL_STATE(17)] = 1845,
  [SMALL_STATE(18)] = 1940,
  [SMALL_STATE(19)] = 2035,
  [SMALL_STATE(20)] = 2130,
  [SMALL_STATE(21)] = 2225,
  [SMALL_STATE(22)] = 2320,
  [SMALL_STATE(23)] = 2415,
  [SMALL_STATE(24)] = 2510,
  [SMALL_STATE(25)] = 2605,
  [SMALL_STATE(26)] = 2700,
  [SMALL_STATE(27)] = 2795,
  [SMALL_STATE(28)] = 2890,
  [SMALL_STATE(29)] = 2985,
  [SMALL_STATE(30)] = 3080,
  [SMALL_STATE(31)] = 3175,
  [SMALL_STATE(32)] = 3272,
  [SMALL_STATE(33)] = 3367,
  [SMALL_STATE(34)] = 3462,
  [SMALL_STATE(35)] = 3557,
  [SMALL_STATE(36)] = 3652,
  [SMALL_STATE(37)] = 3747,
  [SMALL_STATE(38)] = 3842,
  [SMALL_STATE(39)] = 3937,
  [SMALL_STATE(40)] = 4032,
  [SMALL_STATE(41)] = 4127,
  [SMALL_STATE(42)] = 4222,
  [SMALL_STATE(43)] = 4279,
  [SMALL_STATE(44)] = 4336,
  [SMALL_STATE(45)] = 4390,
  [SMALL_STATE(46)] = 4438,
  [SMALL_STATE(47)] = 4486,
  [SMALL_STATE(48)] = 4534,
  [SMALL_STATE(49)] = 4582,
  [SMALL_STATE(50)] = 4629,
  [SMALL_STATE(51)] = 4676,
  [SMALL_STATE(52)] = 4723,
  [SMALL_STATE(53)] = 4774,
  [SMALL_STATE(54)] = 4821,
  [SMALL_STATE(55)] = 4868,
  [SMALL_STATE(56)] = 4915,
  [SMALL_STATE(57)] = 4962,
  [SMALL_STATE(58)] = 5009,
  [SMALL_STATE(59)] = 5056,
  [SMALL_STATE(60)] = 5103,
  [SMALL_STATE(61)] = 5150,
  [SMALL_STATE(62)] = 5197,
  [SMALL_STATE(63)] = 5241,
  [SMALL_STATE(64)] = 5329,
  [SMALL_STATE(65)] = 5417,
  [SMALL_STATE(66)] = 5461,
  [SMALL_STATE(67)] = 5509,
  [SMALL_STATE(68)] = 5553,
  [SMALL_STATE(69)] = 5635,
  [SMALL_STATE(70)] = 5717,
  [SMALL_STATE(71)] = 5799,
  [SMALL_STATE(72)] = 5881,
  [SMALL_STATE(73)] = 5963,
  [SMALL_STATE(74)] = 6045,
  [SMALL_STATE(75)] = 6124,
  [SMALL_STATE(76)] = 6168,
  [SMALL_STATE(77)] = 6212,
  [SMALL_STATE(78)] = 6265,
  [SMALL_STATE(79)] = 6306,
  [SMALL_STATE(80)] = 6351,
  [SMALL_STATE(81)] = 6387,
  [SMALL_STATE(82)] = 6427,
  [SMALL_STATE(83)] = 6463,
  [SMALL_STATE(84)] = 6499,
  [SMALL_STATE(85)] = 6535,
  [SMALL_STATE(86)] = 6575,
  [SMALL_STATE(87)] = 6611,
  [SMALL_STATE(88)] = 6647,
  [SMALL_STATE(89)] = 6687,
  [SMALL_STATE(90)] = 6723,
  [SMALL_STATE(91)] = 6759,
  [SMALL_STATE(92)] = 6795,
  [SMALL_STATE(93)] = 6845,
  [SMALL_STATE(94)] = 6880,
  [SMALL_STATE(95)] = 6915,
  [SMALL_STATE(96)] = 6950,
  [SMALL_STATE(97)] = 6985,
  [SMALL_STATE(98)] = 7019,
  [SMALL_STATE(99)] = 7053,
  [SMALL_STATE(100)] = 7087,
  [SMALL_STATE(101)] = 7121,
  [SMALL_STATE(102)] = 7155,
  [SMALL_STATE(103)] = 7189,
  [SMALL_STATE(104)] = 7223,
  [SMALL_STATE(105)] = 7257,
  [SMALL_STATE(106)] = 7291,
  [SMALL_STATE(107)] = 7325,
  [SMALL_STATE(108)] = 7359,
  [SMALL_STATE(109)] = 7413,
  [SMALL_STATE(110)] = 7447,
  [SMALL_STATE(111)] = 7481,
  [SMALL_STATE(112)] = 7535,
  [SMALL_STATE(113)] = 7589,
  [SMALL_STATE(114)] = 7623,
  [SMALL_STATE(115)] = 7659,
  [SMALL_STATE(116)] = 7711,
  [SMALL_STATE(117)] = 7761,
  [SMALL_STATE(118)] = 7807,
  [SMALL_STATE(119)] = 7851,
  [SMALL_STATE(120)] = 7891,
  [SMALL_STATE(121)] = 7925,
  [SMALL_STATE(122)] = 7959,
  [SMALL_STATE(123)] = 7993,
  [SMALL_STATE(124)] = 8027,
  [SMALL_STATE(125)] = 8061,
  [SMALL_STATE(126)] = 8115,
  [SMALL_STATE(127)] = 8160,
  [SMALL_STATE(128)] = 8226,
  [SMALL_STATE(129)] = 8292,
  [SMALL_STATE(130)] = 8334,
  [SMALL_STATE(131)] = 8400,
  [SMALL_STATE(132)] = 8463,
  [SMALL_STATE(133)] = 8500,
  [SMALL_STATE(134)] = 8563,
  [SMALL_STATE(135)] = 8616,
  [SMALL_STATE(136)] = 8666,
  [SMALL_STATE(137)] = 8716,
  [SMALL_STATE(138)] = 8766,
  [SMALL_STATE(139)] = 8816,
  [SMALL_STATE(140)] = 8864,
  [SMALL_STATE(141)] = 8914,
  [SMALL_STATE(142)] = 8964,
  [SMALL_STATE(143)] = 9020,
  [SMALL_STATE(144)] = 9070,
  [SMALL_STATE(145)] = 9120,
  [SMALL_STATE(146)] = 9170,
  [SMALL_STATE(147)] = 9220,
  [SMALL_STATE(148)] = 9270,
  [SMALL_STATE(149)] = 9320,
  [SMALL_STATE(150)] = 9370,
  [SMALL_STATE(151)] = 9430,
  [SMALL_STATE(152)] = 9480,
  [SMALL_STATE(153)] = 9527,
  [SMALL_STATE(154)] = 9574,
  [SMALL_STATE(155)] = 9621,
  [SMALL_STATE(156)] = 9668,
  [SMALL_STATE(157)] = 9715,
  [SMALL_STATE(158)] = 9746,
  [SMALL_STATE(159)] = 9793,
  [SMALL_STATE(160)] = 9840,
  [SMALL_STATE(161)] = 9894,
  [SMALL_STATE(162)] = 9948,
  [SMALL_STATE(163)] = 10002,
  [SMALL_STATE(164)] = 10056,
  [SMALL_STATE(165)] = 10084,
  [SMALL_STATE(166)] = 10112,
  [SMALL_STATE(167)] = 10156,
  [SMALL_STATE(168)] = 10210,
  [SMALL_STATE(169)] = 10264,
  [SMALL_STATE(170)] = 10292,
  [SMALL_STATE(171)] = 10346,
  [SMALL_STATE(172)] = 10400,
  [SMALL_STATE(173)] = 10454,
  [SMALL_STATE(174)] = 10508,
  [SMALL_STATE(175)] = 10562,
  [SMALL_STATE(176)] = 10616,
  [SMALL_STATE(177)] = 10667,
  [SMALL_STATE(178)] = 10716,
  [SMALL_STATE(179)] = 10767,
  [SMALL_STATE(180)] = 10818,
  [SMALL_STATE(181)] = 10867,
  [SMALL_STATE(182)] = 10918,
  [SMALL_STATE(183)] = 10967,
  [SMALL_STATE(184)] = 11018,
  [SMALL_STATE(185)] = 11067,
  [SMALL_STATE(186)] = 11116,
  [SMALL_STATE(187)] = 11167,
  [SMALL_STATE(188)] = 11218,
  [SMALL_STATE(189)] = 11267,
  [SMALL_STATE(190)] = 11318,
  [SMALL_STATE(191)] = 11367,
  [SMALL_STATE(192)] = 11418,
  [SMALL_STATE(193)] = 11469,
  [SMALL_STATE(194)] = 11520,
  [SMALL_STATE(195)] = 11569,
  [SMALL_STATE(196)] = 11620,
  [SMALL_STATE(197)] = 11671,
  [SMALL_STATE(198)] = 11717,
  [SMALL_STATE(199)] = 11765,
  [SMALL_STATE(200)] = 11813,
  [SMALL_STATE(201)] = 11859,
  [SMALL_STATE(202)] = 11904,
  [SMALL_STATE(203)] = 11949,
  [SMALL_STATE(204)] = 11994,
  [SMALL_STATE(205)] = 12039,
  [SMALL_STATE(206)] = 12084,
  [SMALL_STATE(207)] = 12129,
  [SMALL_STATE(208)] = 12174,
  [SMALL_STATE(209)] = 12219,
  [SMALL_STATE(210)] = 12264,
  [SMALL_STATE(211)] = 12309,
  [SMALL_STATE(212)] = 12354,
  [SMALL_STATE(213)] = 12381,
  [SMALL_STATE(214)] = 12420,
  [SMALL_STATE(215)] = 12459,
  [SMALL_STATE(216)] = 12498,
  [SMALL_STATE(217)] = 12529,
  [SMALL_STATE(218)] = 12568,
  [SMALL_STATE(219)] = 12607,
  [SMALL_STATE(220)] = 12630,
  [SMALL_STATE(221)] = 12653,
  [SMALL_STATE(222)] = 12675,
  [SMALL_STATE(223)] = 12693,
  [SMALL_STATE(224)] = 12710,
  [SMALL_STATE(225)] = 12729,
  [SMALL_STATE(226)] = 12746,
  [SMALL_STATE(227)] = 12771,
  [SMALL_STATE(228)] = 12788,
  [SMALL_STATE(229)] = 12813,
  [SMALL_STATE(230)] = 12830,
  [SMALL_STATE(231)] = 12855,
  [SMALL_STATE(232)] = 12880,
  [SMALL_STATE(233)] = 12901,
  [SMALL_STATE(234)] = 12926,
  [SMALL_STATE(235)] = 12947,
  [SMALL_STATE(236)] = 12968,
  [SMALL_STATE(237)] = 12987,
  [SMALL_STATE(238)] = 13005,
  [SMALL_STATE(239)] = 13025,
  [SMALL_STATE(240)] = 13045,
  [SMALL_STATE(241)] = 13066,
  [SMALL_STATE(242)] = 13083,
  [SMALL_STATE(243)] = 13100,
  [SMALL_STATE(244)] = 13115,
  [SMALL_STATE(245)] = 13132,
  [SMALL_STATE(246)] = 13149,
  [SMALL_STATE(247)] = 13166,
  [SMALL_STATE(248)] = 13183,
  [SMALL_STATE(249)] = 13200,
  [SMALL_STATE(250)] = 13215,
  [SMALL_STATE(251)] = 13236,
  [SMALL_STATE(252)] = 13251,
  [SMALL_STATE(253)] = 13268,
  [SMALL_STATE(254)] = 13285,
  [SMALL_STATE(255)] = 13306,
  [SMALL_STATE(256)] = 13327,
  [SMALL_STATE(257)] = 13348,
  [SMALL_STATE(258)] = 13365,
  [SMALL_STATE(259)] = 13379,
  [SMALL_STATE(260)] = 13393,
  [SMALL_STATE(261)] = 13407,
  [SMALL_STATE(262)] = 13421,
  [SMALL_STATE(263)] = 13435,
  [SMALL_STATE(264)] = 13449,
  [SMALL_STATE(265)] = 13463,
  [SMALL_STATE(266)] = 13477,
  [SMALL_STATE(267)] = 13491,
  [SMALL_STATE(268)] = 13505,
  [SMALL_STATE(269)] = 13519,
  [SMALL_STATE(270)] = 13533,
  [SMALL_STATE(271)] = 13552,
  [SMALL_STATE(272)] = 13569,
  [SMALL_STATE(273)] = 13586,
  [SMALL_STATE(274)] = 13601,
  [SMALL_STATE(275)] = 13624,
  [SMALL_STATE(276)] = 13639,
  [SMALL_STATE(277)] = 13656,
  [SMALL_STATE(278)] = 13671,
  [SMALL_STATE(279)] = 13686,
  [SMALL_STATE(280)] = 13703,
  [SMALL_STATE(281)] = 13720,
  [SMALL_STATE(282)] = 13734,
  [SMALL_STATE(283)] = 13746,
  [SMALL_STATE(284)] = 13758,
  [SMALL_STATE(285)] = 13770,
  [SMALL_STATE(286)] = 13786,
  [SMALL_STATE(287)] = 13806,
  [SMALL_STATE(288)] = 13822,
  [SMALL_STATE(289)] = 13836,
  [SMALL_STATE(290)] = 13850,
  [SMALL_STATE(291)] = 13866,
  [SMALL_STATE(292)] = 13878,
  [SMALL_STATE(293)] = 13892,
  [SMALL_STATE(294)] = 13912,
  [SMALL_STATE(295)] = 13928,
  [SMALL_STATE(296)] = 13945,
  [SMALL_STATE(297)] = 13962,
  [SMALL_STATE(298)] = 13979,
  [SMALL_STATE(299)] = 13996,
  [SMALL_STATE(300)] = 14013,
  [SMALL_STATE(301)] = 14030,
  [SMALL_STATE(302)] = 14045,
  [SMALL_STATE(303)] = 14062,
  [SMALL_STATE(304)] = 14075,
  [SMALL_STATE(305)] = 14088,
  [SMALL_STATE(306)] = 14107,
  [SMALL_STATE(307)] = 14124,
  [SMALL_STATE(308)] = 14141,
  [SMALL_STATE(309)] = 14154,
  [SMALL_STATE(310)] = 14171,
  [SMALL_STATE(311)] = 14184,
  [SMALL_STATE(312)] = 14195,
  [SMALL_STATE(313)] = 14211,
  [SMALL_STATE(314)] = 14225,
  [SMALL_STATE(315)] = 14239,
  [SMALL_STATE(316)] = 14253,
  [SMALL_STATE(317)] = 14269,
  [SMALL_STATE(318)] = 14279,
  [SMALL_STATE(319)] = 14289,
  [SMALL_STATE(320)] = 14299,
  [SMALL_STATE(321)] = 14315,
  [SMALL_STATE(322)] = 14325,
  [SMALL_STATE(323)] = 14341,
  [SMALL_STATE(324)] = 14355,
  [SMALL_STATE(325)] = 14367,
  [SMALL_STATE(326)] = 14377,
  [SMALL_STATE(327)] = 14390,
  [SMALL_STATE(328)] = 14403,
  [SMALL_STATE(329)] = 14416,
  [SMALL_STATE(330)] = 14429,
  [SMALL_STATE(331)] = 14442,
  [SMALL_STATE(332)] = 14455,
  [SMALL_STATE(333)] = 14468,
  [SMALL_STATE(334)] = 14481,
  [SMALL_STATE(335)] = 14494,
  [SMALL_STATE(336)] = 14507,
  [SMALL_STATE(337)] = 14520,
  [SMALL_STATE(338)] = 14533,
  [SMALL_STATE(339)] = 14546,
  [SMALL_STATE(340)] = 14559,
  [SMALL_STATE(341)] = 14572,
  [SMALL_STATE(342)] = 14585,
  [SMALL_STATE(343)] = 14598,
  [SMALL_STATE(344)] = 14611,
  [SMALL_STATE(345)] = 14620,
  [SMALL_STATE(346)] = 14633,
  [SMALL_STATE(347)] = 14646,
  [SMALL_STATE(348)] = 14659,
  [SMALL_STATE(349)] = 14672,
  [SMALL_STATE(350)] = 14685,
  [SMALL_STATE(351)] = 14698,
  [SMALL_STATE(352)] = 14711,
  [SMALL_STATE(353)] = 14724,
  [SMALL_STATE(354)] = 14737,
  [SMALL_STATE(355)] = 14750,
  [SMALL_STATE(356)] = 14763,
  [SMALL_STATE(357)] = 14776,
  [SMALL_STATE(358)] = 14789,
  [SMALL_STATE(359)] = 14802,
  [SMALL_STATE(360)] = 14815,
  [SMALL_STATE(361)] = 14828,
  [SMALL_STATE(362)] = 14841,
  [SMALL_STATE(363)] = 14854,
  [SMALL_STATE(364)] = 14867,
  [SMALL_STATE(365)] = 14880,
  [SMALL_STATE(366)] = 14893,
  [SMALL_STATE(367)] = 14906,
  [SMALL_STATE(368)] = 14919,
  [SMALL_STATE(369)] = 14932,
  [SMALL_STATE(370)] = 14945,
  [SMALL_STATE(371)] = 14958,
  [SMALL_STATE(372)] = 14971,
  [SMALL_STATE(373)] = 14984,
  [SMALL_STATE(374)] = 14992,
  [SMALL_STATE(375)] = 15000,
  [SMALL_STATE(376)] = 15010,
  [SMALL_STATE(377)] = 15020,
  [SMALL_STATE(378)] = 15030,
  [SMALL_STATE(379)] = 15038,
  [SMALL_STATE(380)] = 15048,
  [SMALL_STATE(381)] = 15058,
  [SMALL_STATE(382)] = 15068,
  [SMALL_STATE(383)] = 15078,
  [SMALL_STATE(384)] = 15086,
  [SMALL_STATE(385)] = 15094,
  [SMALL_STATE(386)] = 15104,
  [SMALL_STATE(387)] = 15114,
  [SMALL_STATE(388)] = 15124,
  [SMALL_STATE(389)] = 15132,
  [SMALL_STATE(390)] = 15140,
  [SMALL_STATE(391)] = 15148,
  [SMALL_STATE(392)] = 15156,
  [SMALL_STATE(393)] = 15166,
  [SMALL_STATE(394)] = 15174,
  [SMALL_STATE(395)] = 15182,
  [SMALL_STATE(396)] = 15192,
  [SMALL_STATE(397)] = 15200,
  [SMALL_STATE(398)] = 15208,
  [SMALL_STATE(399)] = 15216,
  [SMALL_STATE(400)] = 15226,
  [SMALL_STATE(401)] = 15236,
  [SMALL_STATE(402)] = 15244,
  [SMALL_STATE(403)] = 15252,
  [SMALL_STATE(404)] = 15262,
  [SMALL_STATE(405)] = 15270,
  [SMALL_STATE(406)] = 15278,
  [SMALL_STATE(407)] = 15286,
  [SMALL_STATE(408)] = 15296,
  [SMALL_STATE(409)] = 15306,
  [SMALL_STATE(410)] = 15314,
  [SMALL_STATE(411)] = 15322,
  [SMALL_STATE(412)] = 15332,
  [SMALL_STATE(413)] = 15342,
  [SMALL_STATE(414)] = 15352,
  [SMALL_STATE(415)] = 15360,
  [SMALL_STATE(416)] = 15370,
  [SMALL_STATE(417)] = 15378,
  [SMALL_STATE(418)] = 15386,
  [SMALL_STATE(419)] = 15394,
  [SMALL_STATE(420)] = 15404,
  [SMALL_STATE(421)] = 15414,
  [SMALL_STATE(422)] = 15424,
  [SMALL_STATE(423)] = 15432,
  [SMALL_STATE(424)] = 15440,
  [SMALL_STATE(425)] = 15450,
  [SMALL_STATE(426)] = 15460,
  [SMALL_STATE(427)] = 15468,
  [SMALL_STATE(428)] = 15476,
  [SMALL_STATE(429)] = 15486,
  [SMALL_STATE(430)] = 15494,
  [SMALL_STATE(431)] = 15502,
  [SMALL_STATE(432)] = 15512,
  [SMALL_STATE(433)] = 15520,
  [SMALL_STATE(434)] = 15528,
  [SMALL_STATE(435)] = 15538,
  [SMALL_STATE(436)] = 15545,
  [SMALL_STATE(437)] = 15552,
  [SMALL_STATE(438)] = 15559,
  [SMALL_STATE(439)] = 15566,
  [SMALL_STATE(440)] = 15573,
  [SMALL_STATE(441)] = 15580,
  [SMALL_STATE(442)] = 15587,
  [SMALL_STATE(443)] = 15594,
  [SMALL_STATE(444)] = 15601,
  [SMALL_STATE(445)] = 15608,
  [SMALL_STATE(446)] = 15615,
  [SMALL_STATE(447)] = 15622,
  [SMALL_STATE(448)] = 15629,
  [SMALL_STATE(449)] = 15636,
  [SMALL_STATE(450)] = 15643,
  [SMALL_STATE(451)] = 15650,
  [SMALL_STATE(452)] = 15657,
  [SMALL_STATE(453)] = 15664,
  [SMALL_STATE(454)] = 15671,
  [SMALL_STATE(455)] = 15678,
  [SMALL_STATE(456)] = 15685,
  [SMALL_STATE(457)] = 15692,
  [SMALL_STATE(458)] = 15699,
  [SMALL_STATE(459)] = 15706,
  [SMALL_STATE(460)] = 15713,
  [SMALL_STATE(461)] = 15720,
  [SMALL_STATE(462)] = 15727,
  [SMALL_STATE(463)] = 15734,
  [SMALL_STATE(464)] = 15741,
  [SMALL_STATE(465)] = 15748,
  [SMALL_STATE(466)] = 15755,
  [SMALL_STATE(467)] = 15762,
  [SMALL_STATE(468)] = 15769,
  [SMALL_STATE(469)] = 15776,
  [SMALL_STATE(470)] = 15783,
  [SMALL_STATE(471)] = 15790,
  [SMALL_STATE(472)] = 15797,
  [SMALL_STATE(473)] = 15804,
  [SMALL_STATE(474)] = 15811,
  [SMALL_STATE(475)] = 15818,
  [SMALL_STATE(476)] = 15825,
  [SMALL_STATE(477)] = 15832,
  [SMALL_STATE(478)] = 15839,
  [SMALL_STATE(479)] = 15846,
  [SMALL_STATE(480)] = 15853,
  [SMALL_STATE(481)] = 15860,
  [SMALL_STATE(482)] = 15867,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(382),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(128),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(104),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(191),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(240),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(231),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(452),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [290] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(63),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(470),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(63),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 2, .production_id = 14),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 2, .production_id = 14),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_access_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 2), SHIFT_REPEAT(31),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 27),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 27),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_type, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_access_repeat1, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__big_string_literal, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__big_string_literal, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 29),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 29),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 28),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 28),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__big_string_literal, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__big_string_literal, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_destruct, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(399),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(210),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(408),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(221),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 9),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 17),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 19),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 11),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(377),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(481),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(481),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__big_string_literal_repeat1, 2), SHIFT_REPEAT(30),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__big_string_literal_repeat1, 2), SHIFT_REPEAT(278),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__big_string_literal_repeat1, 2), SHIFT_REPEAT(278),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__big_string_literal_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proto, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 8),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 6),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 16),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(17),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(310),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 6),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 5),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 2, .production_id = 14),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(459),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_raw_string_text, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_raw_string_text, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(479),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(462),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(445),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(311),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pattern, 1), SHIFT(375),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_text, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_text, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(174),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(193),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(38),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(196),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(74),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(392),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 18),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 20),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 21),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 3, .production_id = 14),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 30),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 31),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 12),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 10),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 22),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 23),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 3),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 24),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 3),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 1),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1085] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
