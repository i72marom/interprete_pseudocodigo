/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "interpreter.y" /* yacc.c:337  */

#include <iostream>
#include <string>

/*******************************************/

/* pow */
#include <math.h>
/*******************************************/

/*******************************************/

/* Use for recovery of runtime errors */
#include <setjmp.h>
#include <signal.h>
/*******************************************/

/* Error recovery functions */
#include "../error/error.hpp"

/* Macros for the screen */
#include "../includes/macros.hpp"


/*******************************************/
/* 
  NEW in example 16
  AST class
  IMPORTANT: this file must be before init.hpp
*/
#include "../ast/ast.hpp"


/*******************************************/

/* Table of symbol */
#include "../table/table.hpp"
/*******************************************/

/*******************************************/
#include "../table/numericVariable.hpp"
/*******************************************/


#include "../table/logicalVariable.hpp"

/*******************************************/

#include "../table/numericConstant.hpp"
/*******************************************/

/*******************************************/

#include "../table/logicalConstant.hpp"
/*******************************************/

/*******************************************/

#include "../table/builtinParameter1.hpp"
/*******************************************/

/*******************************************/

#include "../table/builtinParameter0.hpp"
#include "../table/builtinParameter2.hpp"
/*******************************************/


/*******************************************/

#include "../table/init.hpp"
/*******************************************/

/*! 
	\brief  Lexical or scanner function
	\return int
	\note   C++ requires that yylex returns an int value
	\sa     yyparser
*/
int yylex();

extern int lineNumber; //!< External line counter

extern bool interactiveMode; //!< Control the interactive mode of execution of the interpreter


/***********************************************************/
extern std::string progname; //!<  Program name
/***********************************************************/

/*******************************************/

/*
 jhmp_buf
    This is an array type capable of storing the information of a calling environment to be restored later.
   This information is filled by calling macro setjmp and can be restored by calling function longjmp.
*/
jmp_buf begin; //!<  It enables recovery of runtime errors 
/*******************************************/


/*******************************************/

extern lp::Table table; //!< Extern Table of Symbols

/*******************************************/

extern lp::AST *root; //!< External root of the abstract syntax tree AST


#line 181 "interpreter.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "interpreter.tab.h".  */
#ifndef YY_YY_INTERPRETER_TAB_H_INCLUDED
# define YY_YY_INTERPRETER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    PRINT = 259,
    PRINT_STRING = 260,
    READ = 261,
    READ_STRING = 262,
    IF = 263,
    THEN = 264,
    ELSE = 265,
    ENDIF = 266,
    WHILE = 267,
    DO_IT = 268,
    ENDWHILE = 269,
    DO = 270,
    UNTIL = 271,
    FOR = 272,
    FROM = 273,
    STEP = 274,
    ENDFOR = 275,
    CASE = 276,
    VALUE = 277,
    DEFAULT = 278,
    END_CASE = 279,
    BORRAR = 280,
    LUGAR = 281,
    ESPERAR = 282,
    LETFCURLYBRACKET = 283,
    RIGHTCURLYBRACKET = 284,
    ASSIGNMENT = 285,
    AUMENTO_IGUAL = 286,
    DISMINUCION_IGUAL = 287,
    COMMA = 288,
    TWO_POINTS = 289,
    NUMBER = 290,
    STRING = 291,
    BOOL = 292,
    VARIABLE = 293,
    UNDEFINED = 294,
    CONSTANT = 295,
    BUILTIN = 296,
    OR = 297,
    AND = 298,
    GREATER_OR_EQUAL = 299,
    LESS_OR_EQUAL = 300,
    GREATER_THAN = 301,
    LESS_THAN = 302,
    EQUAL = 303,
    NOT_EQUAL = 304,
    NOT = 305,
    PLUS = 306,
    MINUS = 307,
    AUMENTO = 308,
    DISMINUCION = 309,
    MULTIPLICATION = 310,
    DIVISION = 311,
    MODULO = 312,
    DIVISION_ENTERA = 313,
    CONCATENACION = 314,
    LPAREN = 315,
    RPAREN = 316,
    UNARY = 317,
    POWER = 318
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 129 "interpreter.y" /* yacc.c:352  */

  char * identifier; 				 
  double number;  
  bool logic;						 
  char* string;
  lp::ExpNode *expNode;  			 
  std::list<lp::ExpNode *>  *parameters;    // New in example 16; NOTE: #include<list> must be in interpreter.l, init.cpp, interpreter.cpp
  std::list<lp::Statement *> *stmts; 
  lp::Statement *st;				 
  lp::AST *prog;					 

