#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

main()
{
	int a[]={1,2,3,5};
	int n=sizeof(a)/sizeof(a[0]);
	int size=n+1;
	int miss,expected_sum,actual_sum=0;
	expected_sum=size*(size+1)/2;
	printf("expected sum=%d\r\n",expected_sum);
	for(int i=0;i<n;i++)
	actual_sum+=a[i];
	printf("actual_sum=%d\rn",actual_sum);
	miss=expected_sum-actual_sum;
	printf("the missing number %d\r\n",miss);
}


