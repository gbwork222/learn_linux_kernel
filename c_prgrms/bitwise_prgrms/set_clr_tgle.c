#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
unsigned int mask=1;

int set_bit(int n, int pos)
{
	return (n | (mask << pos));
}

int clear_bit(int n, int pos)
{
	return (n & (~(mask << pos)));
}

int toggle_bit(int n, int pos)
{
	return (n ^ (mask << pos));
}

main()
{
	int n,pos;
	printf("enter number and position of bit\r\n");
	scanf("%d%d",&n,&pos);
	printf("After set the bit the value is %d\r\n",set_bit(n,pos));
	printf("After clear the bit the value is %d\r\n",clear_bit(n,pos));
	printf("After toggle the bit the value is %d\r\n",toggle_bit(n,pos));
}
