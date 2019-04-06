//Elabore um algoritmo que leia três números e imprima o menor número.
#include <stdio.h>
#include <locale.h>
#include <conio.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,num3;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&num3);
	if (num1<num2&&num1<num3)
	{
		printf("O menor numero é: %d",num1);
	}
	else if(num2<num1&&num2<num3)
	{
		printf("O menor numero é: %d",num2);
	}
	else if(num3<num1&&num3<num2)
	{
		printf("O menor numero é: %d",num3);
	}
	getch();
}
