#include <stdio.h>
#include <conio.h>
main ()
{
	float num;
	printf("Digite um numero: ");
	scanf("%f",&num);
	if (num>20)
	{
		printf("Resultado: %.2f",num/2);
	}
	else
	printf("Resultado: %.2f",num);
	getch();
}
