#include<cstdlib>
#include<iostream>
#include<iomanip>
//#define maxf 3 //TODO (yo#2#):Pendiente volver a poner el valor 2
/* TODO (davidaguirre#3#): Pendiente de completar */
//#define maxc 3
using namespace std;

int main()
{
	const int maxf=3;
    const int maxc=3;
	float a[maxf] [maxc]={{1,2,3},{4,5,6}};
	int f, c, result=0, result2=0;
	//escribir el array
	/*for (f=0; f< maxf; f++)
	for(c=0; c<maxc;c++)
	cin >> a[f] [c];*/
	//Escribir el array
	for(f=0;f<maxf;f++)
	{
		for(c=0;c<maxc;c++)
		{
		cout <<setw(10) << fixed<<setprecision(1)<< a[f][c];
		result = result + a[f] [c];
	
	    }
	   
		cout << "=" << result;
		cout << endl;
		result=0;
	}
	cout<<"SUMA FILA 1"<<endl;
    result = 0;
	for( c=0;c<maxc;c++)
	{
		cout << setw(10) << fixed<<setprecision(1)<<a[1][c];
        result += a[1][c];
	}
	cout<<" = "<<result<<endl;	
	cout<< " SUMA COLUMNAS "<<endl;
	for( f=0;f<maxf;f++)
	{
		cout << setw(10) << fixed<<setprecision(1)<<a[f][0];
        result2 += a[f][0];
	}
	cout<<" = "<<result2<<endl;
	result2=0;
		for( f=0;f<maxf;f++)
	{
		cout << setw(10) << fixed<<setprecision(1)<<a[f][1];
        result2 += a[f][1];
	}
	cout<<" = "<<result2<<endl;
	result2=0;
		for( f=0;f<maxf;f++)
	{
		cout << setw(10) << fixed << setprecision(1) << a[f][2];
        result2 += a[f][2];
	}
	cout<<" = "<<result2<<endl;
	result2=0;
	cout<<"COLUMNA 2 SUMA"<<endl;
	for( f=0;f<maxf;f++)
	{
		cout << setw(10) << fixed<<setprecision(1)<<a[f][2];
        result2 += a[f][2];
	}
	cout<<" = "<<result2<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
	
}
