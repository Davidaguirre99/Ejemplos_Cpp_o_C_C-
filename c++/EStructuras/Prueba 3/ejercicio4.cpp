#include<iostream>
using namespace std;

int main()
{
	int contmay=0, conmin=0, contspc=0;
	char cadena[41];//se le pone cuarenta y uno porque siempre al final se lee un \0 que marca el fin
	
	cin.getline(cadena, 41);
	for(int i=0;i<40;i++)
	{
		//cout << cadena[i]<<endl;
	switch(cadena[i])
	{
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		contmay += 1;
		break;
		default:
			break;
	}
	switch(cadena[i])
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
		conmin += 1;
		break;
		default:
			break;
	}
	switch(cadena[i])
	{
		case ' ':
		contspc += 1;
		break;
		default:
		break;
		
	}
 }
  cout<<"El numero de Mayusculas es "<< contmay<<endl;
  cout<<"El numero de minusculas es "<< conmin<<endl;
  cout<<"El numero de espacios es "<< contspc<<endl;	
	return 0;
}
