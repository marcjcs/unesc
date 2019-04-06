#include <stdio.h>
int main()
{
	float salario;
	printf("Entre com o salario-base: ");
	scanf("%f",&salario);
	printf("Salario final: %.2f",salario+((salario*0.05)-(salario*0.07)));
	return 0;
}
