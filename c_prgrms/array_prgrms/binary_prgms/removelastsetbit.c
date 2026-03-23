#include<stdio.h>
#include<stdlib.h>

main()
{
	unsigned int num;
	printf("enter number\r\n");
	scanf("%d",&num);
	num=num & (num-1);
	printf("after removing the last set bit the number is %d\r\n",num);
}
