/*Elabore uma função que receba, por parâmetro, uma matriz A [6][6], e retorne o 
menor elemento mantido na matriz.*/
#include <cstdlib>
#include <iostream>

using namespace std;

double smallestInMatrix(double A[6][6]) {
	double smallest = A[0][0];
	for (int i=1; i<6; i++) {
		for (int j=1; j<6; j++) {
			if (A[i][j] < smallest) {
				smallest = A[i][j];
			}
		}
	}
}

int main(int argc, char *argv[])
{
	double A[6][6] = {{3,11,11,21,31,15},{13,11,12,31,41,11},{21,11,13,12,11,13},{11,13,31,31,31,31},{31,31,31,31,31,31},{31,31,31,31,31,31}};
	cout << smallestInMatrix(A) << endl;
	system("pause");
	return 0;
}
