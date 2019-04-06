#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	printf("Digite três valores (um em cada linha):\n");
	scanf("%f %f %f",&a,&b,&c);
	if (a<b+c&&b<a+c&&c<a+b)
	{
		printf("\nOs números informados podem ser os comprimentos dos lados de um triângulo\n");
		if (a==b&&b==c&&a==c)
		{
			printf("O triângulo será equilátero");
		}
		else if (a==b||a==c||b==c)
		{
			printf("O triângulo será isósceles");
		}
		else
		{
			printf("O triângulo será escaleno");
		}
	}
	else
	{
		printf("\nOs números informados não podem ser os comprimentos dos lados de um triângulo");
	}
	getch();
}

