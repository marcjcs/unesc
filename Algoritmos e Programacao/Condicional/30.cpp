#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	if (idade>=5&&idade<=7)
	{
		printf("Você participa da categoria Infantil A");
	}
	else if (idade>=8&&idade<=10)
	{
		printf("Você participa da categoria Infantil B");
	}
	else if (idade>=11&&idade<=13)
	{
		printf("Você participa da categoria Juvenil A");
	}
	else if (idade>=14&&idade<=17)
	{
		printf("Você participa da categoria Juvenil B");
	}
	else if (idade>17)
	{
		printf("Você participa da categoria Senior");
	}
	getch ();
}

