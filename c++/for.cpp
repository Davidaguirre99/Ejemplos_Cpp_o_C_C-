// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float acum;
	float dato;
	int i;
	int n;
	float prom;
	cout << "Ingrese la cantidad de datos:" << endl;
	cin >> n;
	acum = 0;
	for (i=10;i>0;i-=5) {
		cout << "Ingrese el dato " << i << ":" << endl;
		cin >> dato;
		acum = acum+dato;
	}
	prom = acum/n;
	cout << "El promedio es: " << prom << endl;
	return 0;
}

