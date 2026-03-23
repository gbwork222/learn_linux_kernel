#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

main()
{
	int a[10],i,count=0;

	printf("enter number into a\r\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]!=0)
		{
			a[count]=a[i];
			count++;
		}
	}
	while(count<10)
	{
		a[count]=0;
		count++;
	}

	printf("after swap the elements are \r\n");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
}

