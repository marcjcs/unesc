#include <iostream>
#include <vector>
#define numNotas 3
using namespace std;

void media(vector<double>, vector<double>);
void obterNotas(vector<double>&, vector<double>&);

int main()
{
	vector<double> teste;
	vector<double> pesos;
	obterNotas(teste,pesos);
	media(teste,pesos);
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
void media(vector<double> notas, vector<double> peso)
{
	double res=0.0;
	double respeso=0.0;
	if (notas.size()!=peso.size())
		cout << "Numero de notas diferente do numero de pesos";
	for (int i=0; i<notas.size(); i++)
		res+=notas[i]*peso[i];
	for (int i=0; i<peso.size(); i++)
		respeso+=peso[i];
	cout << res/respeso;
}
