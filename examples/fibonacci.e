#borrar;
#lugar(0,0);

Escribir_cadena('Calculadora de la sucesion de fibonacci.\n');
Escribir_cadena('Se calcula hasta: ');
Leer(n);

si (n = 0) entonces 
	Escribir_cadena('El resultado es: ');
	Escribir(0);
	Escribir_cadena('\n');
si_no
si (n = 1) entonces 
	Escribir_cadena('El resultado es: ');
	Escribir(1);
	Escribir_cadena('\n');
si_no
	a := 1;
	b := 1;
	c := 0;

	para i desde 2 hasta n+1 paso 1 hacer
		c := b + a;
		a := b;
		b := c;
	fin_para;

	Escribir_cadena('El resultado es: ');
	Escribir(a);
	Escribir_cadena('\n');
fin_si;
fin_si;
