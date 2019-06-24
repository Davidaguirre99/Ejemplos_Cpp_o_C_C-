#include <iostream>
#include <cctype> // prototipos para islower y toupper

using namespace std;

//Prototipo de la funci�n convertirAMayusculas que recibe un puntero a un char y no retorna nada
void convertirAMayusculas( char * );
void evaluarVocales (char *sPtr);
int main (){

	char frase[] = "caracteres y $30.98";
	char letra='r';
	char *fraseDir=frase;

	//llamar a la funci�n convertir a may�sculas
convertirAMayusculas(&letra);
convertirAMayusculas(fraseDir);
evaluarVocales(fraseDir);

	
	//Presentaci�n de las variables luego de llamar a la funcion
    cout << "\nLa letra despues de convertir a mayuscula: ";
	cout<<letra; 
	
	cout << "\nLa frase despues de convertir a mayuscula: ";
	cout<<frase;
	
	return 0;
}

//implementaci�n de la funci�n convertirAMayusculas
void convertirAMayusculas(char *sPtr ){
	// itera mientras el caracter actual no sea null '\0'
	while ( *sPtr !='\0' ) 
		{
			if( islower(*sPtr))	// si el caracter es min�scula,
			*sPtr=toupper(*sPtr);
			// lo convierte a may�scula
			

			sPtr++;// mueve sPtr al siguiente car�cter en la cadena 
			
  	} 
  	//fin del while
  }

void evaluarVocales (char *sPtr){
	int cont=0;
	int cont2=0;
	int cont3=0;
	int cont4=0;
	int cont5=0;
	while(*sPtr!='\0')
	{
		if( islower(*sPtr))	// si el caracter es min�scula,
		*sPtr=toupper(*sPtr);
		sPtr++;
		if(*sPtr=='A'){
			cont=cont+1;
		}
	
		if(*sPtr=='E'){
			cont2=cont2+1;
		} 
		
		if(*sPtr=='I'){
			cont3=cont3+1;
		} 
		if(*sPtr=='O'){
			cont4=cont4+1;
		} 
		if(*sPtr=='U'){
			cont5=cont5+1;
		}
	
	}
	
	cout<<"Existen :"<<endl<<cont<<" Vocales A,"<<endl<<cont2<<" Vocales E,"<<endl<<cont3<<" Vocales I,"<<endl<<cont4<<" Vocales O,"<<endl<<cont5<<" Vocales U. En el arreglo.";

}
