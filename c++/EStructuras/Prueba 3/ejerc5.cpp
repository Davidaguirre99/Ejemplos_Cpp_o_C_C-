#include<iostream>
#include<math.h>
using namespace std;
struct Cliente
{
	int code;
	char name[30];
	int fare;
};
double calc(double sald );
Cliente call(Cliente);
double calc(double sald );
void impres(Cliente);
Cliente call(Cliente clientex)
{
	cout<<"Ingrese los datos de cliente: "<<endl;
	cout<<"Codigo:";
	cin >> clientex.code;
	cin.sync();
	cout <<"Nombre:";
	cin.getline(clientex.name , 30);
	cin.sync();
	cout<<"Saldo:";
	cin>>clientex.fare;
	cin.sync();
}
double calc(int sald )
{
	while(sald>=0&&sald<10)
	{
		sald -=1;
		return sald;
	}
	while(sald>=10&&sald<100)
	{
		sald =2*sald;
		return sald;
	}
		while(sald>=100)
	{
		float result;
		result=pow(sald,3);
		return result;
	}
	cout<<"El saldo no es valido"<<endl;
}
void impres(Cliente clientep)
{
	cout<<"Codigo:";
	cout<< clientep.code<<endl;
	cout<<"Nombre:";
	cout<< clientep.name<<endl;
	cout<<"Saldo:";
	cout<<clientep.fare<<endl;
}

int main()
{
    Cliente cliente1, cliente2, cliente3, cliente4;
    for (int i=0; i<4;i++)
     	call(cliente1);
    	calc(cliente1.fare);
    	impres(cliente1);
	    call(cliente2);
    	calc(cliente2.fare);
    	impres(cliente2);
    	call(cliente3);
    	calc(cliente3.fare);
    	impres(cliente3);
    	call(cliente4);
    	calc(cliente4.fare);
    	impres(cliente4);
	return 0;
}
