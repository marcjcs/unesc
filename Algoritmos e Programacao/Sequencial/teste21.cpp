#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num[1],opcao;
	printf("MENU DE OP��ES\n1. Soma\n2. Subtra��o\n3. Multiplica��o\n4. Divis�o\n\nDigite a op��o desejada: ");
	scanf("%f",&opcao);
	if (opcao==1)
	{
		printf("Digite o primeiro n�mero: ");
		scanf("%f",&num[0]);
		printf("Digite o segundo n�mero: ");
		scanf("%f",&num[1]);
		printf("O resultado da soma de %.2f e %.2f �: %.2f",num[0],num[1],num[0]+num[1]);
	}
	else if (opcao==2)
	{
		printf("Digite o primeiro n�mero: ");
		scanf("%f",&num[0]);
		printf("Digite o segundo n�mero: ");
		scanf("%f",&num[1]);
		printf("O resultado da subtra��o de %.2f e %.2f �: %.2f",num[0],num[1],num[0]-num[1]);
	}
	else if (opcao==3)
	{
		printf("Digite o primeiro n�mero: ");
		scanf("%f",&num[0]);
		printf("Digite o segundo n�mero: ");
		scanf("%f",&num[1]);
		printf("O resultado da divis�o de %.2f e %.2f �: %.2f",num[0],num[1],num[0]*num[1]);
	}
	else if (opcao==4)
	{
		printf("Digite o primeiro n�mero: ");
		scanf("%f",&num[0]);
		printf("Digite o segundo n�mero: ");
		scanf("%f",&num[1]);
		printf("O resultado da divis�o de %.2f e %.2f �: %.2f",num[0],num[1],num[0]/num[1]);
	}
	getch();
}
