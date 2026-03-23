#include<stdio.h>
#include<stdlib.h>


main()
{
	int n,t1=0,t2=1,t3;
	printf("enter number of terms\r\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d\t",t1);
		t3=t1+t2;
		t1=t2;
		t2=t3;
	}
}

