#include <iostream>
#include <cctype> // prototipos para islower y toupper

using namespace std;

//Prototipo de la función convertirAMayusculas que recibe un puntero a un char y no retorna nada
void convertirAMayusculas( char * );
int evaluarVocales (char *sPtr);
int main (){

	char frase[] = "caracteres y $30.98";
	char letra='r';
	char *fraseDir=frase;
	int cont=0;
	//llamar a la función convertir a mayúsculas
convertirAMayusculas(&letra);
convertirAMayusculas(fraseDir);
cont=evaluarVocales(fraseDir);


cout<<endl<<"Existen "<<cont<<" vocales en la frase.";
	
	//Presentación de las variables luego de llamar a la funcion
    cout << "\nLa letra despues de convertir a mayuscula: ";
	cout<<letra; 
	
	cout << "\nLa frase despues de convertir a mayuscula: ";
	cout<<frase;
	
	return 0;
}

//implementación de la función convertirAMayusculas
void convertirAMayusculas(char *sPtr ){
	// itera mientras el caracter actual no sea null '\0'
	while ( *sPtr !='\0' ) 
		{
			if( islower(*sPtr))	// si el caracter es minúscula,
			*sPtr=toupper(*sPtr);
			// lo convierte a mayúscula
			

			sPtr++;// mueve sPtr al siguiente carácter en la cadena 
			
  	} 
  	//fin del while
  }

int evaluarMinusculas (char *sPtr){
	int cont;
	while(*sPtr!='\0')
	{
		if(*sPtr=='a' or *sPtr=='e' or *sPtr=='i'or *sPtr=='o' or *sPtr=='u'){
			cont=cont+1;
		}
		
		sPtr++;
	}
	return cont;
}
