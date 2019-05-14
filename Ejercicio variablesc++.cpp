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
	string anio[4];
	string anio2;
	string dato2;
	int dav;
	bool lco;
	bool logi;
	bool opl;
	string port;
	int vilm;
	float weezer;
	dav = 5;
	port = "5";
	dato2 = "5";
	vilm = -4;
	weezer = 3.156;
	anio[0] = "2";
	anio[1] = "0";
	anio[2] = "1";
	anio[3] = "9";
	anio2 = "2019";
	opl = true;
	logi = false;
	lco = false;
	cout << "Estos son las variables definidas " << endl;
	cout << dav << endl;
	cout << vilm << endl;
	cout << port << endl;
	cout << "Esta es una variable del tipo caracter" << endl;
	cout << anio[0] << anio[1] << anio[2] << anio[3] << endl;
	cout << dato2 << endl;
	cout << anio2 << endl;
	cout << weezer << endl;
	cout << opl << endl;
	cout << logi << endl;
	cout << lco << endl;
	return 0;
}