#line 300 "interpreter.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   623

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

#define YYUNDEFTOK  2
#define YYMAXUTOK   318

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   213,   213,   227,   232,   244,   254,   259,   264,   269,
     274,   279,   283,   287,   291,   295,   300,   306,   311,   316,
     321,   329,   336,   343,   350,   374,   382,   390,   397,   403,
     407,   412,   422,   428,   434,   439,   444,   449,   455,   460,
     467,   474,   481,   488,   493,   499,   505,   510,   515,   521,
     527,   533,   539,   544,   549,   555,   561,   567,   574,   580,
     586,   593,   640,   646,   652,   658,   664,   670,   676,   682,
     688,   697,   704,   715,   720,   731,   736
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "PRINT", "PRINT_STRING",
  "READ", "READ_STRING", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO_IT",
  "ENDWHILE", "DO", "UNTIL", "FOR", "FROM", "STEP", "ENDFOR", "CASE",
  "VALUE", "DEFAULT", "END_CASE", "BORRAR", "LUGAR", "ESPERAR",
  "LETFCURLYBRACKET", "RIGHTCURLYBRACKET", "ASSIGNMENT", "AUMENTO_IGUAL",
  "DISMINUCION_IGUAL", "COMMA", "TWO_POINTS", "NUMBER", "STRING", "BOOL",
  "VARIABLE", "UNDEFINED", "CONSTANT", "BUILTIN", "OR", "AND",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "GREATER_THAN", "LESS_THAN",
  "EQUAL", "NOT_EQUAL", "NOT", "PLUS", "MINUS", "AUMENTO", "DISMINUCION",
  "MULTIPLICATION", "DIVISION", "MODULO", "DIVISION_ENTERA",
  "CONCATENACION", "LPAREN", "RPAREN", "UNARY", "POWER", "$accept",
  "program", "stmtlist", "stmt", "block", "while_block", "do_while_block",
  "for_block", "if", "while", "do_while", "for", "cond", "asgn", "esperar",
  "print_string", "print", "borrar", "read_string", "read", "lugar", "exp",
  "modification_unary", "listOfExp", "restOfListOfExp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

