#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
	char nome[100];
	int idade;
} pessoa;

int main()
{
	pessoa A[3];
	int aux;
	for (int i=0; i<3; i++)
	{
		fflush(stdin);
		gets(A[i].nome);
		scanf("%d",&aux);
		if (aux<45)
			A[i].idade=aux;
	}
	for (int i=0; i<3; i++)
	{
		printf("Nome: %s\n",A[i].nome);
		printf("Idade: %d\n", A[i].idade);
	}
	system("pause");
	return 0;
}

