/*Elabore uma função que receba as três notas de um aluno como parâmetros e uma letra. Se a letra for A, a função
calcula a média aritmética das notas do aluno, se for P a função calcula a média ponderada com pesos, 5, 3 e 2
respectivamente. A média calculada deve ser devolvida ao programa principal para, então, ser mostrada.*/
#include <cstdlib>
#include <iostream>

using namespace std;

double ariAverage(double nums[3]) {
	double res;
	for (int i=0; i<3; i++) {
		res += nums[i];
	}
	return res/3;
}

double weightedAverage(double nums[3]) {
	return ((nums[0]*5)+(nums[1]*3)+(nums[2]*2))/(5+3+2);
}

double fun(double nums[3], char opt) {
	switch (opt) {
		case 'A': {
			return ariAverage(nums);
			break;
		}
		case 'P': {
			return weightedAverage(nums);
			break;
		}
		default: {
			return 0;		
		}
	}
}

int main(int argc, char *argv[])
{
	double test[3] = {8, 9, 4};
	cout << fun(test, 'P') << endl;
	system("pause");
	return 0;
}

