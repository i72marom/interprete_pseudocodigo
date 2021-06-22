Escribir_cadena('Calculadora de la sucesion de fibonacci.\n');
Escribir_cadena('Se calcula hasta: ');
Leer(n);

a := 0;
b := 1;
c := 0;

para i desde 0 hasta n paso 1 hacer
	c := b + a;
	a := b;
	b := c;
fin_para;

Escribir_cadena('El resultado es: ');
Escribir(b);
Escribir_cadena('\n');
