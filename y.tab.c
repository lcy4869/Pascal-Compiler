#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "pascal.y"
	#include <stdio.h>
	#include <ctype.h>
	#include "lex.yy.h"
#line 23 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define DOT 257
#define PROGRAM 258
#define ID 259
#define SEMI 260
#define CONST 261
#define NAME 262
#define EQUAL 263
#define INTEGER 264
#define REAL 265
#define CHAR 266
#define STRING 267
#define SYS_CON 268
#define TYPE 269
#define LP 270
#define RP 271
#define LB 272
#define RB 273
#define DOTDOT 274
#define SYS_TYPE 275
#define ARRAY 276
#define OF 277
#define RECORD 278
#define COMMA 279
#define COLON 280
#define ASSIGN 281
#define BEGIN2 282
#define END 283
#define SYS_PROC 284
#define READ 285
#define IF 286
#define THEN 287
#define ELSE 288
#define REPEAT 289
#define UNTIL 290
#define FOR 291
#define DO 292
#define TO 293
#define DOWNTO 294
#define CASE 295
#define GOTO 296
#define GE 297
#define GT 298
#define LE 299
#define LT 300
#define UNEQUAL 301
#define PLUS 302
#define MINUS 303
#define MUL 304
#define MOD 305
#define DIV 306
#define OR 307
#define AND 308
#define SYS_FUNCT 309
#define VAR 310
#define FUNCTION 311
#define PROCEDURE 312
#define WHILE 313
#define NOT 314
#define LABEL 315
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    5,    3,    6,    7,    7,   11,   11,
   12,   12,   12,   12,   12,    8,    8,   13,   13,   14,
   16,   18,   19,   19,   20,   21,   21,   17,   17,   17,
   17,   17,   17,   17,   15,   15,   15,    9,    9,   22,
   22,   23,   10,   10,   10,   10,   10,   24,   26,   25,
   28,   27,   27,   29,   30,   30,   31,   32,    4,   33,
   34,   34,   35,   35,   36,   36,   36,   36,   36,   36,
   36,   36,   36,   37,   37,   37,   38,   38,   38,   38,
   38,   39,   49,   49,   40,   41,   42,   50,   50,   43,
   51,   51,   52,   52,   44,   47,   47,   45,   45,   45,
   45,   45,   45,   45,   53,   53,   53,   53,   54,   54,
   54,   54,   54,   48,   48,   48,   48,   48,   48,   48,
   48,   48,   46,   46,
};
static const short yylen[] = {                            2,
    3,    3,    2,    2,    5,    0,    2,    0,    5,    4,
    1,    1,    1,    1,    1,    2,    0,    2,    1,    4,
    6,    3,    2,    1,    4,    3,    1,    1,    1,    3,
    3,    4,    5,    3,    1,    1,    1,    2,    0,    2,
    1,    4,    2,    2,    1,    1,    0,    4,    5,    4,
    3,    3,    0,    3,    3,    3,    2,    1,    1,    3,
    3,    0,    3,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    3,    6,    5,    1,    4,    1,    4,
    4,    5,    2,    0,    4,    4,    8,    1,    1,    5,
    2,    1,    4,    4,    2,    3,    1,    3,    3,    3,
    3,    3,    3,    1,    3,    3,    3,    1,    3,    3,
    3,    3,    1,    1,    4,    4,    1,    3,    2,    2,
    4,    3,    3,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    6,    0,    0,    0,    0,    2,    1,   62,
    3,   59,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   60,    0,    0,    0,   62,    0,    0,    0,    0,
   67,    0,   64,   65,   66,   68,   69,   70,   71,   72,
   73,    0,    0,    0,    0,   19,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   11,   12,   13,
   14,   15,    0,    0,    0,    0,  117,    0,  113,    0,
    0,    0,    0,    0,   95,    0,   61,    0,    0,    0,
   18,   27,    0,    0,   41,    0,    0,    0,   45,   46,
    0,    0,    0,    0,    0,    0,    0,   63,    0,    0,
    0,    0,    0,    0,    0,  120,    0,  119,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   10,    0,    0,    0,
   28,    0,    0,    0,    0,    0,   36,   35,   37,    0,
    0,   40,    0,    0,   43,   44,    6,    6,    0,   78,
    0,    0,   80,    0,   81,  122,    0,    0,  118,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  109,  111,  110,  112,    0,    0,    0,    0,    0,   92,
   86,    9,    0,    0,    0,    0,   24,    0,    0,    0,
   20,   26,    0,    0,    0,   51,    0,    0,    0,    0,
    0,    0,    0,  121,  115,  116,    0,   82,   88,   89,
    0,    0,    0,   90,   91,   34,   30,    0,   22,   23,
    0,    0,   31,   42,    0,    0,    4,   48,   50,    0,
   83,    0,    0,    0,    0,    0,    0,   32,    0,   52,
   49,    0,   94,   93,    0,   25,   33,    0,    0,   54,
    0,    0,   87,   21,    0,    0,    0,   55,   56,
};
static const short yydgoto[] = {                          2,
    3,    5,  197,   11,  198,    7,   14,   19,   48,   88,
   17,   67,   45,   46,  136,  137,  138,  139,  186,  187,
   83,   84,   85,   89,   90,   91,  195,   92,  225,  250,
  251,  252,   31,   15,   32,   33,   34,   35,   36,   37,
   38,   39,   40,   41,   94,   95,  100,   69,  208,  211,
  179,  180,   70,   71,
};
static const short yysindex[] = {                      -223,
 -204,    0,    0, -191, -153, -151, -114,    0,    0,    0,
    0,    0,  -98,  -87, -130,  -92,  -66,  -27,  -83, -163,
  -91,    0,  -41,  -36, -241,    0,  -22, -241,  -10, -241,
    0,   -4,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  195,   -2,   13,  -27,    0,   27, -161,   29, -241,
 -241, -241,  -65, -241, -241, -221,   20,    0,    0,    0,
    0,    0, -241, -241,   61, -241,    0, -125,    0,  -52,
  164, -225,   28, -100,    0,  -17,    0,   69,  195,  486,
    0,    0, -189,   27,    0,   74,   76, -161,    0,    0,
   85,   88,   68,   -3, -178,   26,   -3,    0,   -3, -122,
   83,   96, -241, -241,  -93,    0, -241,    0, -241,  -73,
 -241, -241, -241, -241, -241, -241, -241, -241, -241, -241,
 -241, -241, -241, -241,  165,  -73,    0,  103,   91,   27,
    0,  101,   27,  195,  100,  116,    0,    0,    0,  119,
  486,    0,  110,  110,    0,    0,    0,    0, -241,    0,
 -241,  108,    0, -241,    0,    0,   71,  -86,    0,  -69,
  -52,   94,  -52,  -52,  -52,  -52,  -52,  164,  164,  164,
    0,    0,    0,    0,   -3, -253,  113,  114,  151,    0,
    0,    0,  128,  -38, -143, -209,    0, -111,  121,  195,
    0,    0,  139,    0,  120,    0, -151,  148,  153,   -3,
   -3, -241,   -3,    0,    0,    0,  -73,    0,    0,    0,
 -241,  -73,  -73,    0,    0,    0,    0,  141,    0,    0,
  486, -251,    0,    0, -228, -143,    0,    0,    0,   -3,
    0,   87,  161,  163,  150,  175,  195,    0, -247,    0,
    0,  -73,    0,    0,  486,    0,    0,   27,  146,    0,
  158,  159,    0,    0,  146, -143, -143,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0, -215,    0,    0,    0,
    0,    0,    0, -170,    0,    0, -197,    0, -124, -232,
    0,    0, -207,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -166,    0,    0,  162,    0,    0,
    0,    0,    0,    0,    0,    0,  -35,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  194,
   14,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -33,    0,    0,    0,  171,    0,    0,
    0,    0,    0,  -32,    0,    0, -171,    0,   21,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -28,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -91,  180,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  236,  185,  278,  320,  362,  404,  446,   59,  104,  149,
    0,    0,    0,    0, -162,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -152,
   39,    0,   49,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -121,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  178,    0,
    0,    0,    0,    0,  184,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,  452,  269,  326,    0,    0,    0,    0,    0,
    0,  -42,    0,  430, -135,    0, -177,    0,    0,  290,
 -128,    0,  393,  390,  391,    0,  336,    0,    0,    0,
    0,    0,   -5,  457, -107,  431,    0,    0,    0,    0,
    0,    0,    0,    0,  -21,  -20,    0,  -44,    0,    0,
    0,  306,  228,  187,
};
#define YYTABLESIZE 789
static const short yytable[] = {                         78,
   12,  184,  162,   68,  188,  193,   74,  218,   76,  109,
  101,   82,   58,   59,   60,   61,   62,   56,  181,  106,
   57,  108,   58,   59,   60,   61,   62,   77,   63,   96,
   97,  239,   99,   20,    1,  102,  128,  135,   21,  209,
  210,  105,  240,  111,  112,  113,  114,  115,  241,   82,
  103,  237,   79,    8,    4,   77,   10,  188,   23,   24,
   25,   64,  248,   26,  123,   27,    8,   65,    8,   28,
   29,    7,   66,  219,  171,  172,  173,  174,  258,  259,
   79,  157,  178,  158,    7,  236,  160,   30,   74,  140,
  141,  189,  150,   49,    8,    8,    8,   85,  135,  231,
  151,  175,  176,    9,  233,  234,   50,   76,   51,  254,
  249,   17,    7,    7,    7,   16,   74,   52,  129,  255,
   58,   59,   60,   61,   62,   85,  130,  200,   20,  201,
   10,  131,  203,   21,  253,   76,  178,  109,   75,   17,
   17,   17,  135,   16,   16,   16,   13,  223,  153,   86,
   87,   10,   22,   23,   24,   25,  154,   39,   26,  134,
   27,  110,  109,   16,   28,   29,   75,  140,  221,  109,
   42,  111,  112,  113,  114,  115,  125,  159,  135,  238,
  230,   18,   30,  135,  205,   20,   39,   39,   53,  232,
   21,   12,  151,   20,  247,   43,  111,  112,  113,  114,
  115,  206,  135,  111,  112,  113,  114,  115,   10,  151,
   23,   24,   25,  135,  135,   26,   10,   27,   23,   24,
   25,   28,   29,   26,  114,   27,   47,  114,   54,   28,
   29,   29,  217,   55,   44,  114,   73,  114,  124,   30,
  140,  114,   29,  114,   29,  109,  124,   30,   38,  116,
  117,  114,  114,   75,  118,   77,  114,  114,  114,  109,
   79,  114,  114,  114,  114,  114,  114,  114,  114,  114,
  114,  114,  114,  108,  126,   80,  108,   38,   38,  111,
  112,  113,  114,  115,  108,   82,  108,   93,  109,  104,
  108,   97,  108,  111,  112,  113,  114,  115,  152,   97,
  108,  108,  168,  169,  170,  108,  108,  108,  124,  123,
  108,  108,  108,  108,  108,  108,  108,  123,  105,   96,
  108,  105,  111,  112,  113,  114,  115,   96,  127,  105,
  107,  105,  143,  109,  144,  105,  161,  105,  163,  164,
  165,  166,  167,  204,  147,  105,  105,  148,  149,  109,
  105,  105,  105,  155,  156,  105,  105,  105,  105,  105,
  105,  105,  182,  106,  183,  105,  106,  111,  112,  113,
  114,  115,  185,  190,  106,  191,  106,  192,  242,  194,
  106,  207,  106,  111,  112,  113,  114,  115,  202,  216,
  106,  106,  212,  213,  222,  106,  106,  106,  224,  226,
  106,  106,  106,  106,  106,  106,  106,  228,  107,  177,
  106,  107,  229,  235,   58,   59,   60,   61,   62,  107,
  243,  107,  244,  177,  140,  107,  245,  107,   58,   59,
   60,   61,   62,  214,  246,  107,  107,  256,  257,   53,
  107,  107,  107,   47,   84,  107,  107,  107,  107,  107,
  107,  107,    5,  104,    6,  107,  104,   58,   58,   59,
   60,   61,   62,   57,  104,  227,  104,  119,  120,  121,
  104,  122,  104,  199,   81,  220,  142,  145,  146,  196,
  104,  104,   72,   98,  215,  104,  104,  104,    0,    0,
  104,  104,  104,  104,  104,  102,    0,    0,  102,    0,
    0,    0,    0,    0,    0,    0,  102,    0,  102,    0,
    0,    0,  102,    0,  102,    0,    0,    0,    0,    0,
    0,    0,  102,  102,    0,    0,    0,  102,  102,  102,
    0,    0,  102,  102,  102,  102,  102,   98,    0,    0,
   98,    0,    0,    0,    0,    0,    0,    0,   98,    0,
   98,    0,    0,    0,   98,    0,   98,    0,    0,    0,
    0,    0,    0,    0,   98,   98,    0,    0,    0,   98,
   98,   98,    0,    0,   98,   98,   98,   98,   98,   99,
    0,    0,   99,    0,    0,    0,    0,    0,    0,    0,
   99,    0,   99,    0,    0,    0,   99,    0,   99,    0,
    0,    0,    0,    0,    0,    0,   99,   99,    0,    0,
    0,   99,   99,   99,    0,    0,   99,   99,   99,   99,
   99,  100,    0,    0,  100,    0,    0,    0,    0,    0,
    0,    0,  100,    0,  100,    0,    0,    0,  100,    0,
  100,    0,    0,    0,    0,    0,    0,    0,  100,  100,
    0,    0,    0,  100,  100,  100,    0,    0,  100,  100,
  100,  100,  100,  101,    0,    0,  101,    0,    0,    0,
    0,    0,    0,    0,  101,    0,  101,    0,    0,    0,
  101,    0,  101,    0,    0,    0,    0,    0,    0,    0,
  101,  101,    0,    0,    0,  101,  101,  101,    0,    0,
  101,  101,  101,  101,  101,  103,    0,    0,  103,    0,
    0,    0,    0,    0,    0,    0,  103,    0,  103,    0,
    0,    0,  103,    0,  103,    0,    0,    0,    0,    0,
    0,    0,  103,  103,    0,    0,    0,  103,  103,  103,
    0,    0,  103,  103,  103,  103,  103,  129,    0,   58,
   59,   60,   61,   62,    0,  130,    0,    0,    0,    0,
  131,  132,    0,  133,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  134,
};
static const short yycheck[] = {                         42,
    6,  130,  110,   25,  133,  141,   28,  185,   30,  263,
   55,  259,  264,  265,  266,  267,  268,  259,  126,   64,
  262,   66,  264,  265,  266,  267,  268,  260,  270,   51,
   52,  260,   54,  259,  258,  257,   79,   80,  264,  293,
  294,   63,  271,  297,  298,  299,  300,  301,  226,  259,
  272,  303,  260,  269,  259,  288,  282,  186,  284,  285,
  286,  303,  310,  289,  290,  291,  282,  309,  260,  295,
  296,  269,  314,  283,  119,  120,  121,  122,  256,  257,
  288,  103,  125,  104,  282,  221,  107,  313,  260,  279,
  280,  134,  271,  257,  310,  311,  312,  260,  141,  207,
  279,  123,  124,  257,  212,  213,  270,  260,  272,  245,
  239,  282,  310,  311,  312,  282,  288,  281,  262,  248,
  264,  265,  266,  267,  268,  288,  270,  149,  259,  151,
  282,  275,  154,  264,  242,  288,  179,  263,  260,  310,
  311,  312,  185,  310,  311,  312,  261,  190,  271,  311,
  312,  282,  283,  284,  285,  286,  279,  282,  289,  303,
  291,  287,  263,  262,  295,  296,  288,  279,  280,  263,
  263,  297,  298,  299,  300,  301,  277,  271,  221,  222,
  202,  269,  313,  226,  271,  259,  311,  312,  280,  211,
  264,  197,  279,  259,  237,  262,  297,  298,  299,  300,
  301,  271,  245,  297,  298,  299,  300,  301,  282,  279,
  284,  285,  286,  256,  257,  289,  282,  291,  284,  285,
  286,  295,  296,  289,  260,  291,  310,  263,  270,  295,
  296,  260,  271,  270,  262,  271,  259,  273,  271,  313,
  279,  277,  271,  279,  273,  263,  279,  313,  282,  302,
  303,  287,  288,  264,  307,  260,  292,  293,  294,  263,
  263,  297,  298,  299,  300,  301,  302,  303,  304,  305,
  306,  307,  308,  260,  292,  263,  263,  311,  312,  297,
  298,  299,  300,  301,  271,  259,  273,  259,  263,  270,
  277,  271,  279,  297,  298,  299,  300,  301,  273,  279,
  287,  288,  116,  117,  118,  292,  293,  294,  281,  271,
  297,  298,  299,  300,  301,  302,  303,  279,  260,  271,
  307,  263,  297,  298,  299,  300,  301,  279,  260,  271,
  270,  273,  259,  263,  259,  277,  109,  279,  111,  112,
  113,  114,  115,  273,  260,  287,  288,  260,  281,  263,
  292,  293,  294,  271,  259,  297,  298,  299,  300,  301,
  302,  303,  260,  260,  274,  307,  263,  297,  298,  299,
  300,  301,  272,  274,  271,  260,  273,  259,  292,  270,
  277,  288,  279,  297,  298,  299,  300,  301,  281,  262,
  287,  288,  280,  280,  274,  292,  293,  294,  260,  280,
  297,  298,  299,  300,  301,  302,  303,  260,  260,  259,
  307,  263,  260,  273,  264,  265,  266,  267,  268,  271,
  260,  273,  260,  259,  279,  277,  277,  279,  264,  265,
  266,  267,  268,  283,  260,  287,  288,  280,  280,  260,
  292,  293,  294,  282,  260,  297,  298,  299,  300,  301,
  302,  303,  282,  260,    3,  307,  263,  280,  264,  265,
  266,  267,  268,  280,  271,  197,  273,  304,  305,  306,
  277,  308,  279,  148,   45,  186,   84,   88,   88,  144,
  287,  288,   26,   53,  179,  292,  293,  294,   -1,   -1,
  297,  298,  299,  300,  301,  260,   -1,   -1,  263,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  271,   -1,  273,   -1,
   -1,   -1,  277,   -1,  279,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  287,  288,   -1,   -1,   -1,  292,  293,  294,
   -1,   -1,  297,  298,  299,  300,  301,  260,   -1,   -1,
  263,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  271,   -1,
  273,   -1,   -1,   -1,  277,   -1,  279,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  287,  288,   -1,   -1,   -1,  292,
  293,  294,   -1,   -1,  297,  298,  299,  300,  301,  260,
   -1,   -1,  263,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  271,   -1,  273,   -1,   -1,   -1,  277,   -1,  279,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  287,  288,   -1,   -1,
   -1,  292,  293,  294,   -1,   -1,  297,  298,  299,  300,
  301,  260,   -1,   -1,  263,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  271,   -1,  273,   -1,   -1,   -1,  277,   -1,
  279,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  287,  288,
   -1,   -1,   -1,  292,  293,  294,   -1,   -1,  297,  298,
  299,  300,  301,  260,   -1,   -1,  263,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  271,   -1,  273,   -1,   -1,   -1,
  277,   -1,  279,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  287,  288,   -1,   -1,   -1,  292,  293,  294,   -1,   -1,
  297,  298,  299,  300,  301,  260,   -1,   -1,  263,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  271,   -1,  273,   -1,
   -1,   -1,  277,   -1,  279,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  287,  288,   -1,   -1,   -1,  292,  293,  294,
   -1,   -1,  297,  298,  299,  300,  301,  262,   -1,  264,
  265,  266,  267,  268,   -1,  270,   -1,   -1,   -1,   -1,
  275,  276,   -1,  278,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  303,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"DOT","PROGRAM","ID","SEMI",
"CONST","NAME","EQUAL","INTEGER","REAL","CHAR","STRING","SYS_CON","TYPE","LP",
"RP","LB","RB","DOTDOT","SYS_TYPE","ARRAY","OF","RECORD","COMMA","COLON",
"ASSIGN","BEGIN2","END","SYS_PROC","READ","IF","THEN","ELSE","REPEAT","UNTIL",
"FOR","DO","TO","DOWNTO","CASE","GOTO","GE","GT","LE","LT","UNEQUAL","PLUS",
"MINUS","MUL","MOD","DIV","OR","AND","SYS_FUNCT","VAR","FUNCTION","PROCEDURE",
"WHILE","NOT","LABEL","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"program : program_head routine DOT",
"program_head : PROGRAM ID SEMI",
"routine : routine_head routine_body",
"sub_routine : routine_head routine_body",
"routine_head : label_part const_part type_part var_part routine_part",
"label_part :",
"const_part : CONST const_expr_list",
"const_part :",
"const_expr_list : const_expr_list NAME EQUAL const_value SEMI",
"const_expr_list : NAME EQUAL const_value SEMI",
"const_value : INTEGER",
"const_value : REAL",
"const_value : CHAR",
"const_value : STRING",
"const_value : SYS_CON",
"type_part : TYPE type_decl_list",
"type_part :",
"type_decl_list : type_decl_list type_definition",
"type_decl_list : type_definition",
"type_definition : NAME EQUAL type_decl SEMI",
"array_type_decl : ARRAY LB simple_type_decl RB OF type_decl",
"record_type_decl : RECORD field_decl_list END",
"field_decl_list : field_decl_list field_decl",
"field_decl_list : field_decl",
"field_decl : name_list COLON type_decl SEMI",
"name_list : name_list COMMA ID",
"name_list : ID",
"simple_type_decl : SYS_TYPE",
"simple_type_decl : NAME",
"simple_type_decl : LP name_list RP",
"simple_type_decl : const_value DOTDOT const_value",
"simple_type_decl : MINUS const_value DOTDOT const_value",
"simple_type_decl : MINUS const_value DOTDOT MINUS const_value",
"simple_type_decl : NAME DOTDOT NAME",
"type_decl : simple_type_decl",
"type_decl : array_type_decl",
"type_decl : record_type_decl",
"var_part : VAR var_decl_list",
"var_part :",
"var_decl_list : var_decl_list var_decl",
"var_decl_list : var_decl",
"var_decl : name_list COLON type_decl SEMI",
"routine_part : routine_part function_decl",
"routine_part : routine_part procedure_decl",
"routine_part : function_decl",
"routine_part : procedure_decl",
"routine_part :",
"function_decl : function_head SEMI sub_routine SEMI",
"function_head : FUNCTION ID parameters COLON simple_type_decl",
"procedure_decl : procedure_head SEMI sub_routine SEMI",
"procedure_head : PROCEDURE ID parameters",
"parameters : LP para_decl_list RP",
"parameters :",
"para_decl_list : para_decl_list SEMI para_type_list",
"para_type_list : var_para_list COLON simple_type_decl",
"para_type_list : val_para_list COLON simple_type_decl",
"var_para_list : VAR name_list",
"val_para_list : name_list",
"routine_body : compound_stmt",
"compound_stmt : BEGIN2 stmt_list END",
"stmt_list : stmt_list stmt SEMI",
"stmt_list :",
"stmt : INTEGER COLON non_label_stmt",
"stmt : non_label_stmt",
"non_label_stmt : assign_stmt",
"non_label_stmt : proc_stmt",
"non_label_stmt : compound_stmt",
"non_label_stmt : if_stmt",
"non_label_stmt : repeat_stmt",
"non_label_stmt : while_stmt",
"non_label_stmt : for_stmt",
"non_label_stmt : case_stmt",
"non_label_stmt : goto_stmt",
"assign_stmt : ID ASSIGN expression",
"assign_stmt : ID LB expression RB ASSIGN expression",
"assign_stmt : ID DOT ID ASSIGN expression",
"proc_stmt : ID",
"proc_stmt : ID LP args_list RP",
"proc_stmt : SYS_PROC",
"proc_stmt : SYS_PROC LP expression_list RP",
"proc_stmt : READ LP factor RP",
"if_stmt : IF expression THEN stmt else_clause",
"else_clause : ELSE stmt",
"else_clause :",
"repeat_stmt : REPEAT stmt_list UNTIL expression",
"while_stmt : WHILE expression DO stmt",
"for_stmt : FOR ID ASSIGN expression direction expression DO stmt",
"direction : TO",
"direction : DOWNTO",
"case_stmt : CASE expression OF case_expr_list END",
"case_expr_list : case_expr_list case_expr",
"case_expr_list : case_expr",
"case_expr : const_value COLON stmt SEMI",
"case_expr : ID COLON stmt SEMI",
"goto_stmt : GOTO INTEGER",
"expression_list : expression_list COMMA expression",
"expression_list : expression",
"expression : expression GE expr",
"expression : expression GT expr",
"expression : expression LE expr",
"expression : expression LT expr",
"expression : expression EQUAL expr",
"expression : expression UNEQUAL expr",
"expression : expr",
"expr : expr PLUS term",
"expr : expr MINUS term",
"expr : expr OR term",
"expr : term",
"term : term MUL factor",
"term : term DIV factor",
"term : term MOD factor",
"term : term AND factor",
"term : factor",
"factor : NAME",
"factor : NAME LP args_list RP",
"factor : SYS_FUNCT LP args_list RP",
"factor : const_value",
"factor : LP expression RP",
"factor : NOT factor",
"factor : MINUS factor",
"factor : ID LB expression RB",
"factor : ID DOT ID",
"args_list : args_list COMMA expression",
"args_list : expression",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 197 "pascal.y"

int main()
{
	return yyparse();
}

void yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
}
#line 609 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