#define YYPACT_NINF -53

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-53)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-3)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -53,     2,   190,   -53,   -53,   -53,   407,   407,   -42,   -38,
     -30,   -30,   -53,    -5,   -53,   -16,   -53,   -53,   -25,    15,
     -53,   -53,   -30,   -53,   -53,   -53,   -53,    43,    45,    52,
      58,    59,    60,    64,    66,    83,   -53,   -53,   -53,   -53,
      27,   407,   407,   407,   407,   499,   499,     3,    30,   407,
      81,    78,   257,    74,   407,   286,   414,   407,   407,   -53,
     -53,   414,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   407,     1,    40,    40,   433,   407,   407,   407,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   407,
     407,   407,   407,    32,    46,    54,   455,   -53,   -53,   -53,
     -53,   407,   -32,   -53,     8,    15,   -53,   499,   499,   499,
     -53,   499,   381,    56,   -53,   520,   540,   560,   560,   560,
     560,   560,   560,    65,    65,    40,    40,    40,    40,    40,
      40,   -53,   -53,   -53,   -53,   228,   315,   129,   407,   407,
     -53,   -53,   -53,   -53,   -53,   407,   477,   381,   353,   106,
     -53,   -53,   -53,   -53,   407,   -53,   382,    53,   -53,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     5,     6,     0,     0,     0,     0,
       0,     0,     3,     0,    41,     0,    38,     3,     0,     0,
       4,    20,     0,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,    59,    60,
       0,     0,     0,     0,     0,    40,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      72,     0,    28,     7,    13,     9,     8,    11,    12,    10,
      14,    15,    73,    70,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     3,    27,
      23,     0,     0,    21,    59,    60,    33,    32,    34,    35,
      37,    36,    75,     0,    54,    69,    68,    63,    65,    62,
      64,    66,    67,    48,    49,    50,    51,    57,    52,    53,
      58,    43,    44,    42,    31,     0,     0,     0,     0,     0,
      74,    61,     3,    25,    22,     0,     0,    75,     0,     0,
      45,    76,    26,     3,     0,    29,     0,     0,    24,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,    -9,   -53,   -53,   -53,   -53,   -51,   -53,   -53,
     -53,   -53,    10,   -52,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,    -7,   -53,   -53,   -34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    20,    21,    99,    22,   155,    23,    24,
      25,    26,    50,    27,    28,    29,    30,    31,    32,    33,
      34,    45,    35,   113,   140
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   138,     3,    52,   106,    56,    57,    58,    55,   110,
      77,    78,    79,    80,    81,    82,    83,    84,    47,    85,
      86,    51,    48,    87,    88,    89,    90,    91,    59,    60,
      49,    92,    62,    53,    73,    74,    75,    76,    56,    57,
      58,    93,    96,    94,    54,    61,    63,   102,    64,   107,
     108,   109,    85,    86,   111,    65,    87,    88,    89,    90,
      91,    66,    67,    68,    92,   112,   153,    69,    95,    70,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,    71,    72,   135,   136,
      97,    98,   101,   131,   137,    77,    78,    79,    80,    81,
      82,    83,    84,    92,    85,    86,   159,   132,    87,    88,
      89,    90,    91,   151,     0,   133,    92,   141,     0,   153,
      87,    88,    89,    90,    91,   154,     0,     0,    92,     0,
       0,   146,   147,   148,     0,     0,     0,     0,   149,     0,
       0,     0,     0,     0,   156,   145,     0,   157,    77,    78,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,    87,    88,    89,    90,    91,     0,     0,     0,    92,
       0,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,     0,     0,    87,    88,    89,    90,    91,     0,
      -2,     4,    92,     5,     6,     7,     8,     9,    10,     0,
       0,     0,    11,     0,     0,    12,     0,    13,     0,     0,
       0,     0,     0,     0,     0,    14,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     4,
      19,     5,     6,     7,     8,     9,    10,     0,   142,   143,
      11,     0,     0,    12,     0,    13,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    16,    17,     0,     4,     0,
       5,     6,     7,     8,     9,    10,    18,     0,    19,    11,
       0,     0,    12,   100,    13,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    17,     0,     4,     0,     5,
       6,     7,     8,     9,    10,    18,     0,    19,    11,     0,
       0,    12,     0,    13,     0,     0,     0,     0,     0,     0,
       0,    14,    15,    16,    17,   103,     4,     0,     5,     6,
       7,     8,     9,    10,    18,     0,    19,    11,     0,   144,
      12,     0,    13,     0,     0,     0,     0,     0,     0,     0,
      14,    15,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     4,    19,     5,     6,     7,     8,
       9,    10,     0,     0,   152,    11,     0,     0,    12,     0,
      13,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      16,    17,     0,     4,     0,     5,     6,     7,     8,     9,
      10,    18,     0,    19,    11,     0,     0,    12,     0,    13,
       0,     0,   158,     0,     0,     0,     0,    14,    15,    16,
      17,     0,     0,     0,   139,     0,     0,     0,     0,     0,
      18,     0,    19,    77,    78,    79,    80,    81,    82,    83,
      84,     0,    85,    86,     0,     0,    87,    88,    89,    90,
      91,     0,    36,    37,    92,    38,     0,    39,    40,    36,
      37,     0,   104,     0,   105,    40,     0,    41,    42,    43,
       0,     0,     0,     0,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,    44,    77,    78,    79,    80,    81,
      82,    83,    84,     0,    85,    86,     0,     0,    87,    88,
      89,    90,    91,     0,   114,     0,    92,    77,    78,    79,
      80,    81,    82,    83,    84,     0,    85,    86,     0,     0,
      87,    88,    89,    90,    91,     0,   134,     0,    92,    77,
      78,    79,    80,    81,    82,    83,    84,     0,    85,    86,
       0,     0,    87,    88,    89,    90,    91,     0,   150,     0,
      92,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,     0,     0,    87,    88,    89,    90,    91,     0,
       0,     0,    92,    78,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,    87,    88,    89,    90,    91,
       0,     0,     0,    92,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,    87,    88,    89,    90,    91,
       0,     0,     0,    92,    -3,    -3,    -3,    -3,    -3,    -3,
       0,    85,    86,     0,     0,    87,    88,    89,    90,    91,
       0,     0,     0,    92
};

