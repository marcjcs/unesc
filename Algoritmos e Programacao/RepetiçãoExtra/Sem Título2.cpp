/*Elabore um algoritmo que leia v�rios n�meros, e imprima o maior, menor e a m�dia aritm�tica dos n�meros. Considere
que o n�mero zero (0) finaliza a entrada de dados e n�o faz parte da seq��ncia.
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
		printf("Digite um n�mero: ");
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
	printf("M�dia aritm�tica dos n�meros digitados: %.2f\n",soma/numerodeentradas);
	printf("Maior n�mero: %.2f\n",maior);
	printf("Menor n�mero: %.2f",menor);
	getch();
}
