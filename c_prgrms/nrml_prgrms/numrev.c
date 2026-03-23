#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

main()
{
	int num,temp,rev=0;
	printf("enter number\r\n");
	scanf("%d",&num);
	while(num!=0)
	{
		temp=num%10;
		rev=rev*10+temp;
		num/=10;
	}
	printf("after reverse num=%d\r\n",rev);
}

