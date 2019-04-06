/*Foi realizada uma pesquisa de algumas características físicas de cinco habitantes de uma certa região. De cada
habitante foram coletados os seguintes dados: sexo, cor dos olhos (A – Azuis ou C – Castanhos), cor dos cabelos (L
– Louros, P – Pretos ou C – Castanhos) e idade.
Elabore uma função que leia esses dados em uma struct e um vetor. Determine, por meio de outra função, a
média de idade das pessoas com olhos castanhos e cabelos pretos. Mostre esse resultado no programa
principal.
b. Elabore um programa que determine e devolva ao programa principal a maior idade entre os habitantes.
c. Elabore uma função que determine e devolva ao programa principal a quantidade de indivíduos do sexo
feminino cuja idade está entre 18 (inclusive) e 35 (inclusive) e que tenham olhos azuis e cabelos louros.*/
#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct habitante {
	char sexo;
	char corOlhos;
	char corCabelo;
	int idade;
} habitante;

int mediaIdade(habitante B[]) {
	int soma = 0;
	int incrementador = 0;
	for (int i=0; i<3; i++) {
		if (B[i].corOlhos == 'C' && B[i].corCabelo == 'P') {
			soma+=B[i].idade;
			incrementador++;
		}
	}
	return soma/incrementador;
} 
int main(int argc, char *argv[])
{
	habitante A[3];
	A[0].sexo = 'M';
	A[0].corOlhos = 'C';
	A[0].corCabelo = 'P';
	A[0].idade = 12;
	
	A[1].sexo = 'M';
	A[1].corOlhos = 'C';
	A[1].corCabelo = 'P';
	A[1].idade = 14;
	
	A[2].sexo = 'M';
	A[2].corOlhos = 'C';
	A[2].corCabelo = 'P';
	A[2].idade = 28;
	
	cout << mediaIdade(A) << endl;
	system("pause");
	return 0;
}
