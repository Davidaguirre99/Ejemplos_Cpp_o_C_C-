/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

// Declaraciones adelantadas de las funciones
int sumados(SIN_TIPO valor1, SIN_TIPO valor2);
int sumar(SIN_TIPO valor1, SIN_TIPO valor2, SIN_TIPO valor3);

int sumados(SIN_TIPO valor1, SIN_TIPO valor2) {
	int devuelta;
	devuelta = valor1+valor2;
	return devuelta;
}

int sumar(SIN_TIPO valor1, SIN_TIPO valor2, SIN_TIPO valor3) {
	int retorno;
	retorno = valor1+valor2+valor3;
	return retorno;
}

/* problema incremente uno un valor dado en pantalla */
int main() {
	int r;
	int res;
	int sum;
	int x;
	int z;
	printf("escriba tress numero para ser sumados\n");
	scanf("%i",&x);
	scanf("%i",&sum);
	scanf("%i",&z);
	res = sumados(x,sum);
	r = sumar(x,sum,z);
	printf("la suma de los dos primeros es%i\n",res);
	printf("la suma de los tres numeros es%i\n",r);
	return 0;
}

