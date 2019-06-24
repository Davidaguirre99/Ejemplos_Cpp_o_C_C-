#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
struct Request
{char name[35];
long  units;
double price;
char state;
};

Request* ReadRequest(Request requestx[]);
void mostrardatos(Request request[]);
	
//ejemplo 11 y 12	
int main()
{
	// Request request[100];
	Request *request=new Request[100];
	Request *request2=  ReadRequest(request);
    strcpy(request[0].name, "CR7");
    mostrardatos(request2);
	delete[] request;
	return 0;
}
Request* ReadRequest(Request requestx[])
{
	char limpiarbuffer[4];
	for(int i=0;i<3;i++)
	{
	cout <<"Ingrese el nombre del Cliente "<<i<<" :";
	cin.getline(requestx[i].name, 35);//cin.sync();
	cout <<"Ingrese el unidades del Cliente "<<i<<" :";
	cin >>requestx[i].units;//cin.sync();
	cout <<"Ingrese el precio del Cliente: "<<i<<" :";
    cin >>requestx[i].price;//cin.sync();
    cout <<"Ingrese el Estado (M=Moroso;P=Pagado;A=Aprobado) : ";
    cin >>requestx[i].state;//cin.sync();
    cin.getline(limpiarbuffer,4);
	}
    return requestx;
}

void mostrardatos(Request request[])
{
 //Request *request=new Request[100];
 for (int i=0;i<3;i++)
  {
	cout << "Los datos del cliente "<<i<<" son: "<< request[i].name<<" "<<request[i].units<<" "<<request[i].price<<" "<<request[i].state<<endl;
  }
}
	
