#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char frase[31];
	int tamanho, qtd=0;
	fgets(frase,sizeof(frase),stdin);
	tamanho = strlen(frase);
	for (int i=0; i<tamanho; i++)
	{
		if (toupper(frase[i])=='A'||
			toupper(frase[i])=='E'||
			toupper(frase[i])=='I'||
			toupper(frase[i])=='O'||
			toupper(frase[i])=='U')
				qtd++;
		//switch(frase[i])
		//{
		//	case 'a':
		//	case 'A':
		//	case 'e':
		//	case 'E':
		//	case 'i':
		//	case 'I':
		//	case 'o':
		//	case 'O':
		//	case 'u':
		//	case 'U':
		//		qtd++;
		//		break;
		//}
	}
	printf("%d",qtd);
	return 0;
}
