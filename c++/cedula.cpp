#include<iostream> 

#include<conio.h> 

using namespace std; 

int main() 

{ 

    int n[10], res[10], compr;  

    char cedula[10]; 

    cout<<"**************************-"<<"VALIDACION DE CEDULA"<<"-************************\n"<<endl; 

    cout << "Ingrese un numero de cedula y se le dira si existe o no tal numero de cedula "<<endl; 

    for(int i=0;i<10;i++) 

    { 

        cin >> cedula[i];     

    } 

     n[0]= cedula[0] - '0'; 

     n[1]= cedula[1] - '0'; 

     n[2]= cedula[2] - '0'; 

     n[3]= cedula[3] - '0'; 

     n[4]= cedula[4] - '0'; 

     n[5]= cedula[5] - '0'; 

     n[6]= cedula[6] - '0'; 

     n[7]= cedula[7] - '0'; 

     n[8]= cedula[8] - '0'; 

     n[9]= cedula[9] - '0'; 

  

switch(cedula[0]) 

    { 

        case '0': 

        case '1': 

        case '2': 

            break; 

        default: 

            cout << "Numero de Cedula no valido "<<endl; 

            getch(); 

            return 0;     

    } 

switch(cedula[1]) 

    { 

        case '1': 

        case '2': 

        case '3': 

        case '4': 

        break;     

        case '5': 

        case '6': 

        case '7': 

        case '8': 

        case '9': 

        if(cedula[0]=='2') 

            { 

                cout << "Numero de Cedula No valido"<<endl; 

                getch(); 

                return 0; 

            } 

        break; 

        case '0': 

          if(cedula[0]=='0') 

            { 

                cout << "Numero de Cedula No valido"<<endl; 

                getch(); 

                return 0; 

            } 

        break; 

        default: 

            cout<< "Numero de cedula no valido"<<endl; 

            getch(); 

            return 0; 

    } 

    switch(cedula[2]) 

    { 

        case '0': 

        case '1': 

        case '2': 

        case '3': 

        case '4': 

        case '5': 

        break; 

        default: 

        cout<< "Numero de cedula no valido"<<endl; 

        getch(); 

        return 0; 

    } 

    for (int i=0;i<9;i+=2) 

    { 

        res[i] = 2 * n[i]; 

        if (res[i]>9) 

        { 

            res[i] -= 9; 

        } 

        //cout<<res[i]; imprime los digitos pares por 2 y si es mayor a 9 les resta 9  

    } 

    for (int i=1;i<9;i+=2) 

    { 

        res[i] = 1 * n[i]; 

        //cout<<res[i];  imprime las los digitos impares por 1 

    } 

    res[10]=res[0]+res[1]+res[2]+res[3]+res[4]+res[5]+res[6]+res[7]+res[8]; 

    //cout << res[10];imprime la suma para la verificacion de validez 

    if (res[10]%10!=0) 

    { 

        compr = (10-res[10]%10); 

    }else 

    { 

        compr = 0; 

    } 

    //cout << compr; Imprime numero verificador o comprobante 

    if (n[9]==compr) 

    { 

        cout<<"Este Numero de Cedula es Valido"<<endl; 

        getch(); 

        return 0; 

    }else 

    { 

        cout << "Este Numero de Cedula No es Valido" << endl; 

        getch (); 

        return 0; 

    } 

  return 0; 

} 
