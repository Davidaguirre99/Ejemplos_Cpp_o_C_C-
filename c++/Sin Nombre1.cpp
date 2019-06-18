/*Autores : Ricardo Barros y Brayan Cunduri.
tres en raya
*/

#include<iostream>
using namespace std;
int const tamFila=3;
int const tamCol=3;
void dibujarTableroInicio(int tablero[][tamCol]);
void llenarTablero(int tablero[][tamCol], int opcion);
void preguntarP(int opcion, int jugador, int tablero[][tamCol]);

void llenarTablero(int tablero[][tamCol], int opcion){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(tablero[i][j]==1){
				cout<<"X";
			}
			if(tablero[i][j]==2){
				cout<<"O";
			}
			
			if(i<2){
				cout<<"_";	
			}
			if(i==2){
				cout<<" ";
			}
			if(j<2){
				cout<<"|";
			}
		}cout<<endl;
	}
}
void dibujarTableroInicio(int tablero[][tamCol]){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){	
				if(i<2){
					cout<<"_";	
				}
				if(i==2){
				cout<<" ";
				}
			if(j<2){
				cout<<"|";
			}
		}cout<<endl;
	}
}



int main(){
	int tablero[tamCol][tamFila]={};
	int opcion;
	int jugador;
	cout<<'\t'<<"Tres en Raya"<<endl<<"Jugador 1 [X]"<<'\t'<<"Jugador 2 [0]"<<endl;
	
	dibujarTableroInicio(tablero);
	cout<<"Empieza jugador 1";
	cout<<endl;
	jugador=1;
	
	preguntarP(opcion, jugador, tablero);
	cout<<jugador;
}

void preguntarP(int opcion, int & jugador, int tablero[][tamCol]){
	cout<<endl;
	cout<<"Ingrese la posicion: ";
	cin>>opcion;
	if(jugador==1){
		switch(opcion){
		case 1:
			tablero[0][0]=1;
			llenarTablero(tablero, opcion);
		break;
		case 2:
			tablero[0][1]=1;
			llenarTablero(tablero, opcion);
		break;
		case 3:
			tablero[0][2]=1;
			llenarTablero(tablero, opcion);
		break;
		case 4:
			tablero[1][0]=1;
			llenarTablero(tablero, opcion);
		break;
		case 5:
			tablero[1][1]=1;
			llenarTablero(tablero, opcion);
		break;
		case 6:
			tablero[1][2]=1;
			llenarTablero(tablero, opcion);
		break;
		case 7:
			tablero[2][0]=1;
			llenarTablero(tablero, opcion);
		break;
		case 8:
			tablero[2][1]=1;
			llenarTablero(tablero, opcion);
		break;
		case 9:
			tablero[2][2]=1;
			llenarTablero(tablero, opcion);
		break;	
	}	
	}
	if(jugador==2){
		switch(opcion){
		case 1:
			tablero[0][0]=1;
			llenarTablero(tablero, opcion);
		break;
		case 2:
			tablero[0][1]=1;
			llenarTablero(tablero, opcion);
		break;
		case 3:
			tablero[0][2]=1;
			llenarTablero(tablero, opcion);
		break;
		case 4:
			tablero[1][0]=1;
			llenarTablero(tablero, opcion);
		break;
		case 5:
			tablero[1][1]=1;
			llenarTablero(tablero, opcion);
		break;
		case 6:
			tablero[1][2]=1;
			llenarTablero(tablero, opcion);
		break;
		case 7:
			tablero[2][0]=1;
			llenarTablero(tablero, opcion);
		break;
		case 8:
			tablero[2][1]=1;
			llenarTablero(tablero, opcion);
		break;
		case 9:
			tablero[2][2]=1;
			llenarTablero(tablero, opcion);
		break;	
	}	
	}

	cout<<"Turno siguiente jugador"<<endl;
	jugador=jugador+1;
}


