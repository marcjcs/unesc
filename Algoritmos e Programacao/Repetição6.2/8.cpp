#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, maiorSalario = 0, mediaFilhos = 0, mediaSalario;
	int numeroDeFilhos, pessoasSalarioBaixo = 0, numeroPessoas = 0;
	printf("Digite seu sal�rio: ");
	scanf("%f",&salario);
	maiorSalario = salario;
	while (salario >= 0){
		printf("Digite o n�mero de filhos: ");
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
		printf("Digite seu sal�rio: ");
		scanf("%f",&salario);
	}
	printf("M�dia do sal�rio da popula��o: %.2f\n",mediaSalario/numeroPessoas);
	printf("M�dia do n�mero de filhos: %.2f\n",mediaFilhos/numeroPessoas);
	printf("Maior sal�rio: %.2f\n",maiorSalario);
	printf("Porcentagem de pessoas com sal�rio at� R$1200,00: %d%%",pessoasSalarioBaixo * 100 / numeroPessoas);
	return 0;
}
