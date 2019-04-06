#include <stdio.h>
#include <stdlib.h>

typedef struct Revista
{
	char nome[100];
	char editora[100];
	float paginas;
} Revista;

const char *revmaior(Revista A[]);
const char *revmenor(Revista A[]);

int main()
{
	Revista A[3];
	for (int i=0; i<3; i++)
	{
		fflush(stdin);
		gets(A[i].nome);
		fflush(stdin);
		gets(A[i].editora);
		scanf("%f",&A[i].paginas);
	}
	printf("Maior revista: %s\n",revmaior(A));
	printf("Menor revista: %s\n",revmenor(A));
	system("pause");
	return 0;
}

const char *revmaior(Revista A[])
{
	float maior;
	int indice;
	maior=A[0].paginas;
	for (int i=0; i<3; i++)
	{
		if (A[i].paginas>maior)
		{
			maior=A[i].paginas;
			indice=i;
		}
	}
	return A[indice].nome;
}

const char *revmenor(Revista A[])
{
	float menor;
	int indice;
	menor=A[0].paginas;
	for (int i=0; i<3; i++)
	{
		if (A[i].paginas<menor)
		{
			menor=A[i].paginas;
			indice=i;
		}
	}
	return A[indice].nome;
}
