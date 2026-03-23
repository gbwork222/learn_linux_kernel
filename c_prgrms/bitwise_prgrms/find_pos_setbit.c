#include<stdio.h>
main()
{
	unsigned int n;
	printf("enter number\r\n");
	scanf("%d",&n);
	int pos=0;
	while((n&1) ==0)
	{
		pos++;
		n=n>>1;
		printf("**the num=%d\r\n",n);
	}
	printf("the set bit at pos%d\r\n",pos);
}

