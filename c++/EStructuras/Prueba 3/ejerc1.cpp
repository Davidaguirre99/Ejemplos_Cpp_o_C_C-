#include<iostream>
using namespace std;
void Calcular (int* valor) 
{ 
  *valor *= *valor; 
 
} 

int main()
{
    int n=3;
   cout << Calcular(n);
	return 0;
}//Rango A=65 hasta 90=Z y en el 97=a hasta 122=z 
