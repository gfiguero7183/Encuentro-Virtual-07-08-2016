#include<iostream>

using namespace std;

int main()
{
	int Suma=0, max=0, i=0, res;
	cout<<"Ejercicio 03 (while)- Encuentro Virtual"<<endl<<endl;
	while(max<=1000)
	{
		res=i%2;
		if(res==0)
		{
			Suma+=i;
			max++;			
		}
		i++;
	}

	cout<<endl<<"** Suma de los primeros "<<max<<" Numeros Pares = "<<Suma<<" **"<<endl<<endl;
	system("pause");
	return 0;	
}
