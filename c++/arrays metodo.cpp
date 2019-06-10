//Ejemplo paso de parametros por refrencia en arreglos
#include<iostream>
#include<string.h>
#define TAM_MAX 4
using namespace std;
void imprimirvalores(int a[], int tamanio);
int main()
{
	int valores[4] = {1,2,3,4};
	imprimirvalores(valores, TAM_MAX);
	return 0;
}
void imprimirvalores(int a[], int tamanio)
{
	//cout<< sizeof(a)/sizeof(a[0])<<endl;
	for(int i=0;i<tamanio;i++)
	{
	cout <<a[i]<<endl;
    }
}
