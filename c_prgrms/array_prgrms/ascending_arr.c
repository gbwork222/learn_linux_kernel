#include<stdio.h>
#include<stdlib.h>

main()
{
	int i,j,temp,arr[10];
	printf("enter array elements\r\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("the arary elements after ascending order is \r\n");
	for(i=0;i<10;i++)
		printf("\n%d",arr[i]);
}