static const yytype_int16 yycheck[] =
{
       7,    33,     0,    12,    56,    30,    31,    32,    17,    61,
      42,    43,    44,    45,    46,    47,    48,    49,    60,    51,
      52,    11,    60,    55,    56,    57,    58,    59,    53,    54,
      60,    63,    22,    38,    41,    42,    43,    44,    30,    31,
      32,    38,    49,    40,    60,    30,     3,    54,     3,    56,
      57,    58,    51,    52,    61,     3,    55,    56,    57,    58,
      59,     3,     3,     3,    63,    72,    13,     3,    38,     3,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,     3,    60,    97,    98,
       9,    13,    18,    61,   101,    42,    43,    44,    45,    46,
      47,    48,    49,    63,    51,    52,   157,    61,    55,    56,
      57,    58,    59,   147,    -1,    61,    63,    61,    -1,    13,
      55,    56,    57,    58,    59,    19,    -1,    -1,    63,    -1,
      -1,   138,   139,   142,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    -1,    -1,   153,    16,    -1,   154,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    -1,
      -1,    55,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    -1,    55,    56,    57,    58,    59,    -1,
       0,     1,    63,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,     1,
      40,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    -1,    -1,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    38,    -1,    40,    12,
      -1,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    38,    -1,    40,    12,    -1,
      -1,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,     1,    -1,     3,     4,
       5,     6,     7,     8,    38,    -1,    40,    12,    -1,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,     1,    40,     3,     4,     5,     6,
       7,     8,    -1,    -1,    11,    12,    -1,    -1,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    38,    -1,    40,    12,    -1,    -1,    15,    -1,    17,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    35,    36,    63,    38,    -1,    40,    41,    35,
      36,    -1,    38,    -1,    40,    41,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    50,    51,    52,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    -1,    55,    56,
      57,    58,    59,    -1,    61,    -1,    63,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    -1,
      55,    56,    57,    58,    59,    -1,    61,    -1,    63,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      -1,    -1,    55,    56,    57,    58,    59,    -1,    61,    -1,
      63,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    -1,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    63,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    -1,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    -1,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    -1,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,     1,     3,     4,     5,     6,     7,
       8,    12,    15,    17,    25,    26,    27,    28,    38,    40,
      67,    68,    70,    72,    73,    74,    75,    77,    78,    79,
      80,    81,    82,    83,    84,    86,    35,    36,    38,    40,
      41,    50,    51,    52,    60,    85,    85,    60,    60,    60,
      76,    76,    66,    38,    60,    66,    30,    31,    32,    53,
      54,    30,    76,     3,     3,     3,     3,     3,     3,     3,
       3,     3,    60,    85,    85,    85,    85,    42,    43,    44,
      45,    46,    47,    48,    49,    51,    52,    55,    56,    57,
      58,    59,    63,    38,    40,    38,    85,     9,    13,    69,
      16,    18,    85,    29,    38,    40,    77,    85,    85,    85,
      77,    85,    85,    87,    61,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    61,    61,    61,    61,    66,    66,    85,    33,    33,
      88,    61,    10,    11,    14,    16,    85,    85,    66,    85,
      61,    88,    11,    13,    19,    71,    66,    85,    20,    71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    69,    70,    71,    72,    72,    73,    74,    75,
      75,    76,    77,    77,    77,    77,    77,    77,    78,    79,
      80,    81,    82,    83,    83,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    87,    87,    88,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     7,     3,     2,     7,
       9,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     1,     4,     4,     4,     6,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     1,
       1,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     0,     2,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 214 "interpreter.y" /* yacc.c:1652  */
    { 
		    // Create a new AST
			(yyval.prog) = new lp::AST((yyvsp[0].stmts)); 

			// Assign the AST to the root
			root = (yyval.prog); 

			// End of parsing
			//	return 1;
		  }
#line 1608 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 227 "interpreter.y" /* yacc.c:1652  */
    { 
			// create a empty list of statements
			(yyval.stmts) = new std::list<lp::Statement *>(); 
		  }
#line 1617 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 233 "interpreter.y" /* yacc.c:1652  */
    { 
			// copy up the list and add the stmt to it
			(yyval.stmts) = (yyvsp[-1].stmts);
			(yyval.stmts)->push_back((yyvsp[0].st));

			// Control the interative mode of execution of the interpreter
			if (interactiveMode == true)
 			   (yyvsp[0].st)->evaluate();
           }
#line 1631 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 245 "interpreter.y" /* yacc.c:1652  */
    { 
			// just copy up the stmtlist when an error occurs
			(yyval.stmts) = (yyvsp[-1].stmts);

			// The previous look-ahead token ought to be discarded with `yyclearin;'
			yyclearin; 
           }
#line 1643 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 255 "interpreter.y" /* yacc.c:1652  */
    {
		// Create a new empty statement node
		(yyval.st) = new lp::EmptyStmt(); 
	  }
#line 1652 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 260 "interpreter.y" /* yacc.c:1652  */
    {
		// Default action
		// $$ = $1;
	  }
#line 1661 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 265 "interpreter.y" /* yacc.c:1652  */
    {
		// Default action
		// $$ = $1;
	  }
#line 1670 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 270 "interpreter.y" /* yacc.c:1652  */
    {
		// Default action
		// $$ = $1;
	  }
#line 1679 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 275 "interpreter.y" /* yacc.c:1652  */
    {
		// Default action
		// $$ = $1;
	  }
#line 1688 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 280 "interpreter.y" /* yacc.c:1652  */
    {

	  }
#line 1696 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 284 "interpreter.y" /* yacc.c:1652  */
    {

	  }
#line 1704 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 288 "interpreter.y" /* yacc.c:1652  */
    {

	  }
#line 1712 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 292 "interpreter.y" /* yacc.c:1652  */
    {

	  }
#line 1720 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 296 "interpreter.y" /* yacc.c:1652  */
    {

	  }
#line 1728 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 301 "interpreter.y" /* yacc.c:1652  */
    {
		// Default action
		// $$ = $1;
	 }
#line 1737 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 307 "interpreter.y" /* yacc.c:1652  */
    {
		// Default action
		// $$ = $1;
	 }
#line 1746 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 312 "interpreter.y" /* yacc.c:1652  */
    {
		// Default action
		// $$ = $1;	
	}
#line 1755 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 317 "interpreter.y" /* yacc.c:1652  */
    {

	 }
#line 1763 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 322 "interpreter.y" /* yacc.c:1652  */
    {
		// Default action
		// $$ = $1;
	 }
#line 1772 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 330 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new block of statements node
			(yyval.st) = new lp::BlockStmt((yyvsp[-1].stmts)); 
		}
