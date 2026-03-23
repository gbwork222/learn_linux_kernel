#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

int bubble_sort(int *m,  int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(m[i]>m[j])
			{
				t=m[i];
				m[i]=m[j];
				m[j]=t;
			}
		}
	}
}
int *merge_array(int a1[], int a2[], int n, int m)
{
	int *b=(int *)malloc((n+m)*sizeof(int));

	int i,j;
	for(i=0;i<n;i++)
		b[i]=a1[i];
	for(j=0;j<m;j++)
		b[n+j]=a2[j];

	return b;
}

main()
{
	int a1[5], a2[5], i,j,n,m;
	printf("enter elements into a1\r\n");
	for(i=0;i<5;i++)
		scanf("%d",&a1[i]);
	printf("enter elements into a2\r\n");
	for(j=0;j<5;j++)
		scanf("%d",&a2[j]);
	n=sizeof(a1)/sizeof(a1[0]);
	m=sizeof(a2)/sizeof(a2[0]);
	int *b=merge_array(a1,a2,n,m);
	bubble_sort(b,n+m);
	printf("after sort\r\n");
	for(i=0;i<n+m;i++)
		printf("%d\t",b[i]);
}
	

