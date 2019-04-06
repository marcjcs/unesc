//Elabore um algoritmo que leia três números e imprima-os em ordem crescente.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
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
	if (num1>num2&&num2>num3)
	{
		printf("Numeros em ordem crescente:\n%d\n%d\n%d",num3,num2,num1);
	}
	else if (num2>num1&&num1>num3)
	{
		printf("Numeros em ordem crescente:\n%d\n%d\n%d",num3,num1,num2);
	}
	else if (num3>num1&&num1>num2)
	{
		printf("Numeros em ordem crescente:\n%d\n%d\n%d",num2,num1,num3);
	}
	else
	{
		printf("Numeros em ordem crescente:\n%d\n%d\n%d",num1,num2,num3);
	}
	getch ();
}
