#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

main()
{
	unsigned int n, count=0;
	printf("enter number\r\n");
	scanf("%d",&n);
	while(n!=0)
	{
		if((n&1) == 1)
			count++;
		n>>=1;
	}
	printf("the set bit count in number is %d\r\n",count);
}
