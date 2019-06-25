#include <stdio.h> 
#define filas 3
#define columnas 3
int MaximoValor(double n[3][3]);
int MaximoValor(double n[3][3])
{
	for(int i=0; i<filas; i++)
	{
		for (int j=0; j<columnas;  j++)
		{
		 printf(n[i][j]);
		}
	 cout<<endl;
	}
}
//int MaximoValor(double n[][])
int main(void) 

{ 

    double matriz[3][3] = {2.9,5.6,7.98,3.7,1.5,4.2,8.2,9.8,6.45}; 

    printf("maximo= %5.2lf \n", MaximoValor(vector)); 

} 
