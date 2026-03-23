#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

main()
{
	int num,temp,count=0;
	printf("enter number \r\n");
	scanf("%d",&num);
	while(num)
	{
		//temp=num%10;
		count++;
		num/=10;
	}
	printf("the count=%d\r\n",count);
}
