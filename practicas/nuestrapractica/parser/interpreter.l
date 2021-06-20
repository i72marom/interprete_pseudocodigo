/*! 
  \file interpreter.l
  \brief Lexical or scanner file
*/
%{
#include <iostream>

/*********************/
/* NEW in example 4 */
/* atof */
#include <stdlib.h>
/*********************/

/* Macros for the screen */
#include "../includes/macros.hpp"

/*********************/
/* 
  NEW in example 16 
  AST class
  IMPORTANT: must be written before interpreter.tab.h
*/
#include "../ast/ast.hpp"
/*********************/

/*  interpreter.tab.h contains the numeric values of the tokens produced by the parser */
#include "interpreter.tab.h"

/********************/
/* NEW in example 3 */
#include "../error/error.hpp"
/********************/


/*********************************************/
/* NEW in example 7 */
/* Table of symbols */
#include "../table/table.hpp"

#include "../table/numericVariable.hpp"

extern lp::Table table; //!< External Table of Symbols
/*********************************************/

extern int lineNumber; //!< External line counter

/* uso de strdup */
#include <string.h>
std::string str;

%}


/*! \name REGULAR DEFINITIONS  */

DIGIT  [0-9] 
LETTER [a-zA-ZáàéèíìóòúùÁÀÉÈÍÌÓÒÚÙ]

NUMBER1 {DIGIT}+\.?([Ee][\+\-]?{DIGIT}+)?
NUMBER2 {DIGIT}*\.{DIGIT}+?([Ee][\+\-]?{DIGIT}+)?

ERROR_NUMERO_1 {DIGIT}[a-df-zA-DF-Z_]+({DIGIT}|[a-df-zA-DF-Z_])*
ERROR_NUMERO_2 {DIGIT}+\.?[Ee][Ee]+[\+\-]?
ERROR_NUMERO_3 {DIGIT}*\.{DIGIT}+[Ee][Ee]+[\+\-]?
ERROR_NUMERO_4 {DIGIT}+\.?[Ee][\+\-]?
ERROR_NUMERO_5 {DIGIT}*\.{DIGIT}+[Ee][\+\-]?

IDENTIFIER  {LETTER}((_)?({LETTER}|{DIGIT})+)*
ID_ERRONEO_1 {LETTER}((_)?({LETTER}|{DIGIT})+)*_+
ID_ERRONEO_2 {LETTER}({LETTER}|{DIGIT})*(__+({LETTER}|{DIGIT})*)+

/* ESTADOS  */
%x ERROR
%x COMENTARIO
%x CADENA

/*! \name REGULAR EXPRESSIONS  */
%%

[ \t] 	{ ; }    /* skip white space and tabular */

\n      { lineNumber++; }

@ 		{
			BEGIN COMENTARIO;
		}
<COMENTARIO>@		{BEGIN 0;}
<COMENTARIO>.		{;}
<COMENTARIO>[\t]	{;}
<COMENTARIO>[\n]	{lineNumber++;}

";"		{return SEMICOLON;}
","		{return COMMA;}

<CADENA>"'"			{
						BEGIN 0;
						yylval.chain = strdup(str.c_str();return STRING;)
					}
<CADENA>\\'			{str=str+"'";}
<CADENA>\\t			{str=str+"\t";}
<CADENA>\\n			{str=str+"\n";}
<CADENA>\\.			{str=str+yytext;}

\|\|				{return CONCATENACION;}

{NUMBER1}|{NUMBER2}  {
					  /* MODIFIED in example 4 */
					  /* Conversion of type and sending of the numerical value to the parser */
					   yylval.number = atof(yytext); 

                       return NUMBER; 
                      }


