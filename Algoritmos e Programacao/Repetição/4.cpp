#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	for (i=1;i<=5;i++)
	{
		printf("%d\n",i);
	}
	getch();
}
