#include<iostream>
#include<string.h>
#define ESPACIO ' '
using namespace std;
int main()
{
    //string cadena= "Escuela Politecnica Nacional";
	char cadena[]="Escuela Politecnica Nacional";//cuando trabajamos con arrays de cadenas simpre al final automaticamente le pone un /0 que cuenta como un caracter mas
    //int tamanio = cadena.length();
	int tamanio = sizeof(cadena);
	char cadena2[tamanio];
	char *cadena3;
	//cadena3 = &cadena2;
	strcpy(cadena2,cadena);
	for (int i=tamanio-1; i>=0;i--)
	{
		cout<<cadena2[i]<<endl;
	}
return 0;
}
