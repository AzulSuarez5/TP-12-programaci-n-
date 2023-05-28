#include<bits/stdc++.h>
using namespace std;
int CantidadDeLetras(string frase);
int main()
{
	string frase;
	cout<<"ingrese la frase:"<<endl;
	getline(cin,frase);
	int n=CantidadDeLetras(frase);
	cout<<"Cantidad de letras de la frase: "<<n;
	return 0;
}
int CantidadDeLetras(string frase)
{
	int contador;
	for(int i=0;i<frase.size();i++)
	{
		contador++;
	}
	return contador;
}
