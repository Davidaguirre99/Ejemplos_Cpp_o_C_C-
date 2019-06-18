#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	float Vect[6];
	for(int j=0;j<6; j++)
	{
		*(Vect+j)=(j+1)*10+1;
	}
	cout<<"    Direccion       Contenido"<<endl;
	for(int j=0;j<6;j++)
		{
			cout<<"Vect+"<< j <<" = "<<Vect+j;
			cout<<"Vect["<< j <<"] = "<<*(Vect+j)<<"\n";
		}
	
	
	
	return 0;
}
