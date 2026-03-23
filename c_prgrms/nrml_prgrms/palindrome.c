#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

main()
{
	int num, palin,rev,temp;
	rev=0;
	printf("enter number\r\n");
	scanf("%d",&num);
	palin=num;
	while(num!=0)
	{
		temp=num%10;
		rev=rev*10+temp;
		num/=10;
	}
	if(rev == palin)
		printf("the given number is palindrome\r\n");
	else
		printf("the given number is not a palindrome\r\n");
}
