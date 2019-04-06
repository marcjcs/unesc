#include <cstdlib>
#include <iostream>
int sumBetween(int n1, int n2);
using namespace std;

int main(int argc, char *argv[])
{
	cout << sumBetween(10, 5) << endl;
	system("pause");
	return 0;
}

int sumBetween(int n1, int n2) {
	int aux = 0;
	if (n1 > n2) { aux = n2; n2 = n1; n1 = aux; }
	int res = n1+1;
	for (int i = n1+2 ; i < n2; i++) {
		res+=i;
	}
	return res;
}
