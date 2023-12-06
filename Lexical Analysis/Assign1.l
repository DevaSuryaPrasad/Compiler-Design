%{
#include <stdio.h>
#include <string.h>
%}

%option noyywrap

NUMBER [0-9]
LETTER [a-zA-Z]
SPECIAL [$,_]

/* DataTypes */
INT "int"
FLOAT "float"
DOUBLE "double"
LONG "long"
VOID "void"
STRING "String"
BYTE "byte"
CHAR "char"
SHORT "short"
BOOLEAN "boolean"

/* Control Statements */
IF "if"
ELSE "else"
ELSE_IF "else if"
EACH "each"
SWITCH "switch"
CASE "case"
DEFAULT "default"
WHILE "while"
FOR "for"
DO "do"
GOTO "goto"
BREAK "break"
CONTINUE "continue"
RETURN "return"

/* Keywords */
ABSTRACT "abstract"
ASSERT "assert"
CATCH "catch"
CLASS "class"
ENUM "enum" 
EXTENDS "extends"
FINAL "final"
FINALLY "finally"
IMPLEMENTS "implements"
IMPORT "import"
INSTANCEOF "instanceof"
INTERFACE "interface"
NATIVE "native"
NEW "new"
NULL "null"
PACKAGE "package"
PRIVATE "private"
PROTECTED "protected"
PUBLIC "public"
STATIC "static"
STRICTFP "strictfp"
SUPER "super"
THIS "this"
THROW "throw"
THROWS "throws"
TRANSIENT "transient"
TRY "try"
VAR "var"
VOLATILE "volatile"

/* Comments */
COMMENT "//".*
BLOCK_COMMENT "/*"[^*/].*"*/"

/* String literal */
STRING_LITERAL \"[^\"]*\"

/* Char literal */
CHAR_LITERAL '.'

/* Identifier */
IDENTIFIER ({LETTER}|{SPECIAL})({LETTER}|{NUMBER}|{SPECIAL})*

/* Integer literal */
INTEGER {NUMBER}+

/* Floating-point literal */
FLOATING_POINT {NUMBER}+"."{NUMBER}+|"."{NUMBER}+

/* Unary Operators */
INCREMENT "++"
DECREMENT "--"

/* Assignment Operators */
EQ_ASSIGN "="
ADD_EQ "+="
SUB_EQ "-="
MUL_EQ "*="
DIV_EQ "/="
MOD_EQ "%="
XOR_EQ "^="

/* Arithmetic Operators */
PLUS "+"
MINUS "-"
MULTIPLY "*"
DIVIDE "/"
MOD "%"

/* Logical Operators */
AND "&&"
OR "||"
NEQ "!="
NOT "!"

/* Relational Operators */
EQ_CHECK "=="
LE "<="
LT "<"
GE ">="
GT ">"

/* Separators */
COMMA ","
DOT "."
LPAREN "("
RPAREN ")"
LBRACE "{"
RBRACE "}"
SQ_OPEN "["
SQ_CLOSE "]"
SEMICOLON ";"
COLON ":"

/* Function Calling */
FUNCTION_CALL {IDENTIFIER}"("[^)]*")"

%%
{COMMENT}|{BLOCK_COMMENT} { /* Ignore */}

{ABSTRACT}|{CLASS}|{CATCH}|{ENUM}|{EXTENDS}|{FINAL}|{FINALLY}|{IMPLEMENTS}|{IMPORT}|{INSTANCEOF}|{INTERFACE}|{NATIVE}|{NEW}|{NULL}|{PACKAGE}|{PRIVATE}|{PROTECTED}|{PUBLIC}|{STATIC}|{SUPER}|{THIS}|{THROW}|{THROWS}|{TRANSIENT}|{TRY}|{VOLATILE} {printf("KEYWORD : %s\n", yytext);}

{IF}|{ELSE}|{ELSE_IF}|{SWITCH}|{CASE}|{DEFAULT}|{BREAK}|{CONTINUE}|{WHILE}|{FOR}|{DO}|{RETURN}|{EACH}|{GOTO} {printf("STATEMENT : %s\n", yytext);}
{LPAREN}|{RPAREN}|{LBRACE}|{RBRACE}|{SEMICOLON}|{COMMA}|{SQ_OPEN}|{SQ_CLOSE}|{COLON}|{DOT} {printf("SYNTAX ELEMENT : %s\n", yytext);}

{FUNCTION_CALL} {printf("FUNCTION : %s\n", yytext);}

{INT}|{FLOAT}|{DOUBLE}|{LONG}|{VOID}|{STRING}|{BYTE}|{SHORT}|{BOOLEAN} {printf("PRIMITIVE DATATYPE : %s\n", yytext);}

{CHAR_LITERAL} {printf("CHAR_LITERAL : %s\n", yytext);} 
{FLOATING_POINT} {printf("FLOATING_POINT : %s\n", yytext);}
{INTEGER} {printf("INTEGER : %s\n", yytext);}

{STRING_LITERAL} {printf("STRING_LITERAL : %s\n", yytext);} 

{INCREMENT}|{DECREMENT} {printf("UNARY OPERATOR : %s\n", yytext);}

{EQ_ASSIGN}|{ADD_EQ}|{SUB_EQ}|{MUL_EQ}|{DIV_EQ}|{XOR_EQ}|{MOD_EQ} {printf("ASSIGNMENT OPERATOR : %s\n", yytext);}

{PLUS}|{MINUS}|{MULTIPLY}|{DIVIDE}|{MOD} {printf("ARITHMETIC OPERATOR : %s\n", yytext);}

{AND}|{OR}|{NEQ}|{NOT} {printf("LOGICAL OPERATOR : %s\n", yytext);}

{EQ_CHECK}|{LE}|{LT}|{GE}|{GT} {printf("RELATIONAL OPERATOR : %s\n", yytext);}

"&"|"\|"|"^"|"~"|"<<"|">>"|">>>" {printf("BITWISE OPERATOR : %s\n", yytext);}

{IDENTIFIER} {printf("IDENTIFIER : %s\n", yytext);}

[ \t\r\n] { /* I am going to ignore, the whitespaces and tabs */ }

%%

/* Auxilary Function */

int main()
{
    printf("Enter as your wish: \n");   
    yylex();
    return 0;
}
