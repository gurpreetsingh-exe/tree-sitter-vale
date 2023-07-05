function comma_sep1(rule) {
  return sep_by(rule, ",");
}

function sep_by(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

const PREC = {
  field: 7,
  multiplicative: 6,
  additive: 5,
  comparative: 4,
  and: 3,
  or: 2,
  assign: 1,
};

const KEYWORD = {
  func: "func",
  import: "import",
  export: "export",
  true: "true",
  false: "false",
  own: "own",
  borrow: "borrow",
  weak: "weak",
  share: "share",
  where: "where",
  inl: "inl",
  heap: "heap",
  imm: "imm",
  mut: "mut",
  vary: "vary",
  fiinal: "final",
  exists: "exists",
  resolve: "resolve",
  self: "self",
  if: "if",
  else: "else",
  foreach: "foreach",
  in: "in",
  parallel: "parallel",
  break: "break",
  return: "return",
  while: "while",
  destruct: "destruct",
  set: "set",
  unlet: "unlet",
  block: "block",
  pure: "pure",
  unsafe: "unsafe",
  and: "and",
  or: "or",
  as: "as",
  ro: "ro",
  rw: "rw",
  virtual: "virtual",
  impl: "impl",
  IntCapitalized: "Int",
  Ref: "Ref",
  Kind: "Kind",
  Region: "Region",
  Prot: "Prot",
  RefList: "RefList",
  Ownership: "Ownership",
  Variability: "Variability",
  Mutability: "Mutability",
  Location: "Location",
  Refs: "Refs",

  UNDERSCORE: "_",
  DOT_DOT: "..",

  int: "int",
  bool: "bool",
  float: "float",
  __Never: "__Never",
  str: "str",
  void: "void",
  i64: "i64",
  i32: "i32",
  i16: "i16",
  i8: "i8",
  u64: "u64",
  u32: "u32",
  u16: "u16",
  u8: "u8",

  plus: "+",
  asterisk: "*",
  slash: "/",
  minus: "-",
  spaceship: "<=>",
  lessEquals: "<=",
  less: "<",
  greaterEquals: ">=",
  greater: ">",
  tripleEquals: "===",
  doubleEquals: "==",
  notEquals: "!=",

  drop: "drop",
  free: "free",
  not: "not",
  range: "range",
  begin: "begin",
  next: "next",
  isEmpty: "isEmpty",
  get: "get",
  underscoresCall: "__call",
  tupleHumanName: "Tup",

  DeriveStructDrop: "DeriveStructDrop",
  DeriveAnonymousSubstruct: "DeriveAnonymousSubstruct",
  DeriveInterfaceDrop: "DeriveInterfaceDrop",
};

const OWNERSHIP = {
  own: "^",
  borrow: "&",
  weak: "&&",
};

const RUNES = [
  KEYWORD.IntCapitalized,
  KEYWORD.Ref,
  KEYWORD.Kind,
  KEYWORD.Region,
  KEYWORD.Prot,
  KEYWORD.RefList,
  KEYWORD.Ownership,
  KEYWORD.Variability,
  KEYWORD.Mutability,
  KEYWORD.Location,
];

const MACROS = [
  KEYWORD.DeriveStructDrop,
  KEYWORD.DeriveInterfaceDrop,
  KEYWORD.DeriveAnonymousSubstruct,
];

module.exports = grammar({
  name: "vale",
  conflicts: ($) => [
    [$._expr, $.generic_function],
    [$._expr, $._path],
    [$.pattern, $._expr],
    [$.int_lit, $.float_lit],
    [$.return_expr, $.call_expr],
    [$.assignment_expr, $.call_expr],
    [$.augment, $.call_expr],
    [$.not, $.call_expr],
    [$._expr, $.generic_function, $._type_identifier],
    [$._type_identifier, $._path],
    [$.scoped_identifier, $.scoped_type_identifier, $.pattern],
    [$.scoped_identifier, $._type_identifier],
  ],
  extras: ($) => [/\s/, $.line_comment],
  rules: {
    source_file: ($) => repeat($._top_level),
    _top_level: ($) =>
      choice(
        $.import,
        $.func_proto,
        $.function_definition,
        $.struct_definition,
      ),
    import: ($) => seq(KEYWORD.import, $.import_path, ";"),
    import_path: ($) => choice($._path, $.import_wilacard),
    attribute_name: (_) => choice(...MACROS),
    attribute: ($) => seq("#", optional("!"), $.attribute_name),
    scoped_identifier: ($) =>
      seq(
        field(
          "path",
          optional(
            $._path,
          ),
        ),
        ".",
        field("name", $.identifier),
      ),
    scoped_type_identifier: ($) =>
      seq(
        field(
          "path",
          optional(choice(
            $._path,
            $.generic_type,
          )),
        ),
        ".",
        field("name", $._type_identifier),
      ),
    import_wilacard: ($) => seq(optional(seq($._path, ".")), "*"),
    extern: ($) =>
      seq(
        "extern",
        optional(seq("(", $.string_literal, ")")),
      ),
    func_header: ($) =>
      seq(
        optional(
          choice(
            "exported",
            $.extern,
          ),
        ),
        KEYWORD.func,
        field("name", $.identifier),
        field("generic_parameters", optional($.generic_parameters)),
        field("parameters", $.parameters),
        field("return_type", optional($.type)),
      ),
    func_proto: ($) =>
      seq(
        $.func_header,
        ";",
      ),
    function_definition: ($) =>
      seq(
        $.func_header,
        field("body", $.block),
      ),
    generic_parameters: ($) =>
      prec(
        1,
        seq(
          "<",
          optional(
            comma_sep1($.generic_parameter),
          ),
          optional(","),
          ">",
        ),
      ),
    rune: (_) => choice(...RUNES),
    generic_parameter: ($) =>
      choice(
        seq(
          field("name", $._type_identifier),
          field("rune", $.rune),
        ),
        $.type,
      ),
    parameters: ($) =>
      seq(
        "(",
        optional(
          comma_sep1($.parameter),
        ),
        ")",
      ),
    parameter: ($) =>
      field(
        "parameter",
        seq(field("name", $.identifier), field("type", $.type)),
      ),
    struct_definition: ($) =>
      seq(
        optional($.attribute),
        "struct",
        $._type_identifier,
        optional($.generic_parameters),
        optional($.mutability),
        seq("{", repeat($.struct_field), "}"),
      ),
    struct_field: ($) =>
      seq(
        $._field_identifier,
        optional("!"),
        $.type,
        ";",
      ),
    mutability: (_) => choice(KEYWORD.mut, KEYWORD.imm),
    type: ($) =>
      choice(
        $._type_identifier,
        $.generic_type,
        $.scoped_type_identifier,
        $.array_type,
        $.reference_type,
      ),
    reference_type: ($) => seq("&", $.type),
    array_type: ($) => choice($.static_array_type, $.dynamic_array_type),
    dynamic_array_type: ($) =>
      seq(
        "[",
        "]",
        optional($.type_parameters),
        $._type_identifier,
      ),
    static_array_type: ($) =>
      seq(
        "[",
        "#",
        choice($.int_lit, $._type_identifier),
        "]",
        optional($.type_parameters),
        $._type_identifier,
      ),
    generic_type: ($) =>
      prec(
        1,
        seq(
          field(
            "type",
            choice(
              $._type_identifier,
              $.scoped_type_identifier,
            ),
          ),
          field("generic_parameters", $.generic_parameters),
        ),
      ),
    prim_type: (_) =>
      choice(
        KEYWORD.bool,
        KEYWORD.int,
        KEYWORD.float,
        KEYWORD.str,
        KEYWORD.void,
        KEYWORD.i32,
        KEYWORD.i64,
        KEYWORD.i16,
        KEYWORD.i8,
        KEYWORD.u32,
        KEYWORD.u64,
        KEYWORD.u16,
        KEYWORD.u8,
      ),
    block: ($) =>
      seq(
        "{",
        repeat($._statement),
        optional($._expr),
        "}",
      ),
    expr_statement: ($) =>
      choice(
        seq($._expr, ";"),
        prec(1, $._expr_ending_with_block),
      ),
    _statement: ($) => choice($.expr_statement, $.variable_definition),
    pattern: ($) =>
      choice(
        $._path,
        $.destruct,
      ),
    destruct: ($) =>
      seq(
        optional($.type),
        "[",
        sep_by($.pattern, ","),
        "]",
      ),
    variable_definition: ($) =>
      seq($.pattern, optional($.type), "=", $._expr, ";"),
    return_expr: ($) =>
      seq(
        KEYWORD.return,
        $._expr,
      ),
    _expr: ($) =>
      choice(
        $.literal,
        $.identifier,
        $.call_expr,
        $.generic_function,
        $.binary_expr,
        $.return_expr,
        $.assignment_expr,
        $.field_expr,
        $.augment,
        $.not,
        $.parenthesized_expr,
        $._expr_ending_with_block,
      ),
    parenthesized_expr: ($) => seq("(", $._expr, ")"),
    _expr_ending_with_block: ($) =>
      choice(
        $.if_expr,
        $.while_expr,
        $.foreach,
        $.lambda,
      ),
    lambda: ($) =>
      seq(
        seq(
          "(",
          optional(
            comma_sep1($.pattern),
          ),
          optional(","),
          ")",
        ),
        "=>",
        $.block,
      ),
    not: ($) => seq(KEYWORD.not, $._expr),
    augment: ($) =>
      seq(
        choice(
          OWNERSHIP.weak,
          OWNERSHIP.borrow,
          OWNERSHIP.own,
        ),
        $._expr,
      ),
    field_expr: ($) =>
      prec(
        PREC.field,
        seq(
          field("value", $._expr),
          ".",
          field(
            "field",
            $._field_identifier,
          ),
        ),
      ),
    assignment_expr: ($) => seq("set", $._expr, "=", $._expr),
    literal: ($) =>
      choice(
        $.bool_lit,
        $.int_lit,
        $.float_lit,
        $.string_literal,
      ),
    bool_lit: (_) => choice("true", "false"),
    call_expr: ($) =>
      seq(
        field(
          "function",
          $._expr,
        ),
        field(
          "parameters",
          seq(
            "(",
            optional(
              sep_by($._expr, ","),
            ),
            optional(","),
            ")",
          ),
        ),
      ),
    generic_function: ($) =>
      seq(
        field("function", $.identifier),
        field("type_parameters", $.type_parameters),
      ),
    type_parameters: ($) =>
      seq(
        "<",
        optional(
          comma_sep1(
            $.type_parameter,
          ),
        ),
        optional(","),
        ">",
      ),
    type_parameter: ($) =>
      choice(
        $.mutability,
        $.type,
        $.literal,
      ),
    while_expr: ($) =>
      seq(
        KEYWORD.while,
        field("condition", $._expr),
        field("block", $.block),
      ),
    foreach: ($) =>
      seq(KEYWORD.foreach, $.pattern, KEYWORD.in, $._expr, $.block),
    if_expr: ($) =>
      seq(
        KEYWORD.if,
        field("condition", $._expr),
        field("then_block", $.block),
        field("else_if", repeat($.else_if_expr)),
        field("else_block", optional($.else_expr)),
      ),
    else_if_expr: ($) =>
      seq(
        KEYWORD.else,
        KEYWORD.if,
        field("else_if_condition", $._expr),
        field("else_if_block", $.block),
      ),
    else_expr: ($) =>
      seq(
        KEYWORD.else,
        $.block,
      ),
    binary_expr: ($) => {
      const table = [
        [PREC.and, KEYWORD.and],
        [PREC.or, KEYWORD.or],
        [
          PREC.comparative,
          choice(
            KEYWORD.spaceship,
            KEYWORD.lessEquals,
            KEYWORD.less,
            KEYWORD.greaterEquals,
            KEYWORD.greater,
            KEYWORD.tripleEquals,
            KEYWORD.doubleEquals,
            KEYWORD.notEquals,
          ),
        ],
        [PREC.additive, choice(KEYWORD.plus, KEYWORD.minus)],
        [PREC.multiplicative, choice(KEYWORD.asterisk, KEYWORD.slash)],
      ];

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expr),
              field("operator", operator),
              field("right", $._expr),
            ),
          )
        ),
      );
    },
    line_comment: (_) =>
      token(seq(
        "//",
        /.*/,
      )),
    int_lit: (_) => /-?[0-9]+/,
    float_lit: (_) => {
      const digits = repeat1(/[0-9]+/);
      return token(seq(
        optional("-"),
        digits,
        ".",
        digits,
      ));
    },
    string_literal: ($) => $._string_literal,
    escape_sequence: (_) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu]/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/,
            /x[0-9a-fA-F]{2}/,
          ),
        ),
      ),
    _string_literal: ($) =>
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, repeat1(/[^\\"\n]/))),
          $.escape_sequence,
        )),
        '"',
      ),
    _type_identifier: ($) => alias($.identifier, $.type_identifier),
    _path: ($) => choice($.identifier, $.scoped_identifier),
    identifier: (_) => /(\p{XID_Start}|_)\p{XID_Continue}*/,
    _field_identifier: ($) => alias($.identifier, $.field_identifier),
  },
});