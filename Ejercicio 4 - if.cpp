#include<iostream>

using namespace std;

int main()
{
	int N;
	cout<<"Ejercicio 04 (if)- Encuentro Virtual"<<endl<<endl;
	cout<<"Digite un Numero: ";	
	cin>>N;
	cout<<endl;
	if(N==1){
		cout<<"Domingo";
	}else if(N==2){
		cout<<"Lunes";
	}else if(N==3){
		cout<<"Martes";
	}else if(N==4){
		cout<<"Miercoles";
	}else if(N==5){
		cout<<"Jueves";
	}else if(N==6){
		cout<<"Viernes";
	}else if(N==7){
		cout<<"Sabado";
	}else{
		cout<<"** EL NUMERO DIGITADO NO CORRESPONDE A UN DIA DE LA SEMANA";		
	}
	cout<<endl<<endl;
	system("pause");
	return 0;	
}
