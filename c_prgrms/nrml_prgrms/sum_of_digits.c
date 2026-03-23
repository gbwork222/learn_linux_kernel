#include<stdio.h>
main()
{
	int num,temp,sum=0;
	printf("enter number\r\n");
	scanf("%d",&num);
	while(num)
	{
		temp=num%10;
		sum=sum+temp;
		num/=10;
	}
	printf("the sum=%d\r\n",sum);
}

