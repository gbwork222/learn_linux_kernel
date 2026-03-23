#include<stdio.h>
#include<stdlib.h>

main()
{
	unsigned int n;
	int i;
	printf("enter number\r\n");
	scanf("%d",&n);
	for(i=31;i>=0;i--)
		printf("%d",((n>>i)&1U));
	printf("\n");
}

