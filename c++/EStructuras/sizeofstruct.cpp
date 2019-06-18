 #include<iostream>
 #include<cstdlib>
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
  	Request request1={"Alexander Gallardo",14,456.1,'A'};
	Request request2={"Pacco de Lucie",45,13356.4,'M'};
	Request request3, request4;
  	Request listrequests[100];
  	request1=request2=request3=request4;
  	cout<<"size of(char)"<< " = "<<sizeof(char)<<endl;
	cout<<"size of(int)"<<" = "<<sizeof(int)<<endl;
	cout<<"size of(float)"<<" = "<<sizeof(float)<<endl;
  	cout<<"size of(Request)"<<" = "<<sizeof(Request)<<endl;
	system("pause");
	 return 0;
 }
