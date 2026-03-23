#include<stdio.h>
#define MAX 32

int left_rotate(unsigned int n, unsigned int pos)
{
	n = (n << pos) | (n >> (MAX - pos));
	return n;
}

int right_rotate(unsigned int n, unsigned int pos)
{
	n = (n >> pos) | (n << (MAX - pos));
}

main()
{
	unsigned int n, pos;
	scanf("%d%d",&n,&pos);
	printf("enter number and positions of rotate\r\n");
	printf("after right_rotate %d\r\n", right_rotate(n,pos));
	printf("after left rotate %d\r\n", left_rotate(n,pos));
}
