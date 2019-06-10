#include<iostream>
using namespace std;

int main()
{
    string cadena ="Escuela Politecnica Nacional";
    int vocales=0;
	for (int i=0; i<28;i++)
    {
    	cout << cadena[i]<<endl;
		/*if (
		    cadena[i] == 'a'||cadena[i] == 'A'||cadena[i] == 'e'||cadena[i] == 'E'
		    ||cadena[i] == 'i'||cadena[i] == 'I'
		    ||cadena[i] == 'o'||cadena[i] == 'O'
		    ||cadena[i] == 'u'||cadena[i] == 'U'
		    )
		{
			vocales += 1;
		}*/
	switch(cadena[i])
	{
		case'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':
		case'o':
		case'O':
		case'u':
		case'U':
			vocales += 1;
			break;	
	    default:
	    	break;
	}
	}
	cout << vocales<<endl;
	return 0;
}

