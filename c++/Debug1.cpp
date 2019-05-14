#include <iostream>
#include<stdlib.h>
using namespace std;

/* Algoritmo suma de 30 primeros numeros */

int main(int argc, char** argv) {
	system("pause");
	int acumulador=0;
for (int i=0;i<30;i++)
	{
	if(i%15==0){
		return 15;
	}
		acumulador += i;
		cout<<"el valor sumado es "<< acumulador<<endl;
	}
	
	return 0;
}
