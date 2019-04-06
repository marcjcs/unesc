/* Faça uma função que receba três notas e seus respectivos pesos, calcule e mostre a 
média ponderada dessas notas. Obs.: Veja no final desta lista como se faz a média 
ponderada. */
#include <iostream>
#include <vector>
using namespace std;

double media(vector<double>& notas, vector<double>& peso);

int main()
{
	vector<double> teste;
	vector<double> pesos;
	int i=0, n;
	for (int i=0; i<3; i++)
	{	
		cout << "Nota " << i+1 << ": ";
		cin >> n;
		teste.push_back(n);
		cout << "Peso " << i+1 << ": ";
		cin >> n;
		pesos.push_back(n);
	}
	cout << media(teste,pesos);
	return 0;
}

double media(vector<double>& notas, vector<double>& peso)
{
	double res=0.0;
	double respeso=0.0;
	if (notas.size()!=peso.size())
		return 0;
	for (int i=0; i<notas.size(); i++)
		res+=notas[i]*peso[i];
	for (int i=0; i<peso.size(); i++)
		respeso+=peso[i];
	return res/respeso;
}
