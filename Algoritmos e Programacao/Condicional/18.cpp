#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float x;
	printf("Digite um valor: ");
	scanf("%f",&x);
	if (x<=1)
	{
		printf("\nf(x)=1");
	}
	else if (x>1&&x<=2)
	{
		printf("\nf(x)=2");
	}
	else if (x>2&&x<=3)
	{
		printf("f(x)=%.2f",pow(x,2));
	}
	else
	{
		printf("f(x)=%.2f",pow(x,3));
	}
	getch();
}