#line 1781 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 337 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new block of statements node
			(yyval.st) = new lp::BlockStmt((yyvsp[-1].stmts)); 
		}
#line 1790 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 344 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new block of statements node
			(yyval.st) = new lp::BlockStmt((yyvsp[-1].stmts)); 
		}
#line 1799 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 351 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new block of statements node
			(yyval.st) = new lp::BlockStmt((yyvsp[-1].stmts)); 
		}
#line 1808 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 375 "interpreter.y" /* yacc.c:1652  */
    {
		lp::BlockStmt *block=new lp::BlockStmt((yyvsp[-1].stmts));
		// Create a new if statement node
		(yyval.st) = new lp::IfStmt((yyvsp[-3].expNode),block  );
	}
#line 1818 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 383 "interpreter.y" /* yacc.c:1652  */
    {
		// Create a new if statement node
		(yyval.st) = new lp::IfStmt((yyvsp[-5].expNode),new lp::BlockStmt((yyvsp[-3].stmts)), new lp::BlockStmt((yyvsp[-1].stmts)));
	 }
#line 1827 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 391 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new while statement node
			(yyval.st) = new lp::WhileStmt((yyvsp[-1].expNode), (yyvsp[0].st));
        }
#line 1836 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 398 "interpreter.y" /* yacc.c:1652  */
    {
		(yyval.st) = new lp::DoWhileStmt((yyvsp[-1].st), (yyvsp[0].expNode));
	}
#line 1844 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 404 "interpreter.y" /* yacc.c:1652  */
    {
		(yyval.st)= new lp::ForStmt((yyvsp[-5].identifier),(yyvsp[-3].expNode),(yyvsp[-1].expNode),(yyvsp[0].st));
	}
#line 1852 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 408 "interpreter.y" /* yacc.c:1652  */
    {
		(yyval.st)= new lp::ForStmt((yyvsp[-7].identifier),(yyvsp[-5].expNode),(yyvsp[-3].expNode),(yyvsp[0].st),(yyvsp[-1].expNode));
	}
#line 1860 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 413 "interpreter.y" /* yacc.c:1652  */
    { 
			(yyval.expNode) = (yyvsp[-1].expNode);
		}
#line 1868 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 423 "interpreter.y" /* yacc.c:1652  */
    { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].identifier), (yyvsp[0].expNode));
		}
