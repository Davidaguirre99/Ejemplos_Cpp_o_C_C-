/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int contador;
	int dav;
	contador = 0;
	printf("ingrese una opcion pe oe solo del 1 al 3 no mas\n");
	scanf("%i",&dav);
	switch (dav) {
	case 1:
		contador = contador+1;
		printf("%i\n",contador);
		break;
	case 2:
		contador = contador+1;
		printf("%i\n",contador);
		break;
	case 3:
		contador = contador+1;
		printf("%i\n",contador);
		break;
	default:
		printf("opcion invalida\n");
	}
	return 0;
}

