#include <iostream>
using namespace std;
int main(){
        
		 int oper;
		 float num1;
		 float num2;
		 float result;
		 cout<<"Cacluladora Encendida";
		 cout<<"Escriba el primer numero para realizar una operacion";
		 cin>>num1;
		 	cout<< "Escriba una operacion determinada con los numeros 1 suma, 2 resta, 3multiplicacion y 4 division";
            cin>> oper;
				switch(oper){
					      case 1:
					      	 cin>> num2;
					      	 cout<< "la suma es";
					      	 result=num1 + num2;
					      	 cout<< result<<endl;
					      	break;
					      	case 2:
					      		cin>> num2;
					      	 cout<< "la suma es";
					      	 result=num1 - num2;
					      	 cout<< result<<endl;
					      		break;
					      		case 3:
					      			cin>> num2;
					      	         cout<< "la suma es";
					      	         result=num1 * num2;
					      	         cout<< result<<endl;
					      			break;
					      			    case 4:
					      				cin>> num2;
					      	            cout<< "la suma es";
					      	              result=num1 / num2;
					      	             cout<< result<<endl;
					      				break;
					      				default:
					      					cout<<"Operacion no determinada";
				            }
	
	
         return 0;
		  }
