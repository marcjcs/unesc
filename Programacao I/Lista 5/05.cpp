#include <iostream>
using namespace std;
double pi(int ntermos);

int main()
{
	int ntermos;
	cin >> ntermos; 
	cout << pi(ntermos);
	return 0;
}

double pi(int ntermos)
{
	double numerador=4.0;
	double denominador=1.0;
	double resultado=0.0;
	for (int i=1; i<=ntermos; i++)
	{
		if (i%2==0)
		{
			resultado=resultado-(numerador/denominador);
		}
		if (i%2!=0)
		{
			resultado=resultado+(numerador/denominador);
		}
		denominador=denominador+2.0;
	}
	return resultado;
}
