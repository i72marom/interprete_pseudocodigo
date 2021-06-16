/*! 
  \file interpreter.l
  \brief Lexical or scanner file
*/

%{
#include <iostream>

/* Macros for the screen */
#include "../includes/macros.hpp"

/*  interpreter.tab.h contains the numeric values of the tokens produced by the parser */
#include "interpreter.tab.h"

extern int lineNumber; //!< External line counter

%}

/*! \name REGULAR DEFINITIONS  */

DIGIT  [0-9]
NUMBER1 {DIGIT}+\.?
NUMBER2 {DIGIT}*\.{DIGIT}+

/*! \name REGULAR EXPRESSIONS  */
%%

[ \t] 	{ ; }    /* skip white space and tabulator */

\n { 
	/* Line counter */
	lineNumber++; 
	return '\n';
}

(?i:leer)            {return LEER;}
(?i:leer_cadena)     {return LEER_CADENA;}
(?i:escribir)        {return ESCRIBIR;}
(?i:escribir_cadena) {return ESCRIBIR_CADENA;}
(?i:si)              {return SI;}
(?i:entonces)        {return ENTONCES;}
(?i:si_no)           {return SI_NO;}
(?i:fin_si)          {return FIN_SI;}
(?i:mientras)        {return MIENTRAS;}
(?i:hacer)           {return HACER;}
(?i:fin_mientras)    {return FIN_MIENTRAS;}
(?i:repetir)         {return REPETIR;}
(?i:hasta)           {return HASTA;}
(?i:para)            {return PARA;}
(?i:fin_para)        {return FIN_PARA;}
(?i:desde)           {return DESDE;}
(?i:paso)            {return PASO;}
(?i:casos)           {return CASOS;}
(?i:valor)           {return VALOR;}
(?i:defecto)         {return DEFECTO;}
(?i:fin_casos)       {return FIN_CASOS;}
(?i:verdadero)       {return VERDADERO;}
(?i:falso)           {return FALSO;}

(?i:#mod)    {return MOD;}
(?i:#div)    {return DIV;}
(?i:#o)      {return O;}
(?i:#y)      {return Y;}
(?i:#no)     {return NO;}
(?i:#borrar) {return BORRAR;}
(?i:#lugar)  {return LUGAR;}


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

<<EOF>> { /* The interpreter finishes when finds the end of file character */
		 // PLACE(24,10);
		  std::cout <<  BICYAN;
		  std::cout <<  ">>>>>>> End of file <<<<<<<";
		  std::cout << std::endl;
		  std::cout << RESET;
		  // PLACE(25,1);

		  return 0;
	}

.       { 
			/* Any other character */
			return yytext[0];
		}
%%
