#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	char pass[30];
	printf("Digite a senha: ");
	scanf("%[^\n]%*c", pass);
	fflush(stdin);
	int result = strcmp(pass, "Patinho Feio");
	if(result==0)
	printf("Acesso permitido");
	else
	printf("Você não tem acesso ao sistema");
}
