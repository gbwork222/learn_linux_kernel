#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

int method1(unsigned int n)
{
	while(n!=1)
	{
		if((n%2)!=0)
			return 0;
		n/=2;
	}
	return 1;
}

int method2(unsigned int n)
{
	if((n&(n-1)) == 0)
		return 1;
	else
		return 0;
}
int method3(unsigned int n)
{
if(n&(n-1))
	return 0;
else
	return 1;
}
main()
{
	unsigned int n;
	printf("enter number\r\n");
	scanf("%d",&n);
	if(method1(n))
		printf("the given number is power of two\r\n");
	else
		printf("the given number is not a power of two\r\n");


	if(method2(n))
		printf("the given number is power of two\r\n");
	else
		printf("the given number is not a power of two\r\n");


	if(method3(n))
		printf("the given number is power of two\r\n");
	else
		printf("the given number is not a power of two\r\n");
}
