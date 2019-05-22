#include<iostream>
using namespace std;
int fibonacci(int num);
int main()
{
	int n; 
	int result;
	cout<<"Calcular serie de fibonacci de numero ingrsado\n";
	cout<<"ingrese un valor: \n";
	cin>> n;
	for(int i=0;i<n;i++)
	{
	cout << fibonacci(i)<<" ";
	
    }
    result= fibonacci (n)
    cout<<"el resultado de fibonacci de "<<n<< " es "<< result<<endl;
	return 0;
}

int fibonacci(int num)
{
	if(num==0)
	{
		return 0;
	}
	if(num==1)
	return 1;
	return fibonacci(num-1)+fibonacci(num-2);	
}
