/* Faça uma função que receba três notas e seus respectivos pesos, calcule e mostre a 
média ponderada dessas notas. Obs.: Veja no final desta lista como se faz a média 
ponderada. */
#include <iostream>
#include <vector>
#define numNotas 3
using namespace std;

void obterNotas(vector<double>&, vector<double>&);
double media(vector<double> notas, vector<double> peso);

int main()
{
	vector<double> notas;
	vector<double> pesos;
	obterNotas(notas,pesos);
	cout << media(notas,pesos);
	return 0;
}

void obterNotas(vector<double>& notas, vector<double>& pesos)
{
	for (int i=0; i<numNotas; i++)
	{
		int n;
		cout << "Nota " << i+1 << ": ";
		cin >> n;
		notas.push_back(n);
		cout << "Peso " << i+1 << ": ";
		cin >> n;
		pesos.push_back(n);
	}
}

double media(vector<double> notas, vector<double> peso)
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
