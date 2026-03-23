#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

int method1(unsigned int n)
{
	int pos=0;
	while( (n&1) == 0)
	{
	pos++;
	n>>=1;
	}
	return pos;
}

int method2(unsigned int n)
{
	unsigned int pos,mask=1;
	pos=0;

	for(int i=0;i<32;i++)
	{
		if((n & mask<<i) == (mask << i))
			return pos;
		else
			pos++;
	}
}

main()
{
	unsigned int n,pos=0;
	printf("enter number\r\n");
	scanf("%d",&n);
	printf("the rightmost set bit position %d\r\n",method1(n));
	printf("the rightmost set bit position %d\r\n",method2(n));
}
