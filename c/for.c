/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	float acum;
	float dato;
	int i;
	int n;
	float prom;
	printf("Ingrese la cantidad de datos:\n");
	scanf("%i",&n);
	acum = 0;
	for (i=1;i<=n;i+=1) {
		printf("Ingrese el dato %i:\n",i);
		scanf("%f",&dato);
		acum = acum+dato;
	}
	prom = acum/n;
	printf("El promedio es: %f\n",prom);
	return 0;
}

