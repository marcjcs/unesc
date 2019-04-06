#include <iostream>
using namespace std;

double salLiquido(double salBase);

int main()
{
	int sal=1000;
	cout << salLiquido(sal);
	return 0;
}

double salLiquido(double salBase)
{
	return ((salBase*0.05)-(salBase*0.07))+salBase;
}
