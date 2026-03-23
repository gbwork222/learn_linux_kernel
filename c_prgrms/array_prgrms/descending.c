#include<stdio.h>
#include<stdlib.h>

main()
{
	int temp,i,j,a[10];
	printf("enter array elements\r\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after descending the array elements are\r\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}

