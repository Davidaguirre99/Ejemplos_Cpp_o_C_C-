
#include<iostream>
#include<locale.h>
using namespace std;


#define cadena string
void Saludo(cadena saludo);
int sumados(int valor1, int valor2);
int sumar(int valor1, int valor2, int valor3);

void Saludo(cadena saludo)
{

cout << "Hola  " << saludo  << endl;
}
int sumados(int valor1, int valor2) {
	int devuelta;
	devuelta = valor1+valor2;
	return devuelta;
}

int sumar(int valor1, int valor2, int valor3) {
	int retorno;
	retorno = valor1+valor2+valor3;
	return retorno;
}

// problema incremente uno un valor dado en pantalla
int main() {
	int r;
	int res;
	int sum;
	int x;
	int z;
cadena nombre;
system("color F0");
	cout << "Escribe tu nombre"  <<endl;
	cin >> nombre ;
	Saludo( nombre );
	cout << "Escriba el primer numero para ser sumado" << endl;
	cin >> x ;
	system ("pause");
	cout << "Escriba el segundo numero para ser sumado" << endl;
	cin >> sum;
system ("pause");
cout << "Escriba el tercer numero para ser sumado" << endl;
	cin >> z;
	system ("pause");
	
	res = sumados(x,sum);
	r = sumar(x,sum,z);
	cout << "La suma de los dos primeros es  " <<  res  << endl;
	cout << "La suma de los tres numeros es  " <<  r  << endl;
	return 0;
}

