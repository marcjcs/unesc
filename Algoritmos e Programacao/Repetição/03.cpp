/*Elabore um algoritmo que leia um n�mero de entrada n que indicar� a quantidade de n�meros a serem lidos.
Em seguida, leia n n�meros (conforme o valor informado anteriormente) e imprima o triplo de cada um.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int n,i;
	float num;
	printf("Digite a quantidade de n�meros a serem lidos: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("Digite um n�mero: ");
		scanf("%f",&num);
		printf("O triplo de %.2f � %.2f\n",num,num*3);
	}
	getch();
}
