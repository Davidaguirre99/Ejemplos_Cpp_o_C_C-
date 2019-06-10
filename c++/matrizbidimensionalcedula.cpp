//EJEMPLO DE VALIDACION CEDULA CONARREGLOS BIDIEMNSIONales (matriz tabla)
#include<iostream>
using namespace std;
int main()
{
	string cedula = "0653102020";//Hardcode
//	int matriz[3][9]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18},{19,20,21,22,23,24,25,26,27}};
	int matriz[3][9]={0};
	int filas=3,columnas =9, sumatotal;
	cout<< cedula<<endl;
	for(int columns=0;columns<columnas;columns++)
	{
		if(columns%2==0)
		{
		matriz[0][columns]=2;
	    }else
		{
		  matriz[0][columns]=1;
		  //matriz[2]	[columns]= (matriz [0][columns]*matriz[1][columns]>=10?matriz [0][columns]*matriz[1][columns]-9:matriz [0][columns]*matriz[1][columns]);
		}   
		matriz[1][columns] = cedula [columns] - '0';
		matriz[2][columns]=matriz[0][columns]*matriz[1][columns];
		if(matriz[2][columns]>=10)
		{
		 	matriz[2][columns] -= 9;
		}
	sumatotal += matriz[2][columns];
	}
	for (int h=0;h<3;h++)
	{
		for (int v=0; v<9; v++)
		{
			//matriz[h][v]=0;
			cout << matriz[h][v]<<"\t";
		}
		cout<<endl;
	}
	//cout << sumatotal;
	int comprobante =10-sumatotal%10;
	if(comprobante== (int)cedula[9]-48)
	{
		cout<< "Cedula Valida"<<endl;
	}else
	{
		comprobante = 0;
		if(comprobante == (int)cedula[9]-48)
		{
			cout<<"Cedula valida"<<endl;
		}else
		{
		  cout << "Cedula INVALIDA" <<endl;
		}
		
	}
	
	
	return 0;
}
