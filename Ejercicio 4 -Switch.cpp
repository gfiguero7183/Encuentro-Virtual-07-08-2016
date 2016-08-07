#include<iostream>

using namespace std;

int main()
{
	int N;
	cout<<"Ejercicio 04 (switch)- Encuentro Virtual"<<endl<<endl;
	cout<<"Digite un Numero: ";	
	cin>>N;
	cout<<endl;
	switch(N)
	{
		case 1:
			cout<<"Domingo";
			break;
		case 2:
			cout<<"Lunes";
			break;
		case 3:
			cout<<"Martes";
			break;
		case 4:
			cout<<"Miercoles";
			break;
		case 5:
			cout<<"Jueves";
			break;
		case 6:
			cout<<"Viernes";
			break;
		case 7:
			cout<<"Sabado";
			break;
		default:
			cout<<"** EL NUMERO DIGITADO NO CORRESPONDE A UN DIA DE LA SEMANA **";				
			break;
	}
	cout<<endl<<endl;
	system("pause");
	return 0;	
}
