#include <stdio.h>
double pi(int ntermos)
{
	double divisor=1;
	double res;
	for (int i=1; i<=ntermos; i++)
	{
		if (i%2==0)
		{
			res=res-(4/divisor);
		}
		if (i%2!=0)
		{
			res=res+(4/divisor);
		}
		divisor+=2;
	}
	return res;
}
int main()
{
	int n=1000;
	printf("%lf",pi(n));
	return 0;
}
