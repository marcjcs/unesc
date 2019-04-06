#include <iostream>
#include <vector>
using namespace std;

void media(vector<double>, vector<double>);

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
	media(teste,pesos);
	return 0;
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
