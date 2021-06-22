/*! 
  \file interpreter.l
  \brief Lexical or scanner file
*/
%{
#include <iostream>

/*********************/

/* atof */
#include <stdlib.h>
#include <string>
/*********************/

/* Macros for the screen */
#include "../includes/macros.hpp"

/*********************/
/* 
  AST class
  IMPORTANT: must be written before interpreter.tab.h
*/
#include "../ast/ast.hpp"
/*********************/

/*  interpreter.tab.h contains the numeric values of the tokens produced by the parser */
#include "interpreter.tab.h"

/********************/

#include "../error/error.hpp"
/********************/


/*********************************************/

/* Table of symbols */
#include "../table/table.hpp"

#include "../table/numericVariable.hpp"

extern lp::Table table; //!< External Table of Symbols
/*********************************************/

extern int lineNumber; //!< External line counter

std::string str;//!< Para guardar las cadenas

%}


/*! \name REGULAR DEFINITIONS  */

DIGIT  [0-9] 

LETTER [a-zA-ZáàéèíìóòúùÁÀÉÈÍÌÓÒÚÙ]

/*NUMBERS*/
NUMBER_1 {DIGIT}+\.?([Ee][\+\-]?{DIGIT}+)?
NUMBER_2 {DIGIT}*\.{DIGIT}+([Ee][\+\-]?{DIGIT}+)?






NUMBER_ERROR_1  [0-9]+[a-df-zA-DF-Z_]+([0-9]|[a-df-zA-DF-Z_])





NUMBER_ERROR_2 {DIGIT}+\.?[Ee][Ee]+[\+\-]?
NUMBER_ERROR_3 {DIGIT}*\.{DIGIT}+[Ee][Ee]+[\+\-]?
NUMBER_ERROR_4 {DIGIT}+\.?[Ee][\+\-]?
NUMBER_ERROR_5 {DIGIT}*\.{DIGIT}+[Ee][\+\-]?


/*IDS*/
IDENTIFIER  {LETTER}((_)?({LETTER}|{DIGIT})+)*
ID_ERROR_1  {LETTER}((_)?({LETTER}|{DIGIT})+)*_+
ID_ERROR_2  {LETTER}({LETTER}|{DIGIT})*(__+({LETTER}|{DIGIT})*)+


/* STATE  */
%x ERROR
%x COMENTARIO
%x CADENA
/*! \name REGULAR EXPRESSIONS  */
%%

[ \t] 	{ ; }    /* skip white space and tabular */

\n      { lineNumber++; }





(\<\<) 					{BEGIN COMENTARIO;}
<COMENTARIO>(\>\>)		{BEGIN 0;}
<COMENTARIO>[ \t]		{;}
<COMENTARIO>[\n]		{lineNumber++;}
<COMENTARIO>.			{;}

@.*		{}

";"		{
			
			return SEMICOLON;
		}


","		{
			
			return COMMA;
		}

"'"	{BEGIN CADENA;str="";}

<CADENA>"'"		{BEGIN 0;yylval.string=strdup(str.c_str());return STRING;}
<CADENA>\\'		{str=str+"'";}
<CADENA>\\n		{str=str+"\n";}
<CADENA>\\t		{str=str+"\t";}
<CADENA>.		{str=str+yytext;}

{NUMBER_1}|{NUMBER_2}  {
					  /* MODIFIED in example 4 */
					  /* Conversion of type and sending of the numerical value to the parser */
					   yylval.number = atof(yytext); 

                       return NUMBER; 
                      }


{IDENTIFIER}   		 {
						 
						 std::string identifier(yytext);
						for(int x=0;x<identifier.size();x++){
							identifier[x]= tolower (identifier[x]);
						}
						/* 
                          strdup() function returns a pointer to a new string 
                          which  is a duplicate of the string yytext
                        */
						  yylval.identifier =  strdup(identifier.c_str()); 
 						/*Recorremos la cadena, así pasamos las mayusculas a minusculas*/

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
"++"	{ return AUMENTO;}
"--"	{ return DISMINUCION;}
"+:="	{ return AUMENTO_IGUAL;}
"-:="	{ return DISMINUCION_IGUAL;}
":"		{ return TWO_POINTS;}
"*"	    { return MULTIPLICATION; } 	
"/"     { return DIVISION; } 		
"("     { return LPAREN; } 			
")"	    { return RPAREN; } 		
"#div"	{ return DIVISION_ENTERA;}	
\|\|	{ return CONCATENACION;}
"#mod"  { return MODULO; }			
"**"	{ return POWER; }			
":=" 	{ return ASSIGNMENT; }		
"="		{ return EQUAL; }			
"<>"	{ return NOT_EQUAL; }		
">="	{ return GREATER_OR_EQUAL; }
"<="	{ return LESS_OR_EQUAL; }	
">"		{ return GREATER_THAN; }	
"<"		{ return LESS_THAN; }		
"_no"	{ return NOT; }				
"_o"	{ return OR; }				
"_y"	{ return AND; }				
"{"		{ return LETFCURLYBRACKET; } 	
"}"		{ return RIGHTCURLYBRACKET; }	
(?i:#borrar)    {return BORRAR;}
(?i:#lugar)     {return LUGAR; }


{NUMBER_ERROR_1}													{warning("Error lexico:","Numero Erróneo.");}
{NUMBER_ERROR_2}|{NUMBER_ERROR_3}|{NUMBER_ERROR_4}|{NUMBER_ERROR_5} {warning("Error lexico:","Error en el exponente.");}

{ID_ERROR_1}|{ID_ERROR_2}	{warning("Error lexico:","Identificador erróneo.");}

<<EOF>> {
	  	  return 0;
	}


.								{ 	
									BEGIN(ERROR); 
									yymore();  
								}

<ERROR>[^0-9+\-*/()\^% \t\n\;a-zA-Z=<>!&]	{ 
									yymore(); 
								}

<ERROR>(.|\n)                { 

								/* Rewind one position */
								yyless(yyleng-1); 

								/* Display the error message */
								warning("Lexical error", yytext);

								/* Restore the initial state */
   								BEGIN(INITIAL);
							}
%%

