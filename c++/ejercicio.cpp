/*
Pablo Sarzosa
Fxtorial de un numero
*/
#include <iostream>
using namespace std;
int valor;
int num;
int numero;
void factorialDeUnNumero(int numero);


int factorialDeUnNumero(int numero){
	int res;
	
	if(num==1 or num==0){
		res=1;
	}
	else{
	
	res=numero*factorialDeUnNumero(numero-1);
	
}
return res;
}
int main (){
	int res;
	cout<<"Introduce un numero para saber su factorial: ";
	cin>>numero;
	valor=numero;
	if(numero==0){
		cout<<"El factorial es: "<<numero;
	
	}
	
	else {
	factorialDeUnNumero(numero);
	}
}
