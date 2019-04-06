/*Elabore uma função que receba, por parâmetro, uma matriz A [5][5] e retorne a soma dos seus elementos.*/
#include <cstdlib>
#include <iostream>

using namespace std;

double matrixElementsSum(double A[5][5]) {
	double res = 0;
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			res+=A[i][j];
		}
	}
	return res;
}

int main(int argc, char *argv[])
{
	double A[5][5] = { { 1, 1, 1, 1, 1 }, { 1, 1, 1, 1, 1 }, { 1, 1, 1, 1, 1 }, { 1, 1, 1, 1, 1 }, { 1, 1, 1, 1, 1 } };
	cout << matrixElementsSum(A);
	system("pause");
	return 0;
}
