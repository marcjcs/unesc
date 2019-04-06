/*Elabore um algoritmo que leia um número de entrada n que indicará a quantidade de números a serem lidos.
Em seguida, leia n números (conforme o valor informado anteriormente) e imprima o triplo de cada um.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i;
	float num;
	printf("Digite a quantidade de números a serem lidos: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("Digite um número: ");
		scanf("%f",&num);
		printf("O triplo de %.2f é %.2f\n",num,num*3);
	}
	getch();
}
