#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

main()
{
	int i,j,temp,a[6];
	printf("enter array numbers\r\n");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting the array elements are \r\n");
	for(i=0;i<6;i++)
		printf("%d\t",a[i]);
}

