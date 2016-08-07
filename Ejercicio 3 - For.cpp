#include<iostream>

using namespace std;

int main()
{
	int Suma=0, max=1000, res;
	cout<<"Ejercicio 03 (for)- Encuentro Virtual"<<endl<<endl;
	for(int i=0;i<=max;i++){
		res=i%2;
		if(res==0)
			Suma+=i;
	}

	cout<<endl<<"** Suma de los primeros "<<max<<" Numeros Pares = "<<Suma<<" **"<<endl<<endl;
	system("pause");
	return 0;	
}
