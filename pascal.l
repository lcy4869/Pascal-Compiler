%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

#define HASH_SIZE 1000007
const int HASH_SEED = 31;

int hashTable[HASH_SIZE];
int name_part = 0;

int BKDRhash(char *s)
{
	int n = strlen(s);
	int i;
	int res = 0;
	for (i = 0; i<n; ++i) {
		res = (res*HASH_SEED+s[i])%HASH_SIZE;
	}
	return res;
}
%}

dot 		"."
program	"program"
semi		";"
const		"const"
equal		"="
integer		\b[0-9]+\b
real 		\b[0-9]+\b\.\b[0-9]+\b
var_name	\b[A-Za-z]([A-Za-z]|_|[0-9])*\b
sys_con		"true"|"false"|"maxint"
type		"type"
lp			"("
rp			")"
lb			"["
rb			"]"
dotdot		".."
sys_type	"boolean"|"char"|"integer"|"real"
array		"array"
of			"of"
record		"record"
end			"end"
comma		","
colon		":"
assign		"assign"
begin		"begin"
sys_proc	"write"|"writeln"
read		"read"
if			"if"
then		"then"
else			"else"
repeat		"repeat"
until		"until"
for			"for"
do			"do"
to			"to"
downto		"downto"
case		"case"
goto		"goto"
ge			">="
gt			">"
le			"<="
lt			"<"
unequal	"<>"
plus		"+"
minus		"-"
mul			"*"
mod		"mod"
div			"div"
and			"and"
or			"or"
sys_funct	"abs"|"chr"|"odd"|"ord"|"pred"|"sqr"|"sqrt"|"succ"
var			"var"
function	"function"
procedure	"procedure"
while		"while"
not			"not"
label		"label"

%%

"{" {
// brackets comment
	char c;
	while (1) {
		c = input();
		if (c=='}') break;
	}
}
"//".*\n {
// one-line comment
}
"\'" { 
// recognize word string first. 
	char c;
	int cnt = 0;
	while (1) {
		c = input();
		if (c=='\'') break;
		++cnt;
	}
	if (cnt>1) return STRING;
	else return CHAR;
}
{var_name} {
// figure whether it is id or name
	printf("var_name :  %s\n", yytext);
	if (name_part) {
		hashTable[BKDRhash(yytext)] = 1;
		return NAME;
	}
	else {
		if (hashTable[BKDRhash(yytext)]) return NAME;
		else return ID;
	}
}
{dot} { return DOT; }
{program} { return PROGRAM; }
{semi} { return SEMI; }
{const} { name_part = 1; return CONST; }
{equal} { return EQUAL; }
{integer} { return INTEGER; }
{real} { return REAL; }
{sys_con} { return SYS_CON; }
{type}	{ name_part = 1; return TYPE;}
{lp}		{return LP;}
{rp}		{return RP;}
{lb}		{return LB;}
{rb}		{return RB;}
{dotdot}	{return DOTDOT;}
{sys_type}	{return SYS_TYPE;}
{array}		{return ARRAY;}
{of}		{return OF;}
{record}	{return RECORD;}
{end}		{return END;}
{comma}		{return COMMA;}
{colon}		{return COLON;}
{assign}	{return ASSIGN;}
{begin}		{name_part = 0; return BEGIN2;}
{sys_proc}	{return SYS_PROC;}
{read}		{return READ;}
{if}		{return IF;}
{then}		{return THEN;}
{else}		{return ELSE;}
{repeat}	{return REPEAT;}
{until}		{return UNTIL;}
{for}		{return FOR;}
{do}		{return DO;}
{to}		{return TO;}
{downto}	{return DOWNTO;}
{case}		{return CASE;}
{goto}		{return GOTO;}
{ge}		{return GE;}
{gt}		{return GT;}
{le}		{return LE;}
{lt}		{return LT;}
{unequal}	{return UNEQUAL;}
{plus}		{return PLUS;}
{minus}		{return MINUS;}
{mul}		{return MUL;}
{mod}		{return MOD;}
{div}		{return DIV;}
{and}		{return AND;}
{or}		{return OR;}
{sys_funct}	{return SYS_FUNCT;}
{var}		{ name_part = 0; return VAR;}
{function}	{ name_part = 0; return FUNCTION;}
{procedure}	{ name_part = 0; return PROCEDURE;}
{while}		{return WHILE;}
{not}		{return NOT;}
{label}		{return LABEL;}

%%

int yywrap(void) {
	return 1;
}