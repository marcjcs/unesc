#include <stdio.h>
int main()
{
	int ano,populacaoEUA,populacaoBrasil;
	printf("Digite o ano atual: ");
	scanf("%d",&ano);
	printf("Digite a populacao dos EUA: ");
	scanf("%d",&populacaoEUA);
	printf("Digite a populacao do Brasil: ");
	scanf("%d",&populacaoBrasil);
	while (populacaoBrasil < populacaoEUA)
	{
		populacaoEUA = (populacaoEUA * 0.02) + populacaoEUA;
		populacaoBrasil = (populacaoBrasil * 0.04) + populacaoBrasil;
		ano++;
	}
	printf("O ano em que a populacao brasileira igualou ou passou a populacao americana foi %d",ano);
	return 0;
}
