funcion devuelta <- sumados (valor1, valor2)
	definir devuelta como entero;
	devuelta= valor1 + valor2;
FinFuncion
Funcion retorno <- sumar ( valor1, valor2,valor3 )
	definir retorno como  entero;
	retorno= valor1 + valor2+valor3; 
Fin Funcion
//problema incremente uno un valor dado en pantalla

Algoritmo ejemplo_funcion
	definir x como entero;
	definir  sum como entero;
	definir z como entero;
	definir r como entero;
	definir res como entero;
	escribir "escriba tress numero para ser sumados";
	
	leer x, sum, z;
	res = sumados(x,sum);
	r= sumar( x , sum, z );

escribir "la suma de los dos primeros es", res;		
escribir "la suma de los tres numeros es", r;
FinAlgoritmo
