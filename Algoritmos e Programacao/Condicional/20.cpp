//Segundo uma tabela m�dica, o peso ideal est� relacionado com a altura e o sexo. 
//Elabore um algoritmo que leia a altura e o sexo de uma pessoa, calcule e imprima seu peso ideal, utilizando as seguintes f�rmulas.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float altura;
	char sexo;
	printf("Digite a sua altura (em metros): ");
	scanf("%f",&altura);
	escolhasexo:
	printf("\n(a) Masculino\n(b) Feminino\nDigite a letra correspondente ao seu sexo: ");
	scanf("%s",&sexo);
	switch (sexo)
	{
		case 'a':
			printf("O peso ideal para voc� �: %.2f",(72.7*altura)-58);
			break;
		case 'b':
			printf("O peso ideal para voc� �: %.2f",(62.1*altura)-44.7);
			break;
		default:
			printf("\nO sexo informado n�o existe\n");
			goto escolhasexo;
	}
}
