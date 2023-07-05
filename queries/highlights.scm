((identifier) @variable (#set! "priority" 95))
((type_identifier) @type)
(field_identifier) @field
(parameter (identifier) @parameter)

(scoped_identifier
  path: (identifier) @namespace)

(call_expr function: (identifier) @function.call)
(call_expr
  function: (field_expr
              field: (field_identifier) @function.call))

(generic_function function: (identifier) @function.call)

((rune) @type)
((identifier) @type
              (#lua-match? @type "^[A-Z]"))

(func_header (identifier) @function)
(struct_definition (type_identifier) @struct)

(attribute (attribute_name) @function.macro .)

(bool_lit) @constant
(int_lit) @constant
(float_lit) @constant
(string_literal) @string
(escape_sequence) @string.escape

(line_comment) @comment

[
 "("
 ")"
 "["
 "]"
 "<"
 ">"
 "{"
 "}"
 ] @punctuation.bracket

"." @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter

[
 "+"
 "-"
 "*"
 "/"
 "<"
 "<="
 ">"
 ">="
 "=="
 "==="
 "<=>"
 "!="
 "!"
 "="
 "=>"
 ] @operator

[
 "&"
 "&&"
 "^"
 ] @operator

"func" @keyword.function
"return" @keyword.return

[
 "else"
 "if"
 ] @conditional

[
 "while"
 "foreach"
 "in"
 ] @repeat

[
 "extern"
 "import"
 "exported"
 "struct"
 "imm"
 "mut"
 "set"
 "and"
 "or"
 "not"
 ] @keyword


(static_array_type ["#"] @punctuation.special)
(attribute ["#" "!"] @punctuation.special)
