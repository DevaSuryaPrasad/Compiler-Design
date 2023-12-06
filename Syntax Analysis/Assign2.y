%{ 

   /* Definition section */
  #include<stdio.h> 
   #include<stdlib.h> 

extern FILE *fp;
%}

%start start;
%token NUMBER;
%token Identifier;
%token type;
%token LE;
%token GE;
%token NE;
%token EQ;
%token GT;
%token LT;
%token While;
%token Public;
%token Static;
%token Protected;
%token If;
%token Break;
%token Return;
%token Else;
%token Elseif;
%token For;
%token Singlecmnt;
%token Multicmnt;
%token Print;
%token Do;
%token Switch;
%token stringconst;
%token  Case;
%token Default;


%left '*' '/' '%' 

%left '+' '-'


%left '(' ')'

/* Rule Section */ 
%% 
start:start function
      | function
      |statements	
      |start declaration
      |declaration
      ;
     
declaration:Assignment
	   |type  Assignment
	   ;



function:type  Identifier'('Argument')' '{'  statements  '}'
	| Public  Static  type  Identifier '(' Argument ')' '{'  statements  '}' 
        ;
Argument:Argument','Arg
	|Arg
	|	
	;

Arg:type  Identifier


Assignment:
    Identifier '=' Assignment
    | '(' Assignment ')'
    | '{' Assignment '}'
    | '-' '(' Assignment ')'
    | '-' NUMBER
    | Identifier ',' Assignment
    | NUMBER ',' Assignment
    | Identifier '+' Assignment
    | Identifier '-' Assignment
    | NUMBER '+' Assignment
    | NUMBER '-' Assignment
    | '-' Identifier
    | NUMBER
    | stringconst
    | Identifier
    | NUMBER '*' Assignment
    | Identifier '*' Assignment
    | Identifier '/' Assignment
    | NUMBER '/' Assignment
    | '\'' Assignment '\''
    | Identifier '+' '+'
    | Identifier '-' '-'
    | type Identifier '=' Assignment
    | Identifier '=' functioncall
    | type Identifier '=' functioncall
    ;



functioncall:Identifier'('Argfunccalls')'';';

Argfunccalls: Argcal','Argfunccalls
		|Argcal
		;



Argcal:Identifier
	|NUMBER
	|stringconst
	|
	;



switchstmt:Switch '(' Identifier ')'  '{' cases '}' 
	   |Switch '(' Identifier ')'  '{' cases defaultcase '}'
           ;
		
defaultcase: Default ':'statements
		;


cases: Case  stringconst ':' statements  cases
	| Case  stringconst ':' statements 
	;



Whilestmt:While  '('  Expr  ')'  '{'  statements '}'
	  ;

forstmt:For '(' Expr ';' Expr ';' Expr ')'   '{'  statements  '}'

dowhilestm:Do  '{' statements '}' While  '(' Expr ')'';'



ifstmt:If  '('  Expr  ')'  '{'  statements  '}'

Elseifstmt:ifstmt  Elseifstatement
;

Elseifstatement:Elseifstatement  Elseif  '('  Expr  ')'  '{'  statements  '}'
		|Elseif  '('  Expr  ')'   '{'  statements  '}'
		;

elsestmt:ifstmt   Else  '{'  statements  '}'
	|ifstmt  Elseifstatement  Else  '{'  statements  '}'
	;


statements: statement statements
	|
	;


statement:Whilestmt
	|ifstmt
	|declaration';'
	|elsestmt
	|Elseifstmt
	|forstmt
	|switchstmt
	|functioncall
	|printfunc
	|dowhilestm 
	|Break';'
	|Return';'
	|Return NUMBER';'
	|Return Expr ';' 	
	|Singlecmnt
	|Multicmnt
	|Assignment
	;

 	
 	
printfunc: Print'('stringconst')'';' | Print'('stringconst','Identifier')'';' 
	 
Expr:Expr LE Expr
    | Expr GE Expr
    | Expr NE Expr
    | Expr EQ Expr
    | Expr GT Expr
    | Expr LT Expr
    | '(' Expr ')'
    | Assignment
    ;
    
%% 
  
#include"lex.yy.c"
#include<ctype.h>
int count=0;

int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");

   if(!yyparse())
        printf("\n Parsed Successfully .\n");
    else
        printf("\n Code invalid \n");

    fclose(yyin);
    return 0;
}

yyerror(char *s) {
    printf("There is an error in the line no-%d. : The following  %s occured due to wrong code near \" %s \".\n ", l, s, yytext );
}
