grammar Calc;

expressions: expression terminating_expression_tail | EOF;

terminating_expression_tail: EOL | EOF;

expression: calculation | OPEN_PAREN expression CLOSE_PAREN;

calculation: comparison calculation_tail;

calculation_tail: LOGICAL_OPERATOR comparison | /* epsilon */;

comparison: additive_expression comparison_tail;

comparison_tail:
	ADDITIVE_OPERATOR additive_expression
	| /* epsilon */;

additive_expression: multiplicative_expression additive_tail;

additive_tail:
	MULTIPLICATIVE_OPERATOR multiplicative_expression
	| /* epsilon */;

multiplicative_expression: exponential_term multiplicative_tail;

multiplicative_tail:
	EXPONENTIAL_OPERATOR exponential_term
	| /* epsilon */;

exponential_term: NUMBER;

// lexing constants

COMMA: ',';
COLON: ':';
SEMI: ';';
OPEN_PAREN: '(';
CLOSE_PAREN: ')';
OPEN_BRACKET: '[';
CLOSE_BRACKET: ']';
OPEN_BRACE: '{';
CLOSE_BRACE: '}';
PERIOD: '.';
PLUS: '+';
DASH: '-';
STAR: '*';
SLASH: '/';
CARET: '^';
EQUAL: '=';
EXCLAMATION: '!';
NOT_EQUAL: '!=';
LESS_THAN: '<';
GREATER_THAN: '>';
LESSER_THAN_EQUAL: '<=';
GREATER_THAN_EQUAL: '>=';
AMPERSAND: '&';
OR: '|';

// numbers
NUMBER: INTEGER | FLOAT;

INTEGER: '0' | INTEGER_START ALL_NUMERIC*;

fragment INTEGER_START: ('1' .. '9');

fragment ALL_NUMERIC: ('0' .. '9');

FLOAT: ALL_NUMERIC ALL_NUMERIC* '.' ALL_NUMERIC*;

// operators groups

LOGICAL_OPERATOR: AMPERSAND | OR;

COMPARITIVE_OPERATOR:
	EQUAL
	| NOT_EQUAL
	| LESS_THAN
	| GREATER_THAN
	| LESSER_THAN_EQUAL
	| GREATER_THAN_EQUAL;

ADDITIVE_OPERATOR: PLUS | DASH;

MULTIPLICATIVE_OPERATOR: STAR | SLASH;

EXPONENTIAL_OPERATOR: CARET;

EOL: [\n\r];