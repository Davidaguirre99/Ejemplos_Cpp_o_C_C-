/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

int main() {
	char anio[MAX_STRLEN][4];
	char anio2[MAX_STRLEN];
	char dato2[MAX_STRLEN];
	int dav;
	bool lco;
	bool logi;
	bool opl;
	char port[MAX_STRLEN];
	int vilm;
	float weezer;
	dav = 5;
	port = "5";
	dato2 = "5";
	vilm = -4;
	weezer = 3.156;
	anio[0] = "2";
	anio[1] = "0";
	anio[2] = "1";
	anio[3] = "9";
	anio2 = "2019";
	opl = true;
	logi = false;
	lco = false;
	printf("Estos son las variables definidas \n");
	printf("%i\n",dav);
	printf("%i\n",vilm);
	printf("%s\n",port);
	printf("Esta es una variable del tipo caracter\n");
	printf("%s%s%s%s\n",anio[0],anio[1],anio[2],anio[3]);
	printf("%s\n",dato2);
	printf("%s\n",anio2);
	printf("%f\n",weezer);
	printf("%i\n",opl);
	printf("%i\n",logi);
	printf("%i\n",lco);
	return 0;
}

