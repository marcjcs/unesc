/*Elabore um algoritmo que leia vários números, e imprima o maior, menor e a média aritmética dos números. Considere
que o número zero (0) finaliza a entrada de dados e não faz parte da seqüência.
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,numerodeentradas=0,j;
	float n[1000],soma=0,maior,menor;
	for (i=0;i<=1000;i++)
	{
		printf("Digite um número: ");
		scanf("%f",&n[i]);
		if (n[i]==0)
			break;
		else
		{
			soma=soma+n[i];
			numerodeentradas++;
			j++;
		}
		maior=menor=n[0];
	}
	for (i=1;i<=j;i++)
	{
		if (n[i]>maior)
			maior = n[i];
		if (n[i]<menor&&n[i]!=0)
			menor = n[i];
	}
	printf("Média aritmética dos números digitados: %.2f\n",soma/numerodeentradas);
	printf("Maior número: %.2f\n",maior);
	printf("Menor número: %.2f",menor);
	getch();
}
