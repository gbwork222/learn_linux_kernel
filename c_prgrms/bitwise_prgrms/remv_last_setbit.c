#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

main()
{
	unsigned int n;
	printf("enter number\r\n");
	scanf("%d", &n);
	n = n & (n - 1);
	printf("after removing the last bit %d\r\n",n);
}


