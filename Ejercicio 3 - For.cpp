#include<iostream>

using namespace std;

int main()
{
	int Suma=0, max=0, res;
	cout<<"Ejercicio 03 (for)- Encuentro Virtual"<<endl<<endl;
	for(int i=0;i<=2000;i++){
		res=i%2;
		if(res==0){
			Suma+=i;
		}
	}

	cout<<endl<<"** Suma de los primeros 1000 Numeros Pares = "<<Suma<<" **"<<endl<<endl;
	system("pause");
	return 0;	
}
