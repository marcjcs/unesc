#include <cstdlib>
#include <iostream>
bool isPositive(int num) {
	if (num > 0) {
		return true;
	}
	else {
		return false;
	}
}
using namespace std;

int main(int argc, char *argv[])
{
	int n = 5;
	cout << isPositive(n) << endl;
	system("pause");
	return 0;
}
