#include<cstdlib>
#include<iostream>
#include<iomanip>
//#define maxf 3 //TODO (yo#2#):Pendiente volver a poner el valor 2
/* TODO (davidaguirre#3#): Pendiente de completar */
//#define maxc 3
using namespace std;

int main(int argc, char *argv[])
{
	const int maxf=3;
    const int maxc=3;
	float a[maxf] [maxc];
	int f, c;
	//escribir el array
	for (f=0; f< maxf; f++)
	for(c=0; c<maxc;c++)
	cin >> a[f] [c];
	//Escribir el array
	for(f=0;f<maxf;f++)
	{
		for(c=0;c<maxc;c++)
		cout <<setw(10) << fixed<<setprecision(2)<< a[f] [c];
		cout << endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
	
}
