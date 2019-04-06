/*Elabore uma fun��o que receba as tr�s notas de um aluno como par�metros e uma letra. Se a letra for A, a fun��o
calcula a m�dia aritm�tica das notas do aluno, se for P a fun��o calcula a m�dia ponderada com pesos, 5, 3 e 2
respectivamente. A m�dia calculada deve ser devolvida ao programa principal para, ent�o, ser mostrada.*/
#include <cstdlib>
#include <iostream>
#include <vector>
std::vector<int> maiorMenor(int nums[]);

using namespace std;

int main(int argc, char *argv[])
{
	int num[] = {15, 27, 3, 4, 5};
	vector<int> resultado = maiorMenor(num);
	for (int i=0; i<resultado.size(); i++){
		cout << resultado[i] << endl;
	}
	system("pause");
	return 0;
}


std::vector<int> maiorMenor(int nums[]) {
	int maior = nums[0];
	int menor = nums[0];
	vector<int> maiorMenor;
	for (int i=1; i<5; i++) {
		if (nums[i] > maior) {
			maior = nums[i];
		}
		if (nums[i] < menor) {
			menor = nums[i];
		}
	}
	maiorMenor.push_back(maior);
	maiorMenor.push_back(menor);
	return maiorMenor;
}
