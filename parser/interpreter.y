/*! 
  \file interpreter.y
  \brief Grammar file
*/

%{
#include <iostream>
#include <string>

/* Error recovery functions */
#include "../error/error.hpp"

/* Macros for the screen */
#include "../includes/macros.hpp"


/*! 
	\brief  Lexical or scanner function
	\return int
	\note   C++ requires that yylex returns an int value
	\sa     yyparser
*/
int yylex();

extern int lineNumber; //!<  External line counter

%}

/* In case of a syntactic error, more information is shown */
%error-verbose

//! \name Grammar symbols

/* Initial grammatical symbol */
%start program 

/* Defined token */
%token LEER
%token LEER_CADENA
%token ESCRIBIR
%token ESCRIBIR_CADENA
%token SI
%token ENTONCES
%token SI_NO
%token FIN_SI
%token MIENTRAS
%token HACER
%token FIN_MIENTRAS
%token REPETIR
%token HASTA
%token PARA
%token FIN_PARA
%token DESDE
%token PASO
%token CASOS
%token VALOR
%token DEFECTO
%token FIN_CASOS
%token VERDADERO
%token FALSO
%token MOD
%token DIV
%token O
%token Y
%token NO
%token BORRAR
%token LUGAR

/* Left associativity  */

/* Minimum precedence */
%left '+' '-'

/* Maximum precedence */
%left '*' '/'

%%
//! \name Grammar rules

program : stmtlist { 
	std::cout << "program --> stmtlist" << std::endl;
}; 

stmtlist:  /* Empty: epsilon rule */
{ std::cout << "stmtlist -->  epsilon " << std::endl; }

| stmtlist '\n'  /* Empty line */
{ std::cout << "stmtlist -->  '\\n' " << std::endl; }

| stmtlist exp '\n'
{
	std::cout << "stmtlist --> stmtlist exp '\\n' " << std::endl;

	std::cout << BIYELLOW; 
	std::cout << "Correct expression " << std::endl << std::endl;
	std::cout << RESET; 
}

| stmtlist error '\n' 
{
	// The function yyerror is called
	// If %error-verbose is used then an error message is displayed

	std::cout << "stmtlist -->  stmtlist error '\\n' " << std::endl;
};

exp: LEER 
{ std::cout << "exp --> LEER" << std::endl;};
 
%%

