#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, maiorSalario = 0, mediaFilhos = 0, mediaSalario;
	int numeroDeFilhos, pessoasSalarioBaixo = 0, numeroPessoas = 0;
	printf("Digite seu salário: ");
	scanf("%f",&salario);
	maiorSalario = salario;
	while (salario >= 0){
		printf("Digite o número de filhos: ");
		scanf("%d",&numeroDeFilhos);
		mediaFilhos += numeroDeFilhos;
		mediaSalario += salario;
		numeroPessoas++;
		if (salario<=1200){
			pessoasSalarioBaixo ++;
		}
		if (salario > maiorSalario){
			maiorSalario = salario;
		}
		printf("Digite seu salário: ");
		scanf("%f",&salario);
	}
	printf("Média do salário da população: %.2f\n",mediaSalario/numeroPessoas);
	printf("Média do número de filhos: %.2f\n",mediaFilhos/numeroPessoas);
	printf("Maior salário: %.2f\n",maiorSalario);
	printf("Porcentagem de pessoas com salário até R$1200,00: %d%%",pessoasSalarioBaixo * 100 / numeroPessoas);
	return 0;
}
