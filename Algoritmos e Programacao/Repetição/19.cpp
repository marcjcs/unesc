/*Elabore um algoritmo que leia 5 números e imprima ao final, imprima o maior, menor, e a média dos números
digitados.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	float soma=0,numero,maior,menor;
	for (i=1;i<=5;i++)
	{
		printf("Digite um numero: ");
		scanf("%f",&numero);
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
	}
	printf("\nO maior número é: %.2f",maior);
	printf("\nO menor número é: %.2f",menor);	
	printf("\nA média dos números é: %.2f",soma/5);
	getch();
}
