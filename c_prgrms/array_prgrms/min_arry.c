#include<stdio.h>
#include<stdlib.h>

main(){
	int i,min,arr[10];
	printf("enter the array numbers");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	min=arr[0];
	for(i=1;i<10;i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}
	printf("the minimum element in the array is %d\r\n",min);
}

