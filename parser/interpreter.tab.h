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
    REPEAT = 270,
    UNTIL = 271,
    FOR = 272,
    FROM = 273,
    STEP = 274,
    ENDFOR = 275,
    CASES = 276,
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
#line 129 "interpreter.y" /* yacc.c:1921  */

  char * identifier; 				 
  double number;  
  bool logic;						 
  char* string;
  lp::ExpNode *expNode;  			 
  std::list<lp::ExpNode *>  *parameters;    // New in example 16; NOTE: #include<list> must be in interpreter.l, init.cpp, interpreter.cpp
  std::list<lp::Statement *> *stmts; 
  lp::Statement *st;		
  std::list<lp::CaseNode*> *cases_list;		
  lp::CaseNode * caso; 
  lp::AST *prog;					 

#line 136 "interpreter.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
