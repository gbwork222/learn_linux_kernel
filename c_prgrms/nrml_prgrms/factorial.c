#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

main()
{
	int n,fa=1;
	printf("enter number\r\n");
	scanf("%d",&n);
	while(n)
	{
		fa=fa*n;
		n--;
	}
	printf("factprial=%d\r\n",fa);
}
