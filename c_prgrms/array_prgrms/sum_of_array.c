#include<stdio.h>
#include<stdlib.h>

main()
{
	int i,a[10],sum=0;
	printf("enter array numbers\r\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		sum=sum+a[i];
	printf("the sum of array is %d\r\n",sum);
}
