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
	cout << tamanio<<endl;
	for (int i=0; i<tamanio-1;i++)
    {
    	if(cadena[i]==ESPACIO&&
		i == 0
		)
    	{
    		continue;
		}
		if(cadena[i]==ESPACIO&&
		cadena[i-1] != ESPACIO
		)
    	{
    		 palabras++;
		}
    }
	cout << "El total de palabras encontradas son: "<< palabras;
	return 0;
}
