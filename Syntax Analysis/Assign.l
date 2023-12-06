%{ 
   /* Definition section */
   int l = 0;

%} 
  
/* Rule Section */
%% 




\/\/.* return Singlecmnt;
\/\*(.|[\n])*\*\/ return Multicmnt;

[0-9]+ return NUMBER;
[\t]       ; 
[\n]   { l = l + 1;}
" " ;
"return" return Return;
"break" return Break;
"while" return While;
"if" return If;
"else" return Else;
"else if" return Elseif;
"for" return For;
"do" return Do;
"switch" return Switch;
('.')|(\".*\") return stringconst;
"case" return Case;
"default" return Default;

"System.out.println" {l = l + 1; return Print;}
"System.out.print" return Print;

"public" return Public;
"static" return Static;
"protected" return Protected;


"byte"|"short"|"int"|"long"|"float"|"double"|"boolean"|"char"|"String" return type;
[A-Za-z]([0-9]|[A-Za-z]|"_"|"$")* return Identifier;

"+"|"-"|"*"|"/";
"<="    return LE;
">="    return GE;
"=="    return EQ;
"!="    return NE;
">" return GT;
"<" return LT;

.  return yytext[0]; 
  
%% 
  
