#include<stdio.h>
#include<stdlib.h>

int fibanocci(int n)
{
	if(n <=1)
		return n;
	return fibanocci(n-1) + fibanocci(n-2);
}

main()
{
	int n,i;
	printf("enter number of terms\r\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("%d\t", fibanocci(i));
	}
}