#line 1877 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 429 "interpreter.y" /* yacc.c:1652  */
    { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].identifier), (lp::AssignmentStmt *) (yyvsp[0].st));
		}
#line 1886 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 435 "interpreter.y" /* yacc.c:1652  */
    { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].identifier),new lp::PlusNode(new lp::VariableNode((yyvsp[-2].identifier)), (yyvsp[0].expNode)));
		}
#line 1895 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 440 "interpreter.y" /* yacc.c:1652  */
    { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].identifier),new lp::MinusNode(new lp::VariableNode((yyvsp[-2].identifier)), (yyvsp[0].expNode)));
		}
#line 1904 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 445 "interpreter.y" /* yacc.c:1652  */
    {   
 			execerror("Semantic error in assignment: it is not allowed to modify a constant ", (yyvsp[-2].identifier));
		}
#line 1912 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 450 "interpreter.y" /* yacc.c:1652  */
    {   
 			execerror("Semantic error in multiple assignment: it is not allowed to modify a constant ",(yyvsp[-2].identifier));
		}
#line 1920 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 456 "interpreter.y" /* yacc.c:1652  */
    {
	(yyval.st)= new lp::EntradaStmt();
	}
#line 1928 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 461 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new print node
			 (yyval.st) = new lp::PrintChainStmt((yyvsp[0].expNode));
		}
#line 1937 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 468 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new print node
			 (yyval.st) = new lp::PrintStmt((yyvsp[0].expNode));
		}
#line 1946 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 475 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new print node
			 (yyval.st) = new lp::BorrarPantallaStmt();
		}
#line 1955 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 482 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new read node
			 (yyval.st) = new lp::ReadChainStmt((yyvsp[-1].identifier));
		}
#line 1964 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 489 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new read node
			 (yyval.st) = new lp::ReadStmt((yyvsp[-1].identifier));
		}
#line 1973 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 494 "interpreter.y" /* yacc.c:1652  */
    {   
 			execerror("Semantic error in \"read statement\": it is not allowed to modify a constant ",(yyvsp[-1].identifier));
		}
#line 1981 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 500 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new read node
			 (yyval.st) = new lp::LugarStmt((yyvsp[-3].expNode),(yyvsp[-1].expNode));
		}
#line 1990 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 506 "interpreter.y" /* yacc.c:1652  */
    { 
			// Create a new number node
			(yyval.expNode) = new lp::NumberNode((yyvsp[0].number));
		}
#line 1999 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 511 "interpreter.y" /* yacc.c:1652  */
    { 
			// Create a new number node
			(yyval.expNode) = new lp::StringNode((yyvsp[0].string));
		}
#line 2008 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 516 "interpreter.y" /* yacc.c:1652  */
    { 
			// Create a new plus node
			 (yyval.expNode) = new lp::PlusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		 }
#line 2017 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 522 "interpreter.y" /* yacc.c:1652  */
    {
			// Create a new minus node
			(yyval.expNode) = new lp::MinusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2026 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 528 "interpreter.y" /* yacc.c:1652  */
    { 
			// Create a new multiplication node
			(yyval.expNode) = new lp::MultiplicationNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2035 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 534 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new division node	
		  (yyval.expNode) = new lp::DivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 2044 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 540 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new division node	
		  (yyval.expNode) = new lp::DivisionEnteraNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 2053 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 545 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new division node	
		  (yyval.expNode) = new lp::ConcatenacionNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 2062 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 550 "interpreter.y" /* yacc.c:1652  */
    { 
		    // just copy up the expression node 
			(yyval.expNode) = (yyvsp[-1].expNode);
		 }
#line 2071 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 556 "interpreter.y" /* yacc.c:1652  */
    { 
		  // Create a new unary plus node	
  		  (yyval.expNode) = new lp::UnaryPlusNode((yyvsp[0].expNode));
		}
#line 2080 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 562 "interpreter.y" /* yacc.c:1652  */
    { 
		  // Create a new unary minus node	
  		  (yyval.expNode) = new lp::UnaryMinusNode((yyvsp[0].expNode));
		}
#line 2089 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 568 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new modulo node	

		  (yyval.expNode) = new lp::ModuloNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
       }
#line 2099 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 575 "interpreter.y" /* yacc.c:1652  */
    { 
		  // Create a new power node	
  		  (yyval.expNode) = new lp::PowerNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2108 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 581 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new variable node	
		  (yyval.expNode) = new lp::VariableNode((yyvsp[0].identifier));
		}
#line 2117 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 587 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new constant node	
		  (yyval.expNode) = new lp::ConstantNode((yyvsp[0].identifier));

		}
