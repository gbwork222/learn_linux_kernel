#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

main()
{
	int n;
	printf("enter number\r\n");
	scanf("%d",&n);
	if((n%2) == 0)
		printf("the number is even\r\n");
	else
		printf("the number is odd\r\n");
}
