#include<stdio.h>
#include<stdlib.h>

int decimal_to_bin(unsigned int n)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",(n>>i)&1U);
	printf("\n");
}

int set_bits(unsigned int x, int p, int n)
{
	printf("before set\r\n");
	decimal_to_bin(x);
	unsigned int mask;
	mask=((1U<<n) - 1 << p);
	x =x | mask;	
	printf("after set\r\n");
	decimal_to_bin(x);
	return x;
}

int clear_bits(unsigned int x, int p, int n)
{

	printf("before clear\r\n");
	decimal_to_bin(x);
	unsigned int mask;
	mask = ((1U << n) -1 << p);
	x = x & ~(mask);
	printf("after clear\r\n");
	decimal_to_bin(x);
	return x;
}

int toggle_bits(unsigned int x, int p, int n)
{
	
	printf("before toggle\r\n");
	decimal_to_bin(x);
	unsigned int mask;
	mask = ((1U << n) -1 << p);
	x = x ^ mask;
	printf("after toggle\r\n");
	decimal_to_bin(x);
	return x;
}

main()
{
	unsigned int x, p, n;
	printf("enter number, position, no of bits to\r\n");
	scanf("%u%u%u",&x,&p,&n);
	printf("after clearing the bits the is %d\r\n",clear_bits(x,p,n));
	printf("after set the number is %d\r\n",set_bits(x,p,n));
	printf("after toggle the bits is %d\r\n",toggle_bits(x,p,n));
	
}