{IDENTIFIER}   		 {
						 /* NEW in example 7 */
						 std::string identifier(yytext);

						/* 
                          strdup() function returns a pointer to a new string 
                          which  is a duplicate of the string yytext
                        */
						  yylval.identifier =  strdup(yytext); 

						/* If the identifier is not in the table of symbols then it is inserted */	
						 if (table.lookupSymbol(identifier) == false)
							{
								/* 
								 The identifier is inserted into the symbol table 
								 as undefined Variable with value 0.0
								*/
								lp::NumericVariable *n = new lp::NumericVariable(identifier,VARIABLE,UNDEFINED,0.0);

								/* A pointer to the new NumericVariable is inserted into the table of symbols */
								table.installSymbol(n);

								return VARIABLE;
							}

						/* MODIFIED in example 11 */
						/* 
							If the identifier is in the table of symbols then its token is returned 
								The identifier can be a variable or a numeric constant
						*/
						else 
							{
								lp::Symbol	*s = table.getSymbol(identifier);

/*
								std::cout << "lex: "<< s->getName() 
										  << "token " << s->getToken()
  										  << std::endl; 
*/

								/*  If the identifier is in the table then its token is returned  */
								return s->getToken();
							}
                     }

"-"		{ return MINUS;  } 			
"+"		{ return PLUS;   } 			

"*"	    { return MULTIPLICATION; } 	
"/"     { return DIVISION; } 		
"("     { return LPAREN; } 			
")"	    { return RPAREN; } 			


"#div"		{ return DIVISION_ENTERA;}
"#mod"     	{ return MODULO; }			

/* AMPLIACION */
"++"		{ return AUMENTO; }
"--"		{ return DISMINUCION; }
"+:="		{ return AUMENTO_IGUAL; }
"-:="		{ return DISMINUCION_IGUAL; }

"**"	    { return POWER; }			
":=" 		{ return ASSIGNMENT; }		
"="			{ return EQUAL; }			
"<>"		{ return NOT_EQUAL; }		
">="		{ return GREATER_OR_EQUAL; }
"<="		{ return LESS_OR_EQUAL; }	
">"			{ return GREATER_THAN; }	
"<"			{ return LESS_THAN; }	

"#no"		{ return NOT; }				
"#o"		{ return OR; }				
"#y"		{ return AND; }		

"{"			{ return LETFCURLYBRACKET; } 	
"}"			{ return RIGHTCURLYBRACKET; }	

(?i:#borrar)		{return BORRAR;}
(?i:#lugar)			{return LUGAR;}

^# { /* The interpreter finishes when the symbol # is written at the beginning of the line */
	// std::cout << CLEAR_SCREEN; 
	//  PLACE(24,10);
  	  std::cout <<  BIYELLOW;
   	  std::cout <<  ">>>>>>> End of program <<<<<<<";
 	  std::cout << std::endl;
   	  std::cout << RESET;
	 // PLACE(25,1);

  	  return 0;
	}


{ERROR_NUMERO_1}					{warning("Error Léxico: ", "Número mal escrito.");}
{ERROR_NUMERO_2}|{ERROR_NUMERO_3}	{warning("Error Léxico: ", "Has puesto dos exponentes seguidos.");}
{ERROR_NUMERO_4}|{ERROR_NUMERO_5}	{warning("Error Léxico: ", "Error en el exponente.");}

{ID_ERRONEO_1}|{ID_ERRONEO_2}		{warning("Error Léxico: ", "Nombre del identificador erróneo.");}

<<EOF>> { return 0; }

.								{ 	
									/* Any other character */
									
									/* Change to error state */
									BEGIN(ERROR); 

									/* 
										The current value of yytext 
										will be concatenated with the next character
									*/
									yymore();  
								}

<ERROR>[^0-9+\-*/()\^% \t\n\;a-zA-Z=<>!&]	{
								  
								  /* 
									The current value of yytext 
									will be concatenated with the next character
								  */
									yymore(); 
								}

<ERROR>(.|\n)                { 
								/* NEW in example 3 */
								/* Rewind one position */
								yyless(yyleng-1); 

								/* Display the error message */
								warning("Lexical error", yytext);

								/* Restore the initial state */
   								BEGIN(INITIAL);
							}
%%

