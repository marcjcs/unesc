/*Elabore um algoritmo que leia um n�mero e imprima o fatorial desse n�mero. Suponha que o n�mero lido ser�
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
	printf("Digite um n�mero: ");
	scanf("%d",&i);
	printf("Fatorial de %d � %d\n", i, fatorial(i));
	getch();
}
