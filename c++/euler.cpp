#include<iostream>
using namespace std;
int num;
int factorial(int n);

//float euler(int num, int fact);




/*float euler(int num=1, int fact)
{
	for (fact=1;fact<n;fact++)
	{
	numeuler= num*factorial(precision)
	return numeuler;
	  }

}*/

int main()
{
 int  euler;
cout<<"Ingrese  que tanta precision quiere para la constante euler\n";
cin>> num;
euler=factorial(num);
cout<<euler<<endl;
}
int factorial(int n)
{
	
	int result=1;
	for(int i=0;i<num;i++)
	{
	cout<< i<<endl;
	result=result*(i+1);
	return result;
	}

}
