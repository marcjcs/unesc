#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num[1],opcao;
	printf("MENU DE OPÇÕES\n1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n\nDigite a opção desejada: ");
	scanf("%f",&opcao);
	if (opcao==1)
	{
		printf("Digite o primeiro número: ");
		scanf("%f",&num[0]);
		printf("Digite o segundo número: ");
		scanf("%f",&num[1]);
		printf("O resultado da soma de %.2f e %.2f é: %.2f",num[0],num[1],num[0]+num[1]);
	}
	else if (opcao==2)
	{
		printf("Digite o primeiro número: ");
		scanf("%f",&num[0]);
		printf("Digite o segundo número: ");
		scanf("%f",&num[1]);
		printf("O resultado da subtração de %.2f e %.2f é: %.2f",num[0],num[1],num[0]-num[1]);
	}
	else if (opcao==3)
	{
		printf("Digite o primeiro número: ");
		scanf("%f",&num[0]);
		printf("Digite o segundo número: ");
		scanf("%f",&num[1]);
		printf("O resultado da divisão de %.2f e %.2f é: %.2f",num[0],num[1],num[0]*num[1]);
	}
	else if (opcao==4)
	{
		printf("Digite o primeiro número: ");
		scanf("%f",&num[0]);
		printf("Digite o segundo número: ");
		scanf("%f",&num[1]);
		printf("O resultado da divisão de %.2f e %.2f é: %.2f",num[0],num[1],num[0]/num[1]);
	}
	getch();
}
