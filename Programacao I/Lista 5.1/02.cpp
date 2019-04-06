#include <stdio.h>

int CalculaDigito(int);

int main()
{
	int cod=1841;
	printf("%d",CalculaDigito(cod));
	return 0;
}

int CalculaDigito (int codigo)
{
	int j=0;
	int res=0, peso=5, resfinal=0;
	int nDigitos[4];
	while (codigo>0)
	{
		nDigitos[j]=codigo%10;
		codigo=codigo/10;
		j++;
	}
	for (int i = j - 1;  i >= 0; i--) 
	{
		res = res + (nDigitos[i] * peso); 
		peso--;
	}
	resfinal=res%11;
	resfinal=11-resfinal;
	if (resfinal==10||resfinal==11)
	{
		return 0;
	}
	else
	{
		return resfinal;
	}
}
