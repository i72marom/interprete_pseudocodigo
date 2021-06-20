/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    PRINT_CHAIN = 260,
    READ = 261,
    READ_CHAIN = 262,
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
    BORRAR = 276,
    LUGAR = 277,
    ESPERAR = 278,
    LETFCURLYBRACKET = 279,
    RIGHTCURLYBRACKET = 280,
    ASSIGNMENT = 281,
    PLUS_ASSIGNMENT = 282,
    MINUS_ASSIGNMENT = 283,
    COMMA = 284,
    NUMBER = 285,
    CHAIN = 286,
    BOOL = 287,
    VARIABLE = 288,
    UNDEFINED = 289,
    CONSTANT = 290,
    BUILTIN = 291,
    OR = 292,
    AND = 293,
    GREATER_OR_EQUAL = 294,
    LESS_OR_EQUAL = 295,
    GREATER_THAN = 296,
    LESS_THAN = 297,
    EQUAL = 298,
    NOT_EQUAL = 299,
    NOT = 300,
    PLUS = 301,
    MINUS = 302,
    PLUSPLUS = 303,
    MINUSMINUS = 304,
    MULTIPLICATION = 305,
    DIVISION = 306,
    MODULO = 307,
    DIVISION_ENTERA = 308,
    CONCATENACION = 309,
    LPAREN = 310,
    RPAREN = 311,
    UNARY = 312,
    POWER = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 131 "interpreter.y" /* yacc.c:1921  */

  char * identifier; 				 /* NEW in example 7 */
  double number;  
  bool logic;						 /* NEW in example 15 */
  char* chain;
  lp::ExpNode *expNode;  			 /* NEW in example 16 */
  std::list<lp::ExpNode *>  *parameters;    // New in example 16; NOTE: #include<list> must be in interpreter.l, init.cpp, interpreter.cpp
  std::list<lp::Statement *> *stmts; /* NEW in example 16 */
  lp::Statement *st;				 /* NEW in example 16 */
  lp::AST *prog;					 /* NEW in example 16 */

#line 129 "interpreter.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
