#include<iostream>
#include<cstdlib>
using namespace std;
struct Request
{char name[35];
long  units;
double price;
char state;
};
//Paso de parametros por valor
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

int main()
{
	Request request[100];
	ReadRequest(request);
	//cout << "Los datos del cliente son: "<< answerrequest.name<<" "<<answerrequest.units<<" "<<answerrequest.price<<" "<<answerrequest.state<<endl;
	for (int i=0;i<3;i++)
	{
		cout << "Los datos del cliente "<<i<<" son: "<< request[i].name<<" "<<request[i].units<<" "<<request[i].price<<" "<<request[i].state<<endl;
	}
	return 0;
}
