#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


main()
{
	int a[]={1,2,1,1,1,2,2,1,2,2};
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(j=0;j<10;j++)
		printf("%d\t",a[j]);
}

