#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

main()
{
	int n,i,cnt=0;
	printf("enter number\r\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((n%i) == 0)
			cnt++;
	}
	if(cnt ==2)
		printf("the given number is prime number\n");
	else
		printf("not a prime number\r\n");

}
