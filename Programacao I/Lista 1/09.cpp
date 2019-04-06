#include <stdio.h>
int main()
{
	float salario;
	printf("Salario = ");
	scanf("%f",&salario);
	if (salario<500)
	{
		salario+=(salario*0.05);
	}
	else if (salario>=500&&salario<=1200)
	{
		salario+=(salario*0.12);
	}
	if (salario<=600)
	{
		salario+=150;
	}
	else
	{
		salario+=100;
	}
	printf("Salario final: %.2f",salario);
	return 0;
}
