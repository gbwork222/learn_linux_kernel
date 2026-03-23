#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
void find_non_repeting(int a[], int n)
{
	int i,j,is_repeting=0;
	for(i=0;i<n;i++)
	{
		is_repeting=1;
		for(j=0;j<n;j++)
		{
			if((i!=j)&& a[i]==a[j])
				is_repeting++;
		}
		if(is_repeting == 1)
			printf("the non repeting number is %d\r\n",a[i]);
	}
}
void remove_duplicate(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{

			printf("before before j=%d\r\n",j);
			if(a[i] == a[j])
			{
				for(k=j;k<n-1;k++)
					a[k]=a[k+1];
			
			printf("before j=%d\r\n",j);
			j--;
			printf("after j=%d\r\n",j);
	                printf("n=%d\r\n",n);
			n--;
			}
		}
	}
	printf("n=%d\r\n",n);
	printf("after removing duplicates the array elements are\r\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

}
main()
{
	int arr[]={1,2,3,2,1,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	find_non_repeting(arr,n);
	remove_duplicate(arr,n);
}
