#include<stdio.h>
main()
{
	int x=10;
	printf("x=%d\r\n",x);
	scanf("%d",&x);
	printf("%x=%d\r\n",x);
	char str[100];
	scanf("%s",&str);
	printf("%s",str);
}
