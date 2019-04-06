#include <stdio.h>
#include <stdlib.h>

typedef struct livro
{
	char nome[100];
	char editora[100];
	int anoedicao;
	float preco;
	int npaginas;
} livro;

float medianpaginas(livro A[], int tam);

int main()
{
	livro A[5];
	for (int i=0; i<5; i++)
	{
		fflush(stdin);
		printf("Nome: ");
		gets(A[i].nome);
		fflush(stdin);
		printf("Editora: ");
		gets(A[i].editora);
		fflush(stdin);
		printf("Ano de edicao: ");
		scanf("%d",&A[i].anoedicao);
		printf("Preco: ");
		scanf("%d",&A[i].preco);
		printf("Numero de paginas: ");
		scanf("%d",&A[i].npaginas);
	}
	printf("\n\nMedia do numero de paginas: %.2f\n",medianpaginas(A, 5));
	system("pause");
	return 0;
}

float medianpaginas(livro A[], int tam)
{
	int soma=0;
	for (int i=0; i<tam; i++)
	{
		soma+=A[i].npaginas;
	}
	return soma/(tam*1.0);
}
