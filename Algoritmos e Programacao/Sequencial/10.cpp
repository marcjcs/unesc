//Elabore um algoritmo que leia o nome e o peso de duas pessoas e imprima o nome da pessoa mais gorda.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	char nome1[20], nome2[20];
	float peso[1];
	printf("Digite o nome da primeira pessoa: ");
	scanf(" %[^\n]s", &nome1);
	printf("Digite o peso da primeira pessoa: ");
	scanf("%f",&peso[0]);
	printf("Digite o nome da segunda pessoa: ");
	scanf(" %[^\n]s", &nome2);
	printf("Digite o peso da segunda pessoa: ");
	scanf("%f",&peso[1]);
	if (peso[0]>peso[1])
	{
		printf("%s",nome1);
	}
	else
	{
		printf("%s",nome2);
	}
	getch();
	
}
