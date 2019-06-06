#include<iostream>
#define ESPACIO ' '
using namespace std;
int main()
{
    //string cadena= "Escuela Politecnica Nacional";
	char cadena[]="Escuela Politecnica Nacional";//cuando trabajamos con arrays de cadenas simpre al final automaticamente le pone un /0 que cuenta como un caracter mas
    //int tamanio = cadena.length();
	int tamanio = sizeof(cadena);
	int palabras=0;
	cout << tamanio-1<<endl;
	for (int i=tamanio-1; i>=0;i--)
	{
		cout<<cadena[i]<<endl;
	}
return 0;
}
