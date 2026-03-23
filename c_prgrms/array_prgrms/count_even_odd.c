#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

int main()
{
	int a[]={10,2,3,7,12,15,20};
	int even,odd;
	even=odd=0;
	for(int i=0;i<7;i++)
	{
		if(a[i]%2 == 0)
			even++;
		else
			odd++;
	}
	printf("in the given array even count=%d\todd count = %d\r\n",even,odd);
}
