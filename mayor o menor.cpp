// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley� otra variable con >>.

int main() {
	int a;
	int b;
	cout << "Escriba el primer numero para comparar" << endl;
	cin >> a;
	cout << "Escriba el segundo numero" << endl;
	cin >> b;
	if (a>b) {
		cout << a << "es mayor que" << b << endl;
	} else {
		cout << a << "es menor igual que " << b << endl;
	}
	return 0;
}

