//14. Elabore um algoritmo que leia um n�mero e informe se ele � divis�vel por 10, por 5 e por 2 (ao mesmo tempo), ou n�o.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&num);
	printf("O numero digitado %s divis�vel por 10, 5 e 2",(num%10==0&&num%5==0&&num%2==0 ? "�":"n�o �"));
	getch();
}	
