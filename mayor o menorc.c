/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int a;
	int b;
	printf("Escriba el primer numero para comparar\n");
	scanf("%i",&a);
	printf("Escriba el segundo numero\n");
	scanf("%i",&b);
	if (a>b) {
		printf("%ies mayor que%i\n",a,b);
	} else {
		printf("%ies menor igual que %i\n",a,b);
	}
	return 0;
}

