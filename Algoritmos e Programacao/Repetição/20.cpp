/*Elabore um algoritmo que leia um número de entrada que indicará a quantidade de números a serem lidos. Em
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
		printf("Digite um número: ");
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
	printf("\nSoma dos números informados: %d",soma);
	printf("\nQuantidade de números informados: %d",n);
	printf("\nMédia dos números informados: %d",soma/n);
	printf("\nMaior número informado: %d",maior);
	printf("\nMenor número informado: %d",menor);
	printf("\nPercentual de números ímpares entre todos os números informados: %d%%",(impar*100)/n);
}
