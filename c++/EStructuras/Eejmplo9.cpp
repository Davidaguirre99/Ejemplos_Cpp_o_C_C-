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
Request ReadRequest(Request requestx)
{
	cout <<"Ingrese el nombre del Cliente: ";
	cin.getline(requestx.name, 35);//cin.sync();
	cout <<"Ingrese el unidades del Cliente: ";
	cin >>requestx.units;//cin.sync();
	cout <<"Ingrese el precio del Cliente: ";
    cin >>requestx.price;//cin.sync();
    cout <<"Ingrese el Estado (M=Moroso;P=Pagado;A=Aprobado) : ";
    cin >>requestx.state;//cin.sync();
    return requestx;
}

int main()
{
	Request request;
	Request answerrequest = ReadRequest(request);
	cout << "Los datos del cliente son: "<< answerrequest.name<<" "<<answerrequest.units<<" "<<answerrequest.price<<" "<<answerrequest.state<<endl;
	
	return 0;
}
