#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tamanho=0;
	printf("Digite o tamanho dos vetores: ");
	scanf("%d",&tamanho);
	int *vetor = (int *) malloc (tamanho * sizeof *vetor);
	int *vetor2 = (int *) malloc (tamanho * sizeof *vetor2);
	int *vetorResultado = (int *) malloc ((tamanho * 2) * sizeof *vetorResultado);
	printf("Valores do vetor 1: ");
	for (int i=0; i<tamanho; i++)
	{
		scanf("%d",&vetor[i]);
	}
	printf("Valores do vetor 2: ");
	for (int i=0; i<tamanho; i++)
	{
		scanf("%d",&vetor2[i]);
	}
	for (int i=0; i<tamanho*2; i++)
	{
		if (i==0)
		{
			vetorResultado[i]=vetor[i];
			vetorResultado[i+1]=vetor2[i];
		}
		else
		{
			vetorResultado[i*2]=vetor[i];
			vetorResultado[i*2+1]=vetor2[i];
		}
	}
	free(vetor);
	free(vetor2);
	printf("Valores intercalados: \n");
	for (int i=0; i<tamanho*2; i++)
	{
		printf("%d\n",vetorResultado[i]);
	}
	free(vetorResultado);
	return 0;
}
