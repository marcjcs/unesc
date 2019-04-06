#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	int numeroDaCarteira, numeroDeMultas, valorDaMulta, valorTotal = 0, maiorNumeroDeMultas, valorArrecadado = 0, carteiraMaiorNumeroDeMultas;
	
	printf("Digite o número da carteira do motorista: ");
	scanf("%d",&numeroDaCarteira);
	maiorNumeroDeMultas = 0;
	while (numeroDaCarteira > 0){
		
		printf("Digite o número de multas do motorista: ");
		scanf("%d",&numeroDeMultas);
		
		if (numeroDeMultas > maiorNumeroDeMultas){
			carteiraMaiorNumeroDeMultas = numeroDaCarteira;
			maiorNumeroDeMultas = numeroDeMultas;
		}
		
		for (int i = 1; i <= numeroDeMultas; i ++){
			printf("Digite o valor da %d multa: ",i);
			scanf("%d",&valorDaMulta);
			
			valorTotal = valorTotal + valorDaMulta;
		}
		
		valorArrecadado = valorTotal + valorArrecadado;
		
		printf("Valor da dívida: %d\n",valorTotal);
		valorTotal = 0;
		
		printf("Digite o número da carteira do motorista: ");
		scanf("%d",&numeroDaCarteira);
	}
	
	printf("Total de recursos arrecadados = %d\n",valorArrecadado);
	printf("Número da carteira do motorista que obteve o maior número de multas: %d",carteiraMaiorNumeroDeMultas);
	return 0;
}
