 #include<iostream>
 #include<cstdlib>
 #include<string.h>
 using namespace std;
 struct Request
 {
 	char nombre[20];
 	long units;
 	float cost;
 	char state;	
 }request0={"David Aguirre",11,12.45,'P'}; 
 int main()
 {
  	Request request1={"Leonel Messi",14,4.1,'A'}; 
    Request request2={"Pacco de Lucie",45,156.4,'M'}; 
    Request request3; 
    Request listrequests[100]; 
    request3=request2=request1; 
    cout << "Los valores del cliente0 son : " << request0.nombre <<" , "<<request0.units<<" , "<<request0.cost<<" , "<<request0.state<<endl; 
    cout << "Los valores del cliente1 son : " << request1.nombre <<" , "<<request1.units<<" , "<<request1.cost<<" , "<<request1.state<<endl; 
    cout << "Los valores del cliente2 son : " << request2.nombre <<" , "<<request2.units<<" , "<<request2.cost<<" , "<<request2.state<<endl; 
    int units = request1.units; 
    strcpy(request3.nombre,"Salvador Gutierrez"); 
    request3.units = 1564; 
    request3.cost = 66.4; 
    request3.state = 'M'; 
    cout << "Los valores del cliente3 son : " << request3.nombre <<" , "<<request3.units<<" , "<<request3.cost<<" , "<<request3.state<<endl; 
//Asignacion de punteros y mallooc 
Request *request4;//Cliente*cliente4 = 
request4= (Request*)malloc(sizeof(Request)); 
strcpy(request4->nombre , "Santiago Cabezas");//Copia de cadenas 
request4->units = 28; 
request4->cost = 45.352; 
request4->state = 'M'; 
cout << "Los valores del cliente4 son : " << request4->nombre <<" , "<<request4->units<<" , "<<request4->cost<<" , "<<request4->state<<endl; 
free(request4); 
//Asignacion con punteros y new (lenguaje c++) 
Request *request5 = new Request; 
strcpy(request5->nombre,"Damian Diaz"); 
request4->units = 36; 
request4->cost = 45562.00; 
request4->state = 'P'; 
cout << "Los valores del cliente5 son : " << request5->nombre <<" , "<<request5->units<<" , "<<request5->cost<<" , "<<request5->state<<endl; 
delete(request5);
 //EJEPMLO 7
Request request6;
cout<<"Cliente6: ";
cin.getline(request6.nombre, 20);
cin.sync();//Descarta del buffer el retorno de carro (enter key)
cout<<" Unidades: ";
cin>>request6.units;
cin.sync();
cout<<" Valor: ";
cin>>request6.cost;
cin.sync();
cout<<" Estado: ";
cin>>request6.state;
cin.sync();	 
cout << "Los valores del cliente6 son : " << request6.nombre <<" , "<<request6.units<<" , "<<request6.cost<<" , "<<request6.state<<endl; 
//ejmeplo 8
Request *request7 = new Request; 
cout<<"Cliente 7: ";
cin.getline(request7->nombre, 20);cin.sync();//Getline lee retorno de carro no leido en cin 
cout<<" Unidades: ";
cin >> request7->units;
cin.sync(); 
cout<<" Valor: ";
cin >> request7->cost;
cin.sync(); 
cout<<" Estado: ";
cin >> request7->state;
cin.sync(); 
cout << "Los valores del cliente 7 son : " << request7->nombre <<" , "<<request7->units<<" , "<<request7->cost<<" , "<<request7->state<<endl; 
delete(request7);
	 system("pause");
	 return 0;
 }
