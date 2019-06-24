#include<iostream>
#include<cstdlib>
using namespace std;
struct Request
{char name[35];
long  units;
double price;
char state;
};

void ReadRequest(Request requestx[]);
void mostrardatos(Request request[]);
	
	
int main()
{
	// Request request[100];
	Request *request=new Request[100];
	ReadRequest(request);
    mostrardatos(request);
    delete[] request;
	return 0;
}
void ReadRequest(Request requestx[])
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
	
}

void mostrardatos(Request request[])
{
 //Request *request=new Request[100];
 for (int i=0;i<3;i++)
  {
	cout << "Los datos del cliente "<<i<<" son: "<< request[i].name<<" "<<request[i].units<<" "<<request[i].price<<" "<<request[i].state<<endl;
  }
}
	
