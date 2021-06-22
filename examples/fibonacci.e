#borrar;

Escribir_cadena('Calculadora de la sucesion de fibonacci.\n');
Escribir_cadena('Se calcula hasta: ');
Leer(n);

si n = 0
	entonces Escribir(0);
sino
si n = 1
	entonces Escribir(1);
sino
	a := 1;
	b := 1;
	c := 0;

	para i desde 0 hasta n paso 1 hacer
		c := b + a;
		a := b;
		b := c;
	fin_para;

	Escribir_cadena('El resultado es: ');
	Escribir(a);
	Escribir_cadena('\n');
fin_si;
fin_si;
