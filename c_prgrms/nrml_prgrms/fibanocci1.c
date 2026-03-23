#include<stdio.h>
main()
{
	int t3,t1=0,t2=1;
	printf("%d\t%d\t",t1,t2);
	t3=t1+t2;
	for(int i=1;i<10;i++)
	{
		printf("%d\t",t3);
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
}
