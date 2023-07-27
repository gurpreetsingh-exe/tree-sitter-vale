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
#define STATE_COUNT 445
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 2
#define TOKEN_COUNT 93
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
  anon_sym_ = 62,
  anon_sym_EQ = 63,
  anon_sym_return = 64,
  anon_sym_EQ_GT = 65,
  anon_sym_not = 66,
  anon_sym_AMP_AMP = 67,
  anon_sym_CARET = 68,
  anon_sym_true = 69,
  anon_sym_false = 70,
  anon_sym_while = 71,
  anon_sym_foreach = 72,
  anon_sym_in = 73,
  anon_sym_if = 74,
  anon_sym_else = 75,
  anon_sym_and = 76,
  anon_sym_or = 77,
  anon_sym_lshift = 78,
  anon_sym_rshift = 79,
  anon_sym_xor = 80,
  anon_sym_mod = 81,
  sym_line_comment = 82,
  aux_sym_int_lit_token1 = 83,
  sym_float_lit = 84,
  sym_escape_sequence = 85,
  anon_sym_DQUOTE = 86,
  sym__interpolated_string_text_fragment = 87,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 88,
  anon_sym_LBRACE_LF = 89,
  sym__interpolated_verbatim_string_text_fragment = 90,
  anon_sym_LBRACE_BSLASH = 91,
  sym_identifier = 92,
  sym_source_file = 93,
  sym__top_level = 94,
  sym_import = 95,
  sym_import_path = 96,
  sym_attribute_name = 97,
  sym_attribute = 98,
  sym_scoped_identifier = 99,
  sym_scoped_type_identifier = 100,
  sym_import_wildcard = 101,
  sym_extern = 102,
  sym_func_header = 103,
  sym_func_proto = 104,
  sym_function_definition = 105,
  sym_generic_parameters = 106,
  sym_rune = 107,
  sym_generic_parameter = 108,
  sym_region_parameter = 109,
  sym_region_specifier = 110,
  sym_parameters = 111,
  sym_parameter = 112,
  sym_struct_definition = 113,
  sym_struct_field = 114,
  sym_mutability = 115,
  sym_type = 116,
  sym_reference_type = 117,
  sym_array_access = 118,
  sym_array_type = 119,
  sym_dynamic_array_type = 120,
  sym_static_array_type = 121,
  sym_generic_type = 122,
  sym_int_type = 123,
  sym_block = 124,
  sym_expr_statement = 125,
  sym__statement = 126,
  sym_pattern = 127,
  sym_destruct = 128,
  sym_variable_definition = 129,
  sym_return_expr = 130,
  sym__expr = 131,
  sym_parenthesized_expr = 132,
  sym__expr_ending_with_block = 133,
  sym_lambda = 134,
  sym_not = 135,
  sym_augment = 136,
  sym_field_expr = 137,
  sym_assignment_expr = 138,
  sym_literal = 139,
  sym_bool_lit = 140,
  sym_call_expr = 141,
  sym_generic_function = 142,
  sym_type_parameters = 143,
  sym_type_parameter = 144,
  sym_while_expr = 145,
  sym_foreach = 146,
  sym_if_expr = 147,
  sym_else_if_expr = 148,
  sym_else_expr = 149,
  sym_binary_expr = 150,
  sym_int_lit = 151,
  sym_string_literal = 152,
  sym__string_literal = 153,
  sym__interpolated_string_content = 154,
  sym_interpolated_string_text = 155,
  sym__big_string_literal = 156,
  sym__interpolated_raw_string_content = 157,
  sym_interpolated_raw_string_text = 158,
  sym_interpolation = 159,
  sym__type_identifier = 160,
  sym__path = 161,
  sym__field_identifier = 162,
  aux_sym_source_file_repeat1 = 163,
  aux_sym_generic_parameters_repeat1 = 164,
  aux_sym_parameters_repeat1 = 165,
  aux_sym_struct_definition_repeat1 = 166,
  aux_sym_array_type_repeat1 = 167,
  aux_sym_array_type_repeat2 = 168,
  aux_sym_block_repeat1 = 169,
  aux_sym_destruct_repeat1 = 170,
  aux_sym_call_expr_repeat1 = 171,
  aux_sym_type_parameters_repeat1 = 172,
  aux_sym_if_expr_repeat1 = 173,
  aux_sym__string_literal_repeat1 = 174,
  aux_sym__big_string_literal_repeat1 = 175,
  alias_sym_field_identifier = 176,
  alias_sym_type_identifier = 177,
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
  [anon_sym_] = " ",
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
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_array_type_repeat2] = "array_type_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_destruct_repeat1] = "destruct_repeat1",
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
  [anon_sym_] = anon_sym_,
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
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_array_type_repeat2] = aux_sym_array_type_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_destruct_repeat1] = aux_sym_destruct_repeat1,
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
  [anon_sym_] = {
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
  [5] = 2,
  [6] = 2,
  [7] = 3,
  [8] = 3,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 12,
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
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 18,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 28,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 46,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 47,
  [60] = 60,
  [61] = 61,
  [62] = 47,
  [63] = 46,
  [64] = 45,
  [65] = 65,
  [66] = 66,
  [67] = 66,
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
  [80] = 48,
  [81] = 57,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 50,
  [92] = 92,
  [93] = 58,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 54,
  [107] = 107,
  [108] = 108,
  [109] = 49,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 53,
  [117] = 61,
  [118] = 118,
  [119] = 55,
  [120] = 120,
  [121] = 121,
  [122] = 56,
  [123] = 77,
  [124] = 88,
  [125] = 125,
  [126] = 125,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 132,
  [138] = 130,
  [139] = 139,
  [140] = 136,
  [141] = 141,
  [142] = 130,
  [143] = 143,
  [144] = 136,
  [145] = 139,
  [146] = 129,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 148,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 157,
  [160] = 160,
  [161] = 158,
  [162] = 160,
  [163] = 141,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 128,
  [170] = 170,
  [171] = 143,
  [172] = 172,
  [173] = 170,
  [174] = 174,
  [175] = 175,
  [176] = 149,
  [177] = 177,
  [178] = 178,
  [179] = 156,
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
  [195] = 193,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 197,
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
  [222] = 221,
  [223] = 223,
  [224] = 224,
  [225] = 65,
  [226] = 217,
  [227] = 227,
  [228] = 200,
  [229] = 215,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 208,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 242,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 250,
  [252] = 216,
  [253] = 253,
  [254] = 200,
  [255] = 255,
  [256] = 256,
  [257] = 215,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 234,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 245,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 256,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 90,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 107,
  [296] = 97,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 84,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 112,
  [308] = 308,
  [309] = 306,
  [310] = 310,
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
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 314,
  [331] = 319,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 316,
  [336] = 336,
  [337] = 325,
  [338] = 323,
  [339] = 315,
  [340] = 340,
  [341] = 341,
  [342] = 320,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 94,
  [354] = 96,
  [355] = 355,
  [356] = 356,
  [357] = 89,
  [358] = 87,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 92,
  [364] = 245,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 110,
  [375] = 368,
  [376] = 376,
  [377] = 113,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 99,
  [384] = 384,
  [385] = 385,
  [386] = 352,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 368,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 114,
  [395] = 395,
  [396] = 349,
  [397] = 397,
  [398] = 385,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 370,
  [404] = 384,
  [405] = 405,
  [406] = 400,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 416,
  [418] = 418,
  [419] = 419,
  [420] = 416,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 409,
  [430] = 410,
  [431] = 431,
  [432] = 425,
  [433] = 433,
  [434] = 434,
  [435] = 422,
  [436] = 436,
  [437] = 437,
  [438] = 433,
  [439] = 439,
  [440] = 424,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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

static inline bool sym_identifier_character_set_4(int32_t c) {
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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

static inline bool sym_identifier_character_set_6(int32_t c) {
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

static inline bool sym_identifier_character_set_7(int32_t c) {
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
      if (eof) ADVANCE(218);
      if (lookahead == '!') ADVANCE(226);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '&') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(294);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(191);
      if (lookahead == 'O') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'V') ADVANCE(38);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '^') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(119);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(129);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(216)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '&') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '[') ADVANCE(275);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(399);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 'x') ADVANCE(380);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '&') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '&') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '[') ADVANCE(275);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(399);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '&') ADVANCE(274);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '^') ADVANCE(301);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(399);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == 'w') ADVANCE(362);
      if (lookahead == 'x') ADVANCE(380);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '&') ADVANCE(274);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '^') ADVANCE(301);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(399);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == 'w') ADVANCE(362);
      if (lookahead == 'x') ADVANCE(380);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(246);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '&') ADVANCE(273);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(399);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(191);
      if (lookahead == 'O') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'V') ADVANCE(38);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '&') ADVANCE(274);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '^') ADVANCE(301);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(399);
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == 'w') ADVANCE(362);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '&') ADVANCE(273);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '[') ADVANCE(275);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(399);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(338);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '&') ADVANCE(273);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(399);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '&') ADVANCE(273);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '[') ADVANCE(275);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(399);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '&') ADVANCE(273);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '[') ADVANCE(275);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(399);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(328);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(280);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(280);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(284);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(277);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(281);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(278);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(282);
      END_STATE();
    case 26:
      if (lookahead == '6') ADVANCE(279);
      END_STATE();
    case 27:
      if (lookahead == '6') ADVANCE(283);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(297);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(184);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(152);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(154);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == 'x') ADVANCE(215);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 202:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 203:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(259);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 206:
      if (lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 207:
      if (lookahead == '{') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 208:
      if (lookahead == '}') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 216:
      if (eof) ADVANCE(218);
      if (lookahead == '!') ADVANCE(226);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '&') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(294);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(191);
      if (lookahead == 'O') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'V') ADVANCE(38);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '^') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(119);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(129);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(216)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 217:
      if (eof) ADVANCE(218);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == ')') ADVANCE(231);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(129);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(217)
      END_STATE();
    case 218:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DeriveStructDrop);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DeriveInterfaceDrop);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DeriveAnonymousSubstruct);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_exported);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(328);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Ref);
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Kind);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Region);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Prot);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_RefList);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Ownership);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Variability);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Mutability);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Location);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_ro);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ro);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(344);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(344);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_imm);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_imm);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(300);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_set);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead == '>') ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_lshift);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_rshift);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_xor);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__interpolated_string_text_fragment);
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__interpolated_string_text_fragment);
      if (lookahead == '/') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__interpolated_string_text_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LBRACE_LF);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__interpolated_verbatim_string_text_fragment);
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__interpolated_verbatim_string_text_fragment);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__interpolated_verbatim_string_text_fragment);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__interpolated_verbatim_string_text_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LBRACE_BSLASH);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(385);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(399);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(369);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(399);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(348);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(399);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(363);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(317);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(327);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(347);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(303);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(305);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(315);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 's') ADVANCE(365);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(395);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(391);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(313);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(392);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(393);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(367);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(309);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(366);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(368);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(360);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(370);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(361);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(386);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(354);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(387);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(272);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(372);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(296);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(349);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(311);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(390);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(263);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(350);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(384);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(396);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(374);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(319);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(325);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(351);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(353);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(355);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(364);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(365);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(299);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(290);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(321);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(323);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(270);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(397);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(352);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(382);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(394);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(399);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 217},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 217},
  [63] = {.lex_state = 217},
  [64] = {.lex_state = 217},
  [65] = {.lex_state = 217},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 217},
  [76] = {.lex_state = 217},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 217},
  [79] = {.lex_state = 217},
  [80] = {.lex_state = 217},
  [81] = {.lex_state = 217},
  [82] = {.lex_state = 217},
  [83] = {.lex_state = 217},
  [84] = {.lex_state = 217},
  [85] = {.lex_state = 217},
  [86] = {.lex_state = 217},
  [87] = {.lex_state = 217},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 217},
  [90] = {.lex_state = 217},
  [91] = {.lex_state = 217},
  [92] = {.lex_state = 217},
  [93] = {.lex_state = 217},
  [94] = {.lex_state = 217},
  [95] = {.lex_state = 217},
  [96] = {.lex_state = 217},
  [97] = {.lex_state = 217},
  [98] = {.lex_state = 217},
  [99] = {.lex_state = 217},
  [100] = {.lex_state = 217},
  [101] = {.lex_state = 217},
  [102] = {.lex_state = 217},
  [103] = {.lex_state = 217},
  [104] = {.lex_state = 217},
  [105] = {.lex_state = 217},
  [106] = {.lex_state = 217},
  [107] = {.lex_state = 217},
  [108] = {.lex_state = 217},
  [109] = {.lex_state = 217},
  [110] = {.lex_state = 217},
  [111] = {.lex_state = 217},
  [112] = {.lex_state = 217},
  [113] = {.lex_state = 217},
  [114] = {.lex_state = 217},
  [115] = {.lex_state = 217},
  [116] = {.lex_state = 217},
  [117] = {.lex_state = 217},
  [118] = {.lex_state = 217},
  [119] = {.lex_state = 217},
  [120] = {.lex_state = 217},
  [121] = {.lex_state = 217},
  [122] = {.lex_state = 217},
  [123] = {.lex_state = 217},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 217},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 217},
  [130] = {.lex_state = 217},
  [131] = {.lex_state = 217},
  [132] = {.lex_state = 217},
  [133] = {.lex_state = 217},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 217},
  [136] = {.lex_state = 217},
  [137] = {.lex_state = 217},
  [138] = {.lex_state = 217},
  [139] = {.lex_state = 217},
  [140] = {.lex_state = 217},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 217},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 217},
  [145] = {.lex_state = 217},
  [146] = {.lex_state = 217},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 217},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 217},
  [151] = {.lex_state = 217},
  [152] = {.lex_state = 217},
  [153] = {.lex_state = 217},
  [154] = {.lex_state = 217},
  [155] = {.lex_state = 217},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 15},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 17},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 17},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 217},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 217},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 9},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 217},
  [240] = {.lex_state = 217},
  [241] = {.lex_state = 217},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 217},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 217},
  [248] = {.lex_state = 217},
  [249] = {.lex_state = 217},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 217},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 217},
  [256] = {.lex_state = 12},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 217},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 217},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 217},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 217},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 217},
  [272] = {.lex_state = 217},
  [273] = {.lex_state = 217},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 217},
  [284] = {.lex_state = 217},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 217},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 217},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 217},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 217},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 217},
  [302] = {.lex_state = 217},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 8},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 217},
  [318] = {.lex_state = 10},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 217},
  [321] = {.lex_state = 10},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 10},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 10},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 10},
  [329] = {.lex_state = 8},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 10},
  [338] = {.lex_state = 10},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 10},
  [342] = {.lex_state = 217},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 10},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 217},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 8},
  [352] = {.lex_state = 217},
  [353] = {.lex_state = 10},
  [354] = {.lex_state = 10},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 10},
  [357] = {.lex_state = 10},
  [358] = {.lex_state = 10},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 10},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 10},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 217},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 8},
  [369] = {.lex_state = 8},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 217},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 217},
  [374] = {.lex_state = 10},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 10},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 10},
  [380] = {.lex_state = 10},
  [381] = {.lex_state = 217},
  [382] = {.lex_state = 10},
  [383] = {.lex_state = 10},
  [384] = {.lex_state = 8},
  [385] = {.lex_state = 217},
  [386] = {.lex_state = 217},
  [387] = {.lex_state = 8},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 8},
  [391] = {.lex_state = 10},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 8},
  [394] = {.lex_state = 10},
  [395] = {.lex_state = 217},
  [396] = {.lex_state = 217},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 217},
  [399] = {.lex_state = 217},
  [400] = {.lex_state = 217},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 217},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 8},
  [405] = {.lex_state = 217},
  [406] = {.lex_state = 217},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 10},
  [410] = {.lex_state = 10},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 217},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 8},
  [417] = {.lex_state = 8},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 8},
  [421] = {.lex_state = 217},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 10},
  [426] = {.lex_state = 217},
  [427] = {.lex_state = 217},
  [428] = {.lex_state = 217},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 217},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 10},
  [434] = {.lex_state = 217},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 10},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 217},
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
    [sym_source_file] = STATE(408),
    [sym__top_level] = STATE(187),
    [sym_import] = STATE(187),
    [sym_attribute] = STATE(431),
    [sym_extern] = STATE(441),
    [sym_func_header] = STATE(317),
    [sym_func_proto] = STATE(187),
    [sym_function_definition] = STATE(187),
    [sym_struct_definition] = STATE(187),
    [aux_sym_source_file_repeat1] = STATE(187),
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(273), 1,
      sym_destruct,
    STATE(361), 1,
      sym_array_type,
    STATE(366), 1,
      sym_type,
    STATE(434), 1,
      sym_pattern,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(60), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(138), 12,
      sym_array_access,
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
  [133] = 35,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(273), 1,
      sym_destruct,
    STATE(361), 1,
      sym_array_type,
    STATE(366), 1,
      sym_type,
    STATE(434), 1,
      sym_pattern,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(60), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(140), 12,
      sym_array_access,
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
  [266] = 35,
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
      anon_sym_set,
    ACTIONS(76), 1,
      anon_sym_return,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(88), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_foreach,
    ACTIONS(94), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      aux_sym_int_lit_token1,
    ACTIONS(100), 1,
      sym_float_lit,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(273), 1,
      sym_destruct,
    STATE(361), 1,
      sym_array_type,
    STATE(366), 1,
      sym_type,
    STATE(434), 1,
      sym_pattern,
    ACTIONS(82), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(60), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(150), 12,
      sym_array_access,
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
  [399] = 35,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(273), 1,
      sym_destruct,
    STATE(361), 1,
      sym_array_type,
    STATE(366), 1,
      sym_type,
    STATE(434), 1,
      sym_pattern,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(60), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(142), 12,
      sym_array_access,
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
  [532] = 35,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(273), 1,
      sym_destruct,
    STATE(361), 1,
      sym_array_type,
    STATE(366), 1,
      sym_type,
    STATE(434), 1,
      sym_pattern,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(60), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(130), 12,
      sym_array_access,
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
  [665] = 35,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(273), 1,
      sym_destruct,
    STATE(361), 1,
      sym_array_type,
    STATE(366), 1,
      sym_type,
    STATE(434), 1,
      sym_pattern,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(60), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(136), 12,
      sym_array_access,
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
  [798] = 35,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(273), 1,
      sym_destruct,
    STATE(361), 1,
      sym_array_type,
    STATE(366), 1,
      sym_type,
    STATE(434), 1,
      sym_pattern,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(60), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(144), 12,
      sym_array_access,
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
  [931] = 35,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_set,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(273), 1,
      sym_destruct,
    STATE(335), 1,
      sym_pattern,
    STATE(339), 1,
      aux_sym_destruct_repeat1,
    STATE(361), 1,
      sym_array_type,
    STATE(366), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(153), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1062] = 35,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_set,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(273), 1,
      sym_destruct,
    STATE(315), 1,
      aux_sym_destruct_repeat1,
    STATE(316), 1,
      sym_pattern,
    STATE(361), 1,
      sym_array_type,
    STATE(366), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(153), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1193] = 30,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(230), 1,
      sym_reference_type,
    STATE(237), 1,
      sym_type,
    STATE(361), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(105), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1309] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(150), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(141), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(151), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1409] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(141), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(151), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1509] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(340), 1,
      aux_sym_call_expr_repeat1,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(127), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1611] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(135), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1707] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(135), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1803] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(135), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1899] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(145), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1992] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(129), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2085] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(135), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2178] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(115), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2271] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(100), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2364] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(154), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2457] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(146), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2550] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(118), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2643] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(82), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2736] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(104), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2829] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(133), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2922] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(111), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3015] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(155), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3108] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(108), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3201] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(139), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3294] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(152), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3387] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(105), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3480] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(148), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3573] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(137), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3666] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(132), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3759] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(85), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3852] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(151), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3945] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(86), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [4038] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_foreach,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_set,
    ACTIONS(148), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(110), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(131), 17,
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
      sym_call_expr,
      sym_generic_function,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [4131] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_else,
    STATE(61), 1,
      sym_else_expr,
    STATE(44), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
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
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4188] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_else,
    STATE(53), 1,
      sym_else_expr,
    STATE(42), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
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
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4245] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      anon_sym_else,
    STATE(44), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
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
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4299] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 15,
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
    ACTIONS(185), 25,
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
  [4347] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 15,
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
    ACTIONS(189), 25,
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
  [4395] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 15,
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
    ACTIONS(193), 25,
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
  [4443] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 15,
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
    ACTIONS(197), 25,
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
  [4491] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 15,
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
    ACTIONS(201), 24,
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
  [4538] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 15,
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
    ACTIONS(205), 24,
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
  [4585] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 15,
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
    ACTIONS(185), 24,
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
  [4632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 15,
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
    ACTIONS(189), 24,
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
  [4679] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(207), 15,
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
    ACTIONS(209), 24,
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
  [4726] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 15,
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
    ACTIONS(213), 24,
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
  [4773] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 15,
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
    ACTIONS(217), 24,
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
  [4820] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 15,
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
    ACTIONS(221), 24,
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
  [4867] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 15,
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
    ACTIONS(225), 24,
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
  [4914] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 15,
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
    ACTIONS(229), 24,
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
  [4961] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 15,
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
    ACTIONS(193), 24,
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
  [5008] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(233), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(235), 12,
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
    ACTIONS(237), 12,
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
  [5059] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 15,
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
    ACTIONS(241), 24,
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
  [5106] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(191), 31,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5152] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(187), 31,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5198] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(183), 31,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5244] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(96), 1,
      sym_int_type,
    ACTIONS(245), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(247), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
    ACTIONS(243), 22,
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
  [5293] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_GT,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      aux_sym_int_lit_token1,
    ACTIONS(261), 1,
      sym_float_lit,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(323), 1,
      aux_sym_type_parameters_repeat1,
    STATE(325), 1,
      sym_type_parameter,
    ACTIONS(253), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(383), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(374), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(380), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5381] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      aux_sym_int_lit_token1,
    ACTIONS(261), 1,
      sym_float_lit,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_GT,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(337), 1,
      sym_type_parameter,
    STATE(338), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(253), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(383), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(374), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(380), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5469] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      aux_sym_int_lit_token1,
    ACTIONS(261), 1,
      sym_float_lit,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_GT,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    ACTIONS(253), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(383), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(374), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(380), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5551] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      aux_sym_int_lit_token1,
    ACTIONS(261), 1,
      sym_float_lit,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_GT,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    ACTIONS(253), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(383), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(374), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(380), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5633] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      aux_sym_int_lit_token1,
    ACTIONS(261), 1,
      sym_float_lit,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_GT,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    ACTIONS(253), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(383), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(374), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(380), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5715] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      aux_sym_int_lit_token1,
    ACTIONS(261), 1,
      sym_float_lit,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_GT,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    ACTIONS(253), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(383), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(374), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(380), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5797] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      aux_sym_int_lit_token1,
    ACTIONS(261), 1,
      sym_float_lit,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_GT,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    ACTIONS(253), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(383), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(374), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(380), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5879] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      aux_sym_int_lit_token1,
    ACTIONS(261), 1,
      sym_float_lit,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_GT,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    ACTIONS(253), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(383), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(374), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(380), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [5961] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(259), 1,
      aux_sym_int_lit_token1,
    ACTIONS(261), 1,
      sym_float_lit,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(379), 1,
      sym_type_parameter,
    ACTIONS(253), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(383), 2,
      sym__string_literal,
      sym__big_string_literal,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(374), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(380), 3,
      sym_mutability,
      sym_type,
      sym_literal,
  [6040] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_else,
    STATE(116), 1,
      sym_else_expr,
    STATE(76), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(174), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(172), 22,
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
  [6086] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_else,
    STATE(117), 1,
      sym_else_expr,
    STATE(78), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(168), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(166), 22,
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
  [6132] = 9,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_,
    ACTIONS(304), 1,
      sym_line_comment,
    STATE(102), 1,
      sym_type_parameters,
    ACTIONS(287), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(294), 4,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(235), 20,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6183] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 1,
      anon_sym_else,
    STATE(78), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(178), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(176), 22,
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
  [6226] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_LT,
    STATE(102), 1,
      sym_type_parameters,
    ACTIONS(235), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(231), 22,
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
  [6267] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(195), 23,
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
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6304] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(223), 22,
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
  [6340] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(322), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(312), 15,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
  [6386] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(326), 22,
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
  [6422] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(332), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(330), 22,
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
  [6458] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(344), 1,
      anon_sym_EQ,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(334), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [6516] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(352), 1,
      anon_sym_EQ,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(350), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [6574] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(354), 22,
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
  [6610] = 7,
    ACTIONS(302), 1,
      anon_sym_,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_LT,
    STATE(102), 1,
      sym_type_parameters,
    ACTIONS(287), 2,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(294), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      sym_identifier,
    ACTIONS(235), 19,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6654] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(358), 22,
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
  [6690] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(362), 22,
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
  [6726] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(203), 22,
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
  [6762] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(366), 22,
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
  [6798] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(227), 22,
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
  [6834] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(370), 22,
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
  [6870] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(374), 22,
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
  [6906] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(378), 22,
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
  [6942] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(382), 22,
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
  [6978] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(386), 22,
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
  [7014] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(390), 22,
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
  [7050] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(396), 1,
      anon_sym_EQ,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(394), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [7108] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(398), 22,
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
  [7144] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(402), 22,
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
  [7180] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(406), 22,
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
  [7216] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(322), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(312), 17,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_mod,
  [7258] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_EQ,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(410), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [7316] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(211), 22,
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
  [7352] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(414), 22,
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
  [7388] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(312), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7426] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(199), 22,
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
  [7462] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(418), 22,
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
  [7498] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(322), 1,
      anon_sym_EQ,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(312), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_or,
  [7552] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(422), 22,
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
  [7588] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(426), 22,
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
  [7624] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(430), 22,
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
  [7660] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(322), 1,
      anon_sym_EQ,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(312), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
  [7712] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(207), 22,
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
  [7748] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(241), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(239), 22,
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
  [7784] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(322), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(312), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
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
  [7832] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(215), 22,
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
  [7868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(434), 22,
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
  [7904] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(438), 22,
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
  [7940] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(219), 22,
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
  [7976] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    ACTIONS(447), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_type_parameters,
    ACTIONS(235), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(231), 17,
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
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [8020] = 7,
    ACTIONS(302), 1,
      anon_sym_,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_LT,
    STATE(102), 1,
      sym_type_parameters,
    ACTIONS(294), 2,
      anon_sym_AMP,
      sym_identifier,
    ACTIONS(287), 3,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_EQ,
    ACTIONS(235), 18,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [8062] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(343), 1,
      sym_pattern,
    STATE(344), 1,
      aux_sym_destruct_repeat1,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [8128] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(450), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(343), 1,
      sym_pattern,
    STATE(344), 1,
      aux_sym_destruct_repeat1,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [8194] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8250] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(194), 1,
      sym_type_parameters,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(231), 1,
      sym_type,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(466), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [8307] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8360] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8413] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8466] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_block,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8519] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8572] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(343), 1,
      sym_pattern,
    STATE(344), 1,
      aux_sym_destruct_repeat1,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [8635] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(482), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8686] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8739] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8792] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8845] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_block,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8898] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8951] = 16,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(262), 1,
      sym_type,
    STATE(272), 1,
      sym_destruct,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(490), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [9008] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9061] = 16,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      anon_sym_AMP,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(504), 1,
      anon_sym_,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_type,
    STATE(284), 1,
      sym_destruct,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(502), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [9118] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9171] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9224] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9277] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(506), 1,
      anon_sym_GT,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(196), 1,
      sym__type_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(209), 1,
      sym_scoped_type_identifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(318), 1,
      aux_sym_generic_parameters_repeat1,
    STATE(321), 1,
      sym_generic_parameter,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(391), 2,
      sym_region_parameter,
      sym_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [9337] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9387] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(260), 1,
      sym_type,
    STATE(286), 1,
      sym_destruct,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(514), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [9441] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9491] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(516), 1,
      anon_sym_EQ,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9541] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9591] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9641] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9691] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_or,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(336), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(324), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(338), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9741] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(262), 1,
      sym_type,
    STATE(272), 1,
      sym_destruct,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(526), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [9795] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(327), 1,
      sym_pattern,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [9852] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(327), 1,
      sym_pattern,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [9909] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(327), 1,
      sym_pattern,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [9966] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(327), 1,
      sym_pattern,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [10023] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(327), 1,
      sym_pattern,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [10080] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(327), 1,
      sym_pattern,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [10137] = 16,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      anon_sym_in,
    ACTIONS(492), 1,
      anon_sym_AMP,
    ACTIONS(540), 1,
      anon_sym_DOT,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(262), 1,
      sym_type,
    STATE(272), 1,
      sym_destruct,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10191] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(546), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(548), 12,
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
  [10219] = 3,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(552), 12,
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
  [10247] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_GT,
    STATE(196), 1,
      sym__type_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(209), 1,
      sym_scoped_type_identifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(382), 1,
      sym_generic_parameter,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(391), 2,
      sym_region_parameter,
      sym_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10301] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_set,
    ACTIONS(460), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(327), 1,
      sym_pattern,
    STATE(366), 1,
      sym_type,
    STATE(143), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [10355] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(556), 1,
      anon_sym_GT,
    STATE(196), 1,
      sym__type_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(209), 1,
      sym_scoped_type_identifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(382), 1,
      sym_generic_parameter,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(391), 2,
      sym_region_parameter,
      sym_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10409] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(558), 1,
      anon_sym_in,
    STATE(194), 1,
      sym_type_parameters,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(231), 1,
      sym_type,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10463] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(560), 1,
      anon_sym_DOT,
    ACTIONS(562), 1,
      anon_sym_LBRACK,
    ACTIONS(564), 1,
      anon_sym_set,
    ACTIONS(566), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(366), 1,
      sym_type,
    STATE(424), 1,
      sym_pattern,
    STATE(171), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [10517] = 16,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      anon_sym_AMP,
    ACTIONS(502), 1,
      anon_sym_in,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(570), 1,
      anon_sym_,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_type,
    STATE(284), 1,
      sym_destruct,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10571] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(572), 1,
      anon_sym_GT,
    STATE(196), 1,
      sym__type_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(209), 1,
      sym_scoped_type_identifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(382), 1,
      sym_generic_parameter,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(391), 2,
      sym_region_parameter,
      sym_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10625] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(560), 1,
      anon_sym_DOT,
    ACTIONS(562), 1,
      anon_sym_LBRACK,
    ACTIONS(564), 1,
      anon_sym_set,
    ACTIONS(566), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(273), 1,
      sym_destruct,
    STATE(366), 1,
      sym_type,
    STATE(440), 1,
      sym_pattern,
    STATE(171), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
  [10679] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(381), 1,
      sym_type,
    ACTIONS(574), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10728] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(371), 1,
      sym_type,
    ACTIONS(576), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10777] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(562), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      anon_sym_in,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(260), 1,
      sym_type,
    STATE(286), 1,
      sym_destruct,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10828] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(190), 1,
      sym_type_parameters,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(232), 1,
      sym_type,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10879] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(196), 1,
      sym__type_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(209), 1,
      sym_scoped_type_identifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(382), 1,
      sym_generic_parameter,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(391), 2,
      sym_region_parameter,
      sym_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10930] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(490), 1,
      anon_sym_in,
    ACTIONS(562), 1,
      anon_sym_LBRACK,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(262), 1,
      sym_type,
    STATE(272), 1,
      sym_destruct,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [10981] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(373), 1,
      sym_type,
    ACTIONS(580), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11030] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(399), 1,
      sym_type,
    ACTIONS(582), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11079] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(405), 1,
      sym_type,
    ACTIONS(584), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11128] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(194), 1,
      sym_type_parameters,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(231), 1,
      sym_type,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11179] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(395), 1,
      sym_type,
    ACTIONS(586), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11228] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(365), 1,
      sym_type,
    ACTIONS(588), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11277] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(402), 1,
      sym_type,
    ACTIONS(590), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11326] = 13,
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
    ACTIONS(592), 1,
      ts_builtin_sym_end,
    STATE(317), 1,
      sym_func_header,
    STATE(431), 1,
      sym_attribute,
    STATE(441), 1,
      sym_extern,
    ACTIONS(13), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(189), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [11372] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    ACTIONS(594), 1,
      anon_sym_BANG,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(443), 1,
      sym_type,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11420] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    ACTIONS(598), 1,
      anon_sym_import,
    ACTIONS(601), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      anon_sym_extern,
    ACTIONS(610), 1,
      anon_sym_export,
    ACTIONS(613), 1,
      anon_sym_func,
    ACTIONS(616), 1,
      anon_sym_struct,
    STATE(317), 1,
      sym_func_header,
    STATE(431), 1,
      sym_attribute,
    STATE(441), 1,
      sym_extern,
    ACTIONS(607), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(189), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [11466] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(236), 1,
      sym_type,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11511] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(437), 1,
      sym_type,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11556] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(346), 1,
      sym_type,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11601] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(197), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(237), 1,
      sym_type,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11646] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(233), 1,
      sym_type,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11691] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(199), 1,
      sym_region_specifier,
    STATE(220), 1,
      sym_generic_type,
    STATE(237), 1,
      sym_type,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(209), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(230), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11736] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LT,
    ACTIONS(625), 1,
      anon_sym_Ref,
    STATE(219), 1,
      sym_generic_parameters,
    STATE(347), 1,
      sym_rune,
    ACTIONS(621), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(623), 9,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [11767] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_AMP,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(223), 1,
      sym_generic_type,
    STATE(212), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(235), 2,
      sym_reference_type,
      sym_array_type,
    STATE(238), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(252), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11806] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(631), 1,
      anon_sym_Ref,
    ACTIONS(633), 1,
      anon_sym_SQUOTE,
    ACTIONS(629), 12,
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
  [11833] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(223), 1,
      sym_generic_type,
    STATE(208), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(212), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(216), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(235), 2,
      sym_reference_type,
      sym_array_type,
    STATE(415), 2,
      sym_scoped_identifier,
      sym__path,
  [11872] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    ACTIONS(629), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [11895] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(635), 13,
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
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [11914] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(639), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(637), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [11937] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(643), 13,
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
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [11956] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(649), 1,
      sym_identifier,
    ACTIONS(647), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(645), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [11979] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 13,
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
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [11998] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 13,
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
      anon_sym_in,
  [12017] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(653), 13,
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
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12036] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(210), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(655), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12056] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LT,
    STATE(219), 1,
      sym_generic_parameters,
    ACTIONS(621), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12078] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    STATE(210), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(657), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12100] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    STATE(211), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(662), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12122] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LT,
    STATE(219), 1,
      sym_generic_parameters,
    ACTIONS(667), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12144] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(629), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12164] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_DOT,
    ACTIONS(629), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12184] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_DOT,
    ACTIONS(629), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12204] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(211), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(655), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12224] = 6,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(673), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(675), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(677), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(218), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12249] = 6,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(681), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(684), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(687), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(218), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12274] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12291] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      anon_sym_DOT,
    ACTIONS(621), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12310] = 6,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(696), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(673), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(675), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(677), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(217), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12335] = 6,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(698), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(673), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(675), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(677), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(226), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12360] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      anon_sym_DOT,
    ACTIONS(667), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12379] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12396] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(354), 1,
      sym_int_type,
    ACTIONS(243), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(702), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
  [12417] = 6,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(673), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(675), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(677), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LF,
    STATE(218), 4,
      sym__interpolated_raw_string_content,
      sym_interpolated_raw_string_text,
      sym_interpolation,
      aux_sym__big_string_literal_repeat1,
  [12442] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12459] = 6,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_LT,
    ACTIONS(708), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_RBRACK,
      sym_identifier,
  [12483] = 5,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(713), 1,
      anon_sym_LBRACK,
    ACTIONS(711), 7,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [12505] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(621), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12521] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(716), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12537] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(718), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12553] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(720), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12569] = 6,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_LT,
    ACTIONS(669), 1,
      anon_sym_,
    ACTIONS(722), 1,
      anon_sym_DOT,
    ACTIONS(728), 2,
      anon_sym_AMP,
      sym_identifier,
    ACTIONS(725), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [12593] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(667), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12609] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(730), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12625] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(732), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12641] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_LBRACK,
    STATE(210), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(655), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12660] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      anon_sym_export,
    ACTIONS(736), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12677] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(742), 1,
      anon_sym_export,
    ACTIONS(740), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12694] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(746), 1,
      anon_sym_export,
    ACTIONS(744), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12711] = 5,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(752), 1,
      anon_sym_DQUOTE,
    ACTIONS(748), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(750), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(250), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [12732] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      anon_sym_export,
    ACTIONS(754), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12749] = 5,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(758), 1,
      anon_sym_DQUOTE,
    ACTIONS(748), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(750), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(251), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [12770] = 3,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(711), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [12787] = 5,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(766), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(763), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(246), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [12808] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(770), 1,
      anon_sym_export,
    ACTIONS(768), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12825] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(774), 1,
      anon_sym_export,
    ACTIONS(772), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12842] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      anon_sym_export,
    ACTIONS(776), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12859] = 5,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      anon_sym_DQUOTE,
    ACTIONS(748), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(750), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(246), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [12880] = 5,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(748), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_BSLASH,
    ACTIONS(750), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    STATE(246), 4,
      sym__interpolated_string_content,
      sym_interpolated_string_text,
      sym_interpolation,
      aux_sym__string_literal_repeat1,
  [12901] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      anon_sym_LBRACK,
    STATE(211), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(655), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12920] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(788), 1,
      anon_sym_export,
    ACTIONS(786), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12937] = 6,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_LT,
    ACTIONS(708), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_in,
      sym_identifier,
  [12959] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 1,
      anon_sym_LBRACK,
    STATE(272), 1,
      sym_destruct,
    ACTIONS(526), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [12976] = 3,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(794), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(792), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE_LF,
      anon_sym_LBRACE_BSLASH,
  [12991] = 5,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(713), 1,
      anon_sym_LBRACK,
    ACTIONS(711), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_in,
      sym_identifier,
  [13010] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(796), 2,
      anon_sym_LT,
      anon_sym_LBRACK,
    ACTIONS(706), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13025] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(799), 1,
      anon_sym_DOT,
    ACTIONS(801), 1,
      anon_sym_STAR,
    ACTIONS(803), 1,
      sym_identifier,
    STATE(423), 1,
      sym_import_path,
    STATE(439), 1,
      sym_import_wildcard,
    STATE(372), 2,
      sym_scoped_identifier,
      sym__path,
  [13048] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 1,
      anon_sym_LBRACK,
    STATE(290), 1,
      sym_destruct,
    ACTIONS(805), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13065] = 3,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(809), 2,
      sym_escape_sequence,
      sym__interpolated_verbatim_string_text_fragment,
    ACTIONS(807), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE_LF,
      anon_sym_LBRACE_BSLASH,
  [13080] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 1,
      anon_sym_LBRACK,
    STATE(286), 1,
      sym_destruct,
    ACTIONS(514), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13097] = 6,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_LT,
    ACTIONS(669), 1,
      anon_sym_,
    ACTIONS(722), 1,
      anon_sym_DOT,
    ACTIONS(725), 2,
      anon_sym_LBRACK,
      anon_sym_in,
    ACTIONS(728), 2,
      anon_sym_AMP,
      sym_identifier,
  [13118] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_ro,
    ACTIONS(817), 1,
      sym_identifier,
    ACTIONS(813), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(811), 3,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [13137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13149] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LT,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(301), 1,
      sym_generic_parameters,
    STATE(444), 1,
      sym_mutability,
    ACTIONS(823), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13169] = 3,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(711), 5,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_in,
      sym_identifier,
  [13183] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(825), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13195] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13207] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(829), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13219] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LT,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    STATE(302), 1,
      sym_generic_parameters,
    STATE(428), 1,
      sym_mutability,
    ACTIONS(823), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13239] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13250] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(833), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13261] = 3,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(794), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    ACTIONS(792), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_BSLASH,
  [13274] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    ACTIONS(837), 1,
      sym_identifier,
    STATE(188), 1,
      sym__field_identifier,
    STATE(282), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13291] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    ACTIONS(837), 1,
      sym_identifier,
    STATE(188), 1,
      sym__field_identifier,
    STATE(285), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13308] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym__field_identifier,
    STATE(281), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13325] = 3,
    ACTIONS(304), 1,
      sym_line_comment,
    ACTIONS(843), 2,
      sym_escape_sequence,
      sym__interpolated_string_text_fragment,
    ACTIONS(841), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_BSLASH,
  [13338] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym__field_identifier,
    STATE(275), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13355] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_BANG,
    STATE(427), 1,
      sym_attribute_name,
    ACTIONS(847), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [13370] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym__field_identifier,
    STATE(282), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13387] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      sym_identifier,
    STATE(188), 1,
      sym__field_identifier,
    STATE(282), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13404] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(856), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13415] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(526), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13426] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym__field_identifier,
    STATE(282), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13443] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(805), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13454] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      sym_identifier,
    STATE(311), 1,
      aux_sym_parameters_repeat1,
    STATE(326), 1,
      sym_parameter,
  [13473] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(866), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13484] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13495] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(868), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13506] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym__field_identifier,
    STATE(282), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13523] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym__field_identifier,
    STATE(291), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13540] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_in,
  [13551] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(418), 1,
      sym_string_literal,
    STATE(99), 2,
      sym__string_literal,
      sym__big_string_literal,
  [13568] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13578] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13588] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LT,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_parameters,
    STATE(376), 1,
      sym_generic_parameters,
  [13604] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LT,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_parameters,
    STATE(378), 1,
      sym_generic_parameters,
  [13620] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_destruct_repeat1,
    ACTIONS(874), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [13634] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13644] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    STATE(426), 1,
      sym_mutability,
    ACTIONS(823), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13658] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    STATE(444), 1,
      sym_mutability,
    ACTIONS(823), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13672] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13682] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(412), 1,
      sym_attribute_name,
    ACTIONS(847), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [13694] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 1,
      aux_sym_int_lit_token1,
    ACTIONS(883), 1,
      sym_identifier,
    STATE(413), 2,
      sym_int_lit,
      sym__type_identifier,
  [13708] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(885), 1,
      sym_identifier,
    STATE(141), 2,
      sym_scoped_identifier,
      sym__path,
  [13722] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13732] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LT,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_parameters,
    STATE(388), 1,
      sym_generic_parameters,
  [13748] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 1,
      anon_sym_DOT,
    ACTIONS(889), 1,
      sym_identifier,
    STATE(163), 2,
      sym_scoped_identifier,
      sym__path,
  [13762] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LT,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_parameters,
    STATE(389), 1,
      sym_generic_parameters,
  [13778] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_parameters_repeat1,
  [13791] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(895), 1,
      anon_sym_GT,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_generic_parameters_repeat1,
  [13804] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      anon_sym_GT,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_generic_parameters_repeat1,
  [13817] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_destruct_repeat1,
  [13830] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_destruct_repeat1,
  [13843] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_destruct_repeat1,
  [13856] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      sym_block,
  [13869] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 1,
      anon_sym_GT,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_generic_parameters_repeat1,
  [13882] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_GT,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_type_parameters_repeat1,
  [13895] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(912), 1,
      anon_sym_if,
    STATE(122), 1,
      sym_block,
  [13908] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 1,
      anon_sym_GT,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_generic_parameters_repeat1,
  [13921] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_call_expr_repeat1,
  [13934] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_GT,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_type_parameters_repeat1,
  [13947] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_call_expr_repeat1,
  [13960] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_GT,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_type_parameters_repeat1,
  [13973] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_parameters_repeat1,
  [13986] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(874), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13995] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(921), 1,
      anon_sym_GT,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_type_parameters_repeat1,
  [14008] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_parameter,
  [14021] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_destruct_repeat1,
  [14034] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      anon_sym_GT,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_type_parameters_repeat1,
  [14047] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_parameter,
  [14060] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      aux_sym_destruct_repeat1,
  [14073] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_parameters_repeat1,
  [14086] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_destruct_repeat1,
  [14099] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_parameters_repeat1,
  [14112] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_type_parameters_repeat1,
  [14125] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_type_parameters_repeat1,
  [14138] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_destruct_repeat1,
  [14151] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_call_expr_repeat1,
  [14164] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(945), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [14173] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(947), 1,
      anon_sym_if,
    STATE(56), 1,
      sym_block,
  [14186] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      anon_sym_RBRACK,
    STATE(333), 1,
      aux_sym_destruct_repeat1,
  [14199] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      aux_sym_destruct_repeat1,
  [14212] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_parameter,
  [14225] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14233] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(955), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14241] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    ACTIONS(959), 1,
      anon_sym_func,
  [14251] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [14261] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [14269] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [14277] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [14287] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(370), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14295] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14303] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(963), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [14311] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14319] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14327] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14335] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      sym_identifier,
    STATE(271), 1,
      sym__type_identifier,
  [14345] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(967), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14353] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
  [14363] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(864), 1,
      sym_identifier,
    STATE(397), 1,
      sym_parameter,
  [14373] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14381] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [14389] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(969), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14397] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 1,
      anon_sym_LBRACK,
    STATE(284), 1,
      sym_destruct,
  [14407] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      sym_identifier,
    STATE(224), 1,
      sym__type_identifier,
  [14417] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(971), 1,
      sym_identifier,
    STATE(227), 1,
      sym__type_identifier,
  [14427] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 1,
      sym_identifier,
    STATE(103), 1,
      sym__field_identifier,
  [14437] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(975), 1,
      sym_identifier,
    STATE(258), 1,
      sym__type_identifier,
  [14447] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(977), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14455] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(979), 1,
      anon_sym_SEMI,
    ACTIONS(981), 1,
      anon_sym_DOT,
  [14465] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(983), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14473] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14481] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(985), 1,
      sym_identifier,
    STATE(227), 1,
      sym__type_identifier,
  [14491] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_parameters,
  [14501] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14509] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_parameters,
  [14519] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(921), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14527] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(987), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14535] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(989), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14543] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(895), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14551] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14559] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(975), 1,
      sym_identifier,
    STATE(227), 1,
      sym__type_identifier,
  [14569] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
  [14579] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_block,
  [14589] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(991), 1,
      sym_identifier,
    STATE(224), 1,
      sym__type_identifier,
  [14599] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_parameters,
  [14609] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(872), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_parameters,
  [14619] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(993), 1,
      sym_identifier,
    STATE(227), 1,
      sym__type_identifier,
  [14629] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(995), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14637] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_POUND,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
  [14647] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(999), 1,
      anon_sym_STAR,
    ACTIONS(1001), 1,
      sym_identifier,
  [14657] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [14665] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1003), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14673] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_block,
  [14683] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(938), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14691] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
  [14701] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1005), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14709] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [14719] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      sym_identifier,
    STATE(266), 1,
      sym__type_identifier,
  [14729] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1007), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14737] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1009), 1,
      sym_identifier,
    STATE(258), 1,
      sym__type_identifier,
  [14747] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1009), 1,
      sym_identifier,
    STATE(227), 1,
      sym__type_identifier,
  [14757] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1011), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [14765] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
  [14775] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_POUND,
  [14782] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1013), 1,
      ts_builtin_sym_end,
  [14789] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1015), 1,
      anon_sym_EQ_GT,
  [14796] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1017), 1,
      anon_sym_EQ_GT,
  [14803] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
  [14810] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1019), 1,
      anon_sym_struct,
  [14817] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1021), 1,
      anon_sym_RBRACK,
  [14824] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1023), 1,
      anon_sym_func,
  [14831] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1025), 1,
      anon_sym_DOT,
  [14838] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1027), 1,
      sym_identifier,
  [14845] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1029), 1,
      sym_identifier,
  [14852] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
  [14859] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
  [14866] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      sym_identifier,
  [14873] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      anon_sym_struct,
  [14880] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(947), 1,
      anon_sym_if,
  [14887] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      anon_sym_SEMI,
  [14894] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1039), 1,
      anon_sym_in,
  [14901] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1041), 1,
      anon_sym_EQ_GT,
  [14908] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1043), 1,
      anon_sym_LBRACE,
  [14915] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1045), 1,
      anon_sym_struct,
  [14922] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
  [14929] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1047), 1,
      anon_sym_EQ_GT,
  [14936] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1049), 1,
      anon_sym_EQ_GT,
  [14943] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1051), 1,
      anon_sym_struct,
  [14950] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1053), 1,
      anon_sym_EQ_GT,
  [14957] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1055), 1,
      anon_sym_EQ_GT,
  [14964] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1057), 1,
      anon_sym_EQ,
  [14971] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(912), 1,
      anon_sym_if,
  [14978] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1059), 1,
      anon_sym_SEMI,
  [14985] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1061), 1,
      anon_sym_SEMI,
  [14992] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1063), 1,
      anon_sym_EQ_GT,
  [14999] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(979), 1,
      anon_sym_SEMI,
  [15006] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1065), 1,
      anon_sym_in,
  [15013] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1067), 1,
      anon_sym_func,
  [15020] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1069), 1,
      anon_sym_SEMI,
  [15027] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1071), 1,
      anon_sym_SEMI,
  [15034] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 133,
  [SMALL_STATE(4)] = 266,
  [SMALL_STATE(5)] = 399,
  [SMALL_STATE(6)] = 532,
  [SMALL_STATE(7)] = 665,
  [SMALL_STATE(8)] = 798,
  [SMALL_STATE(9)] = 931,
  [SMALL_STATE(10)] = 1062,
  [SMALL_STATE(11)] = 1193,
  [SMALL_STATE(12)] = 1309,
  [SMALL_STATE(13)] = 1409,
  [SMALL_STATE(14)] = 1509,
  [SMALL_STATE(15)] = 1611,
  [SMALL_STATE(16)] = 1707,
  [SMALL_STATE(17)] = 1803,
  [SMALL_STATE(18)] = 1899,
  [SMALL_STATE(19)] = 1992,
  [SMALL_STATE(20)] = 2085,
  [SMALL_STATE(21)] = 2178,
  [SMALL_STATE(22)] = 2271,
  [SMALL_STATE(23)] = 2364,
  [SMALL_STATE(24)] = 2457,
  [SMALL_STATE(25)] = 2550,
  [SMALL_STATE(26)] = 2643,
  [SMALL_STATE(27)] = 2736,
  [SMALL_STATE(28)] = 2829,
  [SMALL_STATE(29)] = 2922,
  [SMALL_STATE(30)] = 3015,
  [SMALL_STATE(31)] = 3108,
  [SMALL_STATE(32)] = 3201,
  [SMALL_STATE(33)] = 3294,
  [SMALL_STATE(34)] = 3387,
  [SMALL_STATE(35)] = 3480,
  [SMALL_STATE(36)] = 3573,
  [SMALL_STATE(37)] = 3666,
  [SMALL_STATE(38)] = 3759,
  [SMALL_STATE(39)] = 3852,
  [SMALL_STATE(40)] = 3945,
  [SMALL_STATE(41)] = 4038,
  [SMALL_STATE(42)] = 4131,
  [SMALL_STATE(43)] = 4188,
  [SMALL_STATE(44)] = 4245,
  [SMALL_STATE(45)] = 4299,
  [SMALL_STATE(46)] = 4347,
  [SMALL_STATE(47)] = 4395,
  [SMALL_STATE(48)] = 4443,
  [SMALL_STATE(49)] = 4491,
  [SMALL_STATE(50)] = 4538,
  [SMALL_STATE(51)] = 4585,
  [SMALL_STATE(52)] = 4632,
  [SMALL_STATE(53)] = 4679,
  [SMALL_STATE(54)] = 4726,
  [SMALL_STATE(55)] = 4773,
  [SMALL_STATE(56)] = 4820,
  [SMALL_STATE(57)] = 4867,
  [SMALL_STATE(58)] = 4914,
  [SMALL_STATE(59)] = 4961,
  [SMALL_STATE(60)] = 5008,
  [SMALL_STATE(61)] = 5059,
  [SMALL_STATE(62)] = 5106,
  [SMALL_STATE(63)] = 5152,
  [SMALL_STATE(64)] = 5198,
  [SMALL_STATE(65)] = 5244,
  [SMALL_STATE(66)] = 5293,
  [SMALL_STATE(67)] = 5381,
  [SMALL_STATE(68)] = 5469,
  [SMALL_STATE(69)] = 5551,
  [SMALL_STATE(70)] = 5633,
  [SMALL_STATE(71)] = 5715,
  [SMALL_STATE(72)] = 5797,
  [SMALL_STATE(73)] = 5879,
  [SMALL_STATE(74)] = 5961,
  [SMALL_STATE(75)] = 6040,
  [SMALL_STATE(76)] = 6086,
  [SMALL_STATE(77)] = 6132,
  [SMALL_STATE(78)] = 6183,
  [SMALL_STATE(79)] = 6226,
  [SMALL_STATE(80)] = 6267,
  [SMALL_STATE(81)] = 6304,
  [SMALL_STATE(82)] = 6340,
  [SMALL_STATE(83)] = 6386,
  [SMALL_STATE(84)] = 6422,
  [SMALL_STATE(85)] = 6458,
  [SMALL_STATE(86)] = 6516,
  [SMALL_STATE(87)] = 6574,
  [SMALL_STATE(88)] = 6610,
  [SMALL_STATE(89)] = 6654,
  [SMALL_STATE(90)] = 6690,
  [SMALL_STATE(91)] = 6726,
  [SMALL_STATE(92)] = 6762,
  [SMALL_STATE(93)] = 6798,
  [SMALL_STATE(94)] = 6834,
  [SMALL_STATE(95)] = 6870,
  [SMALL_STATE(96)] = 6906,
  [SMALL_STATE(97)] = 6942,
  [SMALL_STATE(98)] = 6978,
  [SMALL_STATE(99)] = 7014,
  [SMALL_STATE(100)] = 7050,
  [SMALL_STATE(101)] = 7108,
  [SMALL_STATE(102)] = 7144,
  [SMALL_STATE(103)] = 7180,
  [SMALL_STATE(104)] = 7216,
  [SMALL_STATE(105)] = 7258,
  [SMALL_STATE(106)] = 7316,
  [SMALL_STATE(107)] = 7352,
  [SMALL_STATE(108)] = 7388,
  [SMALL_STATE(109)] = 7426,
  [SMALL_STATE(110)] = 7462,
  [SMALL_STATE(111)] = 7498,
  [SMALL_STATE(112)] = 7552,
  [SMALL_STATE(113)] = 7588,
  [SMALL_STATE(114)] = 7624,
  [SMALL_STATE(115)] = 7660,
  [SMALL_STATE(116)] = 7712,
  [SMALL_STATE(117)] = 7748,
  [SMALL_STATE(118)] = 7784,
  [SMALL_STATE(119)] = 7832,
  [SMALL_STATE(120)] = 7868,
  [SMALL_STATE(121)] = 7904,
  [SMALL_STATE(122)] = 7940,
  [SMALL_STATE(123)] = 7976,
  [SMALL_STATE(124)] = 8020,
  [SMALL_STATE(125)] = 8062,
  [SMALL_STATE(126)] = 8128,
  [SMALL_STATE(127)] = 8194,
  [SMALL_STATE(128)] = 8250,
  [SMALL_STATE(129)] = 8307,
  [SMALL_STATE(130)] = 8360,
  [SMALL_STATE(131)] = 8413,
  [SMALL_STATE(132)] = 8466,
  [SMALL_STATE(133)] = 8519,
  [SMALL_STATE(134)] = 8572,
  [SMALL_STATE(135)] = 8635,
  [SMALL_STATE(136)] = 8686,
  [SMALL_STATE(137)] = 8739,
  [SMALL_STATE(138)] = 8792,
  [SMALL_STATE(139)] = 8845,
  [SMALL_STATE(140)] = 8898,
  [SMALL_STATE(141)] = 8951,
  [SMALL_STATE(142)] = 9008,
  [SMALL_STATE(143)] = 9061,
  [SMALL_STATE(144)] = 9118,
  [SMALL_STATE(145)] = 9171,
  [SMALL_STATE(146)] = 9224,
  [SMALL_STATE(147)] = 9277,
  [SMALL_STATE(148)] = 9337,
  [SMALL_STATE(149)] = 9387,
  [SMALL_STATE(150)] = 9441,
  [SMALL_STATE(151)] = 9491,
  [SMALL_STATE(152)] = 9541,
  [SMALL_STATE(153)] = 9591,
  [SMALL_STATE(154)] = 9641,
  [SMALL_STATE(155)] = 9691,
  [SMALL_STATE(156)] = 9741,
  [SMALL_STATE(157)] = 9795,
  [SMALL_STATE(158)] = 9852,
  [SMALL_STATE(159)] = 9909,
  [SMALL_STATE(160)] = 9966,
  [SMALL_STATE(161)] = 10023,
  [SMALL_STATE(162)] = 10080,
  [SMALL_STATE(163)] = 10137,
  [SMALL_STATE(164)] = 10191,
  [SMALL_STATE(165)] = 10219,
  [SMALL_STATE(166)] = 10247,
  [SMALL_STATE(167)] = 10301,
  [SMALL_STATE(168)] = 10355,
  [SMALL_STATE(169)] = 10409,
  [SMALL_STATE(170)] = 10463,
  [SMALL_STATE(171)] = 10517,
  [SMALL_STATE(172)] = 10571,
  [SMALL_STATE(173)] = 10625,
  [SMALL_STATE(174)] = 10679,
  [SMALL_STATE(175)] = 10728,
  [SMALL_STATE(176)] = 10777,
  [SMALL_STATE(177)] = 10828,
  [SMALL_STATE(178)] = 10879,
  [SMALL_STATE(179)] = 10930,
  [SMALL_STATE(180)] = 10981,
  [SMALL_STATE(181)] = 11030,
  [SMALL_STATE(182)] = 11079,
  [SMALL_STATE(183)] = 11128,
  [SMALL_STATE(184)] = 11179,
  [SMALL_STATE(185)] = 11228,
  [SMALL_STATE(186)] = 11277,
  [SMALL_STATE(187)] = 11326,
  [SMALL_STATE(188)] = 11372,
  [SMALL_STATE(189)] = 11420,
  [SMALL_STATE(190)] = 11466,
  [SMALL_STATE(191)] = 11511,
  [SMALL_STATE(192)] = 11556,
  [SMALL_STATE(193)] = 11601,
  [SMALL_STATE(194)] = 11646,
  [SMALL_STATE(195)] = 11691,
  [SMALL_STATE(196)] = 11736,
  [SMALL_STATE(197)] = 11767,
  [SMALL_STATE(198)] = 11806,
  [SMALL_STATE(199)] = 11833,
  [SMALL_STATE(200)] = 11872,
  [SMALL_STATE(201)] = 11895,
  [SMALL_STATE(202)] = 11914,
  [SMALL_STATE(203)] = 11937,
  [SMALL_STATE(204)] = 11956,
  [SMALL_STATE(205)] = 11979,
  [SMALL_STATE(206)] = 11998,
  [SMALL_STATE(207)] = 12017,
  [SMALL_STATE(208)] = 12036,
  [SMALL_STATE(209)] = 12056,
  [SMALL_STATE(210)] = 12078,
  [SMALL_STATE(211)] = 12100,
  [SMALL_STATE(212)] = 12122,
  [SMALL_STATE(213)] = 12144,
  [SMALL_STATE(214)] = 12164,
  [SMALL_STATE(215)] = 12184,
  [SMALL_STATE(216)] = 12204,
  [SMALL_STATE(217)] = 12224,
  [SMALL_STATE(218)] = 12249,
  [SMALL_STATE(219)] = 12274,
  [SMALL_STATE(220)] = 12291,
  [SMALL_STATE(221)] = 12310,
  [SMALL_STATE(222)] = 12335,
  [SMALL_STATE(223)] = 12360,
  [SMALL_STATE(224)] = 12379,
  [SMALL_STATE(225)] = 12396,
  [SMALL_STATE(226)] = 12417,
  [SMALL_STATE(227)] = 12442,
  [SMALL_STATE(228)] = 12459,
  [SMALL_STATE(229)] = 12483,
  [SMALL_STATE(230)] = 12505,
  [SMALL_STATE(231)] = 12521,
  [SMALL_STATE(232)] = 12537,
  [SMALL_STATE(233)] = 12553,
  [SMALL_STATE(234)] = 12569,
  [SMALL_STATE(235)] = 12593,
  [SMALL_STATE(236)] = 12609,
  [SMALL_STATE(237)] = 12625,
  [SMALL_STATE(238)] = 12641,
  [SMALL_STATE(239)] = 12660,
  [SMALL_STATE(240)] = 12677,
  [SMALL_STATE(241)] = 12694,
  [SMALL_STATE(242)] = 12711,
  [SMALL_STATE(243)] = 12732,
  [SMALL_STATE(244)] = 12749,
  [SMALL_STATE(245)] = 12770,
  [SMALL_STATE(246)] = 12787,
  [SMALL_STATE(247)] = 12808,
  [SMALL_STATE(248)] = 12825,
  [SMALL_STATE(249)] = 12842,
  [SMALL_STATE(250)] = 12859,
  [SMALL_STATE(251)] = 12880,
  [SMALL_STATE(252)] = 12901,
  [SMALL_STATE(253)] = 12920,
  [SMALL_STATE(254)] = 12937,
  [SMALL_STATE(255)] = 12959,
  [SMALL_STATE(256)] = 12976,
  [SMALL_STATE(257)] = 12991,
  [SMALL_STATE(258)] = 13010,
  [SMALL_STATE(259)] = 13025,
  [SMALL_STATE(260)] = 13048,
  [SMALL_STATE(261)] = 13065,
  [SMALL_STATE(262)] = 13080,
  [SMALL_STATE(263)] = 13097,
  [SMALL_STATE(264)] = 13118,
  [SMALL_STATE(265)] = 13137,
  [SMALL_STATE(266)] = 13149,
  [SMALL_STATE(267)] = 13169,
  [SMALL_STATE(268)] = 13183,
  [SMALL_STATE(269)] = 13195,
  [SMALL_STATE(270)] = 13207,
  [SMALL_STATE(271)] = 13219,
  [SMALL_STATE(272)] = 13239,
  [SMALL_STATE(273)] = 13250,
  [SMALL_STATE(274)] = 13261,
  [SMALL_STATE(275)] = 13274,
  [SMALL_STATE(276)] = 13291,
  [SMALL_STATE(277)] = 13308,
  [SMALL_STATE(278)] = 13325,
  [SMALL_STATE(279)] = 13338,
  [SMALL_STATE(280)] = 13355,
  [SMALL_STATE(281)] = 13370,
  [SMALL_STATE(282)] = 13387,
  [SMALL_STATE(283)] = 13404,
  [SMALL_STATE(284)] = 13415,
  [SMALL_STATE(285)] = 13426,
  [SMALL_STATE(286)] = 13443,
  [SMALL_STATE(287)] = 13454,
  [SMALL_STATE(288)] = 13473,
  [SMALL_STATE(289)] = 13484,
  [SMALL_STATE(290)] = 13495,
  [SMALL_STATE(291)] = 13506,
  [SMALL_STATE(292)] = 13523,
  [SMALL_STATE(293)] = 13540,
  [SMALL_STATE(294)] = 13551,
  [SMALL_STATE(295)] = 13568,
  [SMALL_STATE(296)] = 13578,
  [SMALL_STATE(297)] = 13588,
  [SMALL_STATE(298)] = 13604,
  [SMALL_STATE(299)] = 13620,
  [SMALL_STATE(300)] = 13634,
  [SMALL_STATE(301)] = 13644,
  [SMALL_STATE(302)] = 13658,
  [SMALL_STATE(303)] = 13672,
  [SMALL_STATE(304)] = 13682,
  [SMALL_STATE(305)] = 13694,
  [SMALL_STATE(306)] = 13708,
  [SMALL_STATE(307)] = 13722,
  [SMALL_STATE(308)] = 13732,
  [SMALL_STATE(309)] = 13748,
  [SMALL_STATE(310)] = 13762,
  [SMALL_STATE(311)] = 13778,
  [SMALL_STATE(312)] = 13791,
  [SMALL_STATE(313)] = 13804,
  [SMALL_STATE(314)] = 13817,
  [SMALL_STATE(315)] = 13830,
  [SMALL_STATE(316)] = 13843,
  [SMALL_STATE(317)] = 13856,
  [SMALL_STATE(318)] = 13869,
  [SMALL_STATE(319)] = 13882,
  [SMALL_STATE(320)] = 13895,
  [SMALL_STATE(321)] = 13908,
  [SMALL_STATE(322)] = 13921,
  [SMALL_STATE(323)] = 13934,
  [SMALL_STATE(324)] = 13947,
  [SMALL_STATE(325)] = 13960,
  [SMALL_STATE(326)] = 13973,
  [SMALL_STATE(327)] = 13986,
  [SMALL_STATE(328)] = 13995,
  [SMALL_STATE(329)] = 14008,
  [SMALL_STATE(330)] = 14021,
  [SMALL_STATE(331)] = 14034,
  [SMALL_STATE(332)] = 14047,
  [SMALL_STATE(333)] = 14060,
  [SMALL_STATE(334)] = 14073,
  [SMALL_STATE(335)] = 14086,
  [SMALL_STATE(336)] = 14099,
  [SMALL_STATE(337)] = 14112,
  [SMALL_STATE(338)] = 14125,
  [SMALL_STATE(339)] = 14138,
  [SMALL_STATE(340)] = 14151,
  [SMALL_STATE(341)] = 14164,
  [SMALL_STATE(342)] = 14173,
  [SMALL_STATE(343)] = 14186,
  [SMALL_STATE(344)] = 14199,
  [SMALL_STATE(345)] = 14212,
  [SMALL_STATE(346)] = 14225,
  [SMALL_STATE(347)] = 14233,
  [SMALL_STATE(348)] = 14241,
  [SMALL_STATE(349)] = 14251,
  [SMALL_STATE(350)] = 14261,
  [SMALL_STATE(351)] = 14269,
  [SMALL_STATE(352)] = 14277,
  [SMALL_STATE(353)] = 14287,
  [SMALL_STATE(354)] = 14295,
  [SMALL_STATE(355)] = 14303,
  [SMALL_STATE(356)] = 14311,
  [SMALL_STATE(357)] = 14319,
  [SMALL_STATE(358)] = 14327,
  [SMALL_STATE(359)] = 14335,
  [SMALL_STATE(360)] = 14345,
  [SMALL_STATE(361)] = 14353,
  [SMALL_STATE(362)] = 14363,
  [SMALL_STATE(363)] = 14373,
  [SMALL_STATE(364)] = 14381,
  [SMALL_STATE(365)] = 14389,
  [SMALL_STATE(366)] = 14397,
  [SMALL_STATE(367)] = 14407,
  [SMALL_STATE(368)] = 14417,
  [SMALL_STATE(369)] = 14427,
  [SMALL_STATE(370)] = 14437,
  [SMALL_STATE(371)] = 14447,
  [SMALL_STATE(372)] = 14455,
  [SMALL_STATE(373)] = 14465,
  [SMALL_STATE(374)] = 14473,
  [SMALL_STATE(375)] = 14481,
  [SMALL_STATE(376)] = 14491,
  [SMALL_STATE(377)] = 14501,
  [SMALL_STATE(378)] = 14509,
  [SMALL_STATE(379)] = 14519,
  [SMALL_STATE(380)] = 14527,
  [SMALL_STATE(381)] = 14535,
  [SMALL_STATE(382)] = 14543,
  [SMALL_STATE(383)] = 14551,
  [SMALL_STATE(384)] = 14559,
  [SMALL_STATE(385)] = 14569,
  [SMALL_STATE(386)] = 14579,
  [SMALL_STATE(387)] = 14589,
  [SMALL_STATE(388)] = 14599,
  [SMALL_STATE(389)] = 14609,
  [SMALL_STATE(390)] = 14619,
  [SMALL_STATE(391)] = 14629,
  [SMALL_STATE(392)] = 14637,
  [SMALL_STATE(393)] = 14647,
  [SMALL_STATE(394)] = 14657,
  [SMALL_STATE(395)] = 14665,
  [SMALL_STATE(396)] = 14673,
  [SMALL_STATE(397)] = 14683,
  [SMALL_STATE(398)] = 14691,
  [SMALL_STATE(399)] = 14701,
  [SMALL_STATE(400)] = 14709,
  [SMALL_STATE(401)] = 14719,
  [SMALL_STATE(402)] = 14729,
  [SMALL_STATE(403)] = 14737,
  [SMALL_STATE(404)] = 14747,
  [SMALL_STATE(405)] = 14757,
  [SMALL_STATE(406)] = 14765,
  [SMALL_STATE(407)] = 14775,
  [SMALL_STATE(408)] = 14782,
  [SMALL_STATE(409)] = 14789,
  [SMALL_STATE(410)] = 14796,
  [SMALL_STATE(411)] = 14803,
  [SMALL_STATE(412)] = 14810,
  [SMALL_STATE(413)] = 14817,
  [SMALL_STATE(414)] = 14824,
  [SMALL_STATE(415)] = 14831,
  [SMALL_STATE(416)] = 14838,
  [SMALL_STATE(417)] = 14845,
  [SMALL_STATE(418)] = 14852,
  [SMALL_STATE(419)] = 14859,
  [SMALL_STATE(420)] = 14866,
  [SMALL_STATE(421)] = 14873,
  [SMALL_STATE(422)] = 14880,
  [SMALL_STATE(423)] = 14887,
  [SMALL_STATE(424)] = 14894,
  [SMALL_STATE(425)] = 14901,
  [SMALL_STATE(426)] = 14908,
  [SMALL_STATE(427)] = 14915,
  [SMALL_STATE(428)] = 14922,
  [SMALL_STATE(429)] = 14929,
  [SMALL_STATE(430)] = 14936,
  [SMALL_STATE(431)] = 14943,
  [SMALL_STATE(432)] = 14950,
  [SMALL_STATE(433)] = 14957,
  [SMALL_STATE(434)] = 14964,
  [SMALL_STATE(435)] = 14971,
  [SMALL_STATE(436)] = 14978,
  [SMALL_STATE(437)] = 14985,
  [SMALL_STATE(438)] = 14992,
  [SMALL_STATE(439)] = 14999,
  [SMALL_STATE(440)] = 15006,
  [SMALL_STATE(441)] = 15013,
  [SMALL_STATE(442)] = 15020,
  [SMALL_STATE(443)] = 15027,
  [SMALL_STATE(444)] = 15034,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(368),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(126),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(113),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(170),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(244),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(222),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(422),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [290] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(67),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [298] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym__path, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(435),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(67),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 29),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 29),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__big_string_literal, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__big_string_literal, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__big_string_literal, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__big_string_literal, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 27),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 27),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 28),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 28),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_type, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4, .production_id = 14),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4, .production_id = 14),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_destruct, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 5),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 11),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 19),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 17),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 9),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(259),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(348),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(441),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(441),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(359),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(407),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(411),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__big_string_literal_repeat1, 2), SHIFT_REPEAT(35),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__big_string_literal_repeat1, 2), SHIFT_REPEAT(261),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__big_string_literal_repeat1, 2), SHIFT_REPEAT(261),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__big_string_literal_repeat1, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 16),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 6),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym__path, 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3), REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 8),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(33),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(278),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proto, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3), REDUCE(sym_scoped_type_identifier, 3, .production_id = 6),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_raw_string_text, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_raw_string_text, 1),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 2, .production_id = 14),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_text, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_text, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(289),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(167),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(178),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(20),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(74),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(362),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 21),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 22),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 3, .production_id = 14),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 30),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 12),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 10),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 18),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 31),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 20),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 23),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 24),
  [1013] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 1),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
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
