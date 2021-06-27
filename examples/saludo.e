<<
  Programa EJEMPLO de ipe.exe
  En este ejemplo nuestro programa puede hacer dos acciones distintas mostrando todas las capacidades de nuestro lenguaje:
  Calcular fibonacci
>>

#borrar;
#lugar(0,0);

escribir_cadena('Hola, ¿Cómo te llamas? ');
leer_cadena(nombre);

#borrar;
#lugar(0,0);

escribir_cadena('Bienvenido/a al intérprete de pseudocódigo en español ' || nombre || '.');

lugar(0,0);
escribir_cadena('Pulsa una tecla para continuar: ');
leer_cadena(pausa);

#borrar;
#lugar(0,0);
escribir_cadena('Saliendo...\n');
