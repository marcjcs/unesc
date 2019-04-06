/*Elabore um algoritmo que leia um número e imprima o fatorial desse número. Suponha que o número lido será
maior ou igual a zero.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
unsigned long long int fatorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * fatorial(i - 1);
}

main() 
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	printf("Digite um número: ");
	scanf("%d",&i);
	printf("Fatorial de %d é %d\n", i, fatorial(i));
	getch();
}
