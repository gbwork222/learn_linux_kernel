#include<stdio.h>
#include<stdlib.h>

main()
{
	int i,max,arr[10];
	printf("enter array elements\r\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[10]);
	max=arr[0];
	for(i=1;i<10;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	printf("the maximum element in the array is %d\r\n",max);
}

