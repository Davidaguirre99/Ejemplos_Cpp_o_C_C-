#include<iostream>
#include<iomanip>
using namespace std;

	


int main()
{

    cout<<"Escriba dos cadenas :"<<endl;
    string cadenausuario;//="holay";
    //cout<<"holay"<<endl;
	cin>>cadenausuario;
	string nuevacadena;
	cin>>nuevacadena;
	//string nuevacadena="oapyh";
	//cout<<"oalyh"<<endl;
	int contador=0;
	for(int i=0;i<cadenausuario.length();i++)
	{
		for(int j=0;j<nuevacadena.length();j++)
		{
		if(cadenausuario[i]==nuevacadena[j])
		{
			contador++;
		}
	    }

	}
	if (contador==cadenausuario.length())
	{
		cout<<"La palabra ingresada es un anagrama"<<endl;
	}else
	{
		cout<<"La palabra ingresada no es un anagrama"<<endl;
	}
	 return 0;

}
