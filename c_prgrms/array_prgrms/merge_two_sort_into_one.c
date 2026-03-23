#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

int merge_into_one(int b1[],int b2[], int p, int q)
{
	int c,i,j;
	int *merge = (int *)malloc((p+q)*sizeof(int));
	c=i=j=0;
	while(i<p && j<q)
	{
		if(b1[i]<=b2[j])
	
			merge[c++]=b1[i++];
		else
			merge[c++]=b2[j++];
	}
	while(i<p)
		merge[c++]=b1[i++];
	while(j<q)
		merge[c++]=b2[j++];
	printf("after merging of two sorted arrays into one\r\n");
	for(i=0;i<p+q;i++)
		printf("%d\t",merge[i]);

}

main()
{
	int a1[5],a2[5],i,n,m;
	printf("enter elements into a1\r\n");
	for(i=0;i<5;i++)
		scanf("%d",&a1[i]);
	printf("enter elements into a2\r\n");
	for(i=0;i<5;i++)
		scanf("%d",&a2[i]);
	n=sizeof(a1)/sizeof(a1[0]);
	m=sizeof(a2)/sizeof(a2[0]);
	merge_into_one(a1,a2,n,m);
}

