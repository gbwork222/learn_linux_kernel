#include<stdio.h>
#include<stdlib.h>

main()
{
	int i,f_min,s_min,a[5];
	printf("enter array numbers\r\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	f_min=a[0];
	s_min=0;
	for(i=1;i<5;i++)
	{
		if(a[i]<f_min)
		{
			s_min=f_min;
			f_min=a[i];
		}
		else if(a[i]<s_min && a[i]!=f_min)
			s_min=a[i];
	}
	printf("the first min=%d\tsecond min=%d\r\n",f_min,s_min);
}

