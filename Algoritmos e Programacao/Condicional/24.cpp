#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	printf("Digite tr�s valores (um em cada linha):\n");
	scanf("%f %f %f",&a,&b,&c);
	if (a<b+c&&b<a+c&&c<a+b)
	{
		printf("\nOs n�meros informados podem ser os comprimentos dos lados de um tri�ngulo\n");
		if (a==b&&b==c&&a==c)
		{
			printf("O tri�ngulo ser� equil�tero");
		}
		else if (a==b||a==c||b==c)
		{
			printf("O tri�ngulo ser� is�sceles");
		}
		else
		{
			printf("O tri�ngulo ser� escaleno");
		}
	}
	else
	{
		printf("\nOs n�meros informados n�o podem ser os comprimentos dos lados de um tri�ngulo");
	}
	getch();
}

