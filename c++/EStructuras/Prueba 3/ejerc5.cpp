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
double calc(double sald )
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
    Cliente cliente[4];
    for (int i=0; i<4;i++)
    {
    	call(cliente[i]);
    	calc(cliente[i].fare);
    	impres(cliente[i]);
	}
	
	
	 
	return 0;
}
