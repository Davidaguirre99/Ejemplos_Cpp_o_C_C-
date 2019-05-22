#include<iostream>

using namespace std;
int m, num;
int factorial(int num);
int factorialrecursivo(int num);
int main()
{
    int n; 
	int fact;
	cout<<"factorial de un numero entre 2 y 10. \n Ingrese un valor:";
	do
	{
		cout<<"Ingrese un valor\n";
	    cin>> n;
	}while(n<2||n>10);
    fact = factorial(n);
	cout<< "El factorial de "<< n << " es: "<< fact<<endl;

	fact=factorialrecursivo(n);
	cout<<"factorial recursivo es "<<fact<<endl;
	return 0;
}

int factorial (int num)
{
	for (m=num,m=1;num>1;m*=num--);
      
}
int factorialrecursivo (int num)
{
	
	return (num<=1) ? 1: factorial(num);
	
}
