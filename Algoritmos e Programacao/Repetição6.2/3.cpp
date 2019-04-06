#include <stdio.h>
int main()
{
	int number[1], dividend, divisor, quotient;
	printf("Type two numbers (one in each line): ");
	scanf("%d %d",&number[0],&number[1]);
	dividend = number[0];
	if (number[0] < number[1]){
		quotient = 0;
	}
	else {
		while (dividend > number[1]){
			dividend = dividend - number[1];
			quotient++;
		}
	}
	printf("The division between %d and %d is equal to %d",number[0],number[1],quotient);
	return 0;
}
