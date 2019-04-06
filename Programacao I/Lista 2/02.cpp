#include <stdio.h>
#include <stdlib.h>
void remover(int *vetor, int index, int tamanho)
{
	int i;
	for (i=index; i<tamanho-1; i++)
	{
		vetor[i]=vetor[i+1];
	}
}

int main()
{
	int TAMANHO=1;
	int qtd=0;
	int *num = (int *) malloc (TAMANHO * sizeof *num);
	for (int i=0; i<100; i++)
	{
		scanf("%d",&num[i]);
		if (num[i]==-999)
		{
			remover(num, i, TAMANHO);
			int *tmp = (int *) realloc (num, (TAMANHO-1)*sizeof(int));
			TAMANHO=TAMANHO-1;
			num = tmp;
			break;
		}
		qtd++;
		int *tmp = (int *) realloc (num, (TAMANHO+1)*sizeof(int));
		TAMANHO=TAMANHO+1;
		num = tmp;
	}
	printf("\nNumeros pares no vetor:\n");
	for (int i=0; i<qtd; i++)
	{
		if (num[i]%2==0)
			printf("%d\n",num[i]);
	}
	free(num);
	return 0;
}
