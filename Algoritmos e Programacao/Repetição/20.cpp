/*Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de n�meros a serem lidos. Em
seguida, calcule e mostre:*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n,numero,soma=0,maior,menor,impar=0;
	printf("Digite a quantidade de termos a serem lidos: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("Digite um n�mero: ");
		scanf("%d",&numero);
		soma=soma+numero;
		if (i==1)
		{
			maior=numero;
			menor=numero;
		}
		if (numero>maior)
		{
		maior=numero;
		}
		if (numero<menor)
		{
		menor=numero;
		}
		if (numero%2>0)
		{
		impar++;
		}
	}
	printf("\nSoma dos n�meros informados: %d",soma);
	printf("\nQuantidade de n�meros informados: %d",n);
	printf("\nM�dia dos n�meros informados: %d",soma/n);
	printf("\nMaior n�mero informado: %d",maior);
	printf("\nMenor n�mero informado: %d",menor);
	printf("\nPercentual de n�meros �mpares entre todos os n�meros informados: %d%%",(impar*100)/n);
}
