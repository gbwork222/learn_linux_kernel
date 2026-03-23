#include<stdio.h>
main()
{
	int i,a[5],f_max,s_max;
	printf("enter array elements\r\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	s_max=0;
	f_max=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>f_max)
		{
			s_max=f_max;
			f_max=a[i];
		}
		else if(a[i] > s_max && a[i]!=f_max)
			s_max=a[i];

	}
	printf("the first max=%d\tsecondmax=%d\r\n",f_max,s_max);
}

