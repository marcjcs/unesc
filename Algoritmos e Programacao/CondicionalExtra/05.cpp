/*Calcule a m�dia aritm�tica das 3 notas de um aluno e mostre, al�m do valor da m�dia, uma mensagem de "Aprovado", caso a m�dia seja igual 
ou superior a 7, a mensagem �em prova final� caso a m�dia seja menor que 7 e maior ou igual a 4 e "reprovado", caso contr�rio.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3,media;
	printf("Digite as suas notas (uma em cada linha):\n");
	scanf("%f %f %f",&nota1,&nota2,&nota3);
	media=(nota1+nota2+nota3)/3.0;
	if (media>=7)
	{
		printf("\nM�dia final: %.2f\nAprovado",media);
	}
	else if (media<7&&media>=4)
	{
		printf("\nM�dia final: %.2f\nEm prova final",media);
	}
	else
	{
		printf("\nM�dia final: %.2f\nReprovado",media);
	}
	getch();
}
