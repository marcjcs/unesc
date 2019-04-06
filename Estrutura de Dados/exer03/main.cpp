/*Elabore uma fun��o que receba as tr�s notas de um aluno como par�metros e uma letra. Se a letra for A, a fun��o
calcula a m�dia aritm�tica das notas do aluno, se for P a fun��o calcula a m�dia ponderada com pesos, 5, 3 e 2
respectivamente. A m�dia calculada deve ser devolvida ao programa principal para, ent�o, ser mostrada.*/
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

