//Elabore um algoritmo que leia dois números inteiros e efetue a adição; caso o resultado seja maior que 10, imprima-o.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num,adicao;
    printf("Digite um numero: ");	
    scanf("%d",&num);
    adicao += num;
    printf("Digite um segundo numero: ");
    scanf("%d",&num);
    adicao += num;
	if(adicao>10)
	{
		printf("O resultado é: %d",adicao);
	}
	getch();
}
