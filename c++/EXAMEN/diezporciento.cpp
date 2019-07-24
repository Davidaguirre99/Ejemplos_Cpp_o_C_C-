#include<iostream>
#include<iomanip>
using namespace std;
float diezPorciento(float cantidaddepositada);
int i=1;
float diezPorciento(float cantidaddepositada)
{
   if(cantidaddepositada<2000)
   {
    float resultado;
	
   resultado =0.1*cantidaddepositada+cantidaddepositada;
	cout<<setw(5)<<i<<setw(15)<<resultado<<endl;
	i++;
    return diezPorciento(resultado);
   }else
   {
   	return 0;
   }
	
}

int main()
{
float cantidadinicial=1000;
    cout<<setw(5)<<"Monto Inicial:"<<cantidadinicial<<endl;
	cout<<setw(5)<<"Interes:"<<"10%"<<endl;
	cout<<setw(5)<<"Monto Objetivo:"<<2000<<endl;
	cout<<setw(5)<<"Anios"<<setw(15)<<"Depositado"<<endl;
	cout<<setw(5)<<"0"<<setw(15)<<cantidadinicial<<endl;
	 diezPorciento(cantidadinicial);
	 return 0;

}
