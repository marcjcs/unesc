#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
	char nome[100];
	char email[100];
	char datanasc[20];
	float notas[3];
} aluno;

float mediaaluno(aluno A[], int ind);

int main()
{
	aluno A[5];
	for (int i=0; i<5; i++)
	{
		fflush(stdin);
		printf("Nome: ");
		gets(A[i].nome);
		fflush(stdin);
		printf("Email: ");
		gets(A[i].email);
		fflush(stdin);
		printf("Data de nascimento (dd/mm/aa): ");
		gets(A[i].datanasc);
		printf("Notas: ");
		for (int j=0; j<3; j++)
		{
			scanf("%f",&A[i].notas[j]);
		}
		printf("\n");
	}	
	printf("\nResultados:\n");
	for (int i=0; i<5; i++)
	{
		printf("Nome: %s\n", A[i].nome);
		printf("Email: %s\n", A[i].email);
		printf("Data de nascimento: %s\n", A[i].datanasc);
		printf("Idade: %d\n",2018-atoi(A[i].datanasc + 6));
		printf("Media do aluno: %.2f\n",mediaaluno(A, i));
		printf("\n");
	}
	system("pause");
	return 0;
}

float mediaaluno(aluno A[], int ind)
{
	int soma=0;
	for (int i=0; i<3; i++)
	{
		soma+=A[ind].notas[i];
	}
	return soma/3.0;
}