#line 2127 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 594 "interpreter.y" /* yacc.c:1652  */
    {
			// Get the identifier in the table of symbols as Builtin
			lp::Builtin *f= (lp::Builtin *) table.getSymbol((yyvsp[-3].identifier));

			// Check the number of parameters 
			if (f->getNParameters() ==  (int) (yyvsp[-1].parameters)->size())
			{
				switch(f->getNParameters())
				{
					case 0:
						{
							// Create a new Builtin Function with 0 parameters node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_0((yyvsp[-3].identifier));
						}
						break;

					case 1:
						{
							// Get the expression from the list of expressions
							lp::ExpNode *e = (yyvsp[-1].parameters)->front();

							// Create a new Builtin Function with 1 parameter node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_1((yyvsp[-3].identifier),e);
						}
						break;

					case 2:
						{
							// Get the expressions from the list of expressions
							lp::ExpNode *e1 = (yyvsp[-1].parameters)->front();
							(yyvsp[-1].parameters)->pop_front();
							lp::ExpNode *e2 = (yyvsp[-1].parameters)->front();

							// Create a new Builtin Function with 2 parameters node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_2((yyvsp[-3].identifier),e1,e2);
						}
						break;

					default:
				  			 execerror("Syntax error: too many parameters for function ", (yyvsp[-3].identifier));
				} 
			}
			else
	  			 execerror("Syntax error: incompatible number of parameters for function", (yyvsp[-3].identifier));
		}
#line 2177 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 641 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new "greater than" node	
 			(yyval.expNode) = new lp::GreaterThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2186 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 647 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new "greater or equal" node	
 			(yyval.expNode) = new lp::GreaterOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2195 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 653 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new "less than" node	
 			(yyval.expNode) = new lp::LessThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2204 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 659 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new "less or equal" node	
 			(yyval.expNode) = new lp::LessOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2213 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 665 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new "equal" node	
 			(yyval.expNode) = new lp::EqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2222 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 671 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new "not equal" node	
 			(yyval.expNode) = new lp::NotEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2231 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 677 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new "logic and" node	
 			(yyval.expNode) = new lp::AndNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2240 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 683 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new "logic or" node	
 			(yyval.expNode) = new lp::OrNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2249 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 689 "interpreter.y" /* yacc.c:1652  */
    {
		  // Create a new "logic negation" node	
 			(yyval.expNode) = new lp::NotNode((yyvsp[0].expNode));
		}
#line 2258 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 698 "interpreter.y" /* yacc.c:1652  */
    { 
          lp::VariableNode *var= new lp::VariableNode((yyvsp[-1].identifier));
         lp::NumberNode *plusone= new lp::NumberNode(1);
           lp::PlusNode *plus= new lp::PlusNode(var,plusone );
	  (yyval.st)=new lp::AssignmentStmt((yyvsp[-1].identifier),plus);
	}
#line 2269 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 705 "interpreter.y" /* yacc.c:1652  */
    { 
          lp::VariableNode *var= new lp::VariableNode((yyvsp[-1].identifier));
         lp::NumberNode *minusone= new lp::NumberNode(1);
           lp::MinusNode *minus= new lp::MinusNode(var,minusone );
	  (yyval.st)=new lp::AssignmentStmt((yyvsp[-1].identifier),minus);
	}
#line 2280 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 715 "interpreter.y" /* yacc.c:1652  */
    {
			    // Create a new list STL
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2289 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 721 "interpreter.y" /* yacc.c:1652  */
    {
				(yyval.parameters) = (yyvsp[0].parameters);

				// Insert the expression in the list of expressions
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2300 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 731 "interpreter.y" /* yacc.c:1652  */
    {
			    // Create a new list STL
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2309 "interpreter.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 737 "interpreter.y" /* yacc.c:1652  */
    {
				// Get the list of expressions
				(yyval.parameters) = (yyvsp[0].parameters);

				// Insert the expression in the list of expressions
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2321 "interpreter.tab.c" /* yacc.c:1652  */
    break;


#line 2325 "interpreter.tab.c" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 748 "interpreter.y" /* yacc.c:1918  */




