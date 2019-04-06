#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,qtdmaior=0;
	float nota[4],media,soma=0;
	for (i=1;i<=20;i++)
	{
		printf("Digite a sua primeira nota: ");
		scanf("%f",&nota[0]);
		printf("Digite a sua segunda nota: ");
		scanf("%f",&nota[1]);
		printf("Digite a sua terceira nota: ");
		scanf("%f",&nota[2]);
		printf("Digite a sua quarta nota: ");
		scanf("%f",&nota[3]);
		printf("Digite a sua quinta nota: ");
		scanf("%f",&nota[4]);
		media=(nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5;
		soma=soma+media;
		printf("A sua média é: %.2f\n\n",media);
		if (media>=5)
		{
			qtdmaior++;
		}
	}
	printf("\n\nMédia da classe: %.2f",soma/20);
	printf("\nPercentual de alunos com média maior ou igual a 5: %d%%",qtdmaior*100/20);
	getch();
}
