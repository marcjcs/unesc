#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tamanho=0, op;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tamanho);
	int *vetor = (int *) malloc (tamanho * sizeof *vetor);
	for (int i=0; i<tamanho; i++)
	{
		scanf("%d",&vetor[i]);
	}
	printf("Codigo: ");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			for (int i=0; i<tamanho; i++)
				printf("%d\n",vetor[i]);
			break;
		case 2:
			for (int i=tamanho-1; i>=0; i--)
				printf("%d\n",vetor[i]);
			break;
		default:
			printf("Codigo invalido!");
	}
	free(vetor);
	return 0;
}
