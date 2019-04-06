#include <stdio.h>
int main()
{
	int num;
	while(scanf("%d",&num))
	{
		if (num==-999) break;
		printf("%d\n",num*3);
	}
//	scanf("%d",&num);
//	while (num!=-999)
//	{
//		printf("%d\n",num*3);
//		scanf("%d",&num);
//	}
	return 0;
}
