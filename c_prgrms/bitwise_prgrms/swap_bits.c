#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


int swap_bits(int x,int p1, int p2, int n)
{
	
	int set1, set2, set3;
	set1 = (x >> p1) & ((1U << n) - 1); 
	set2 = (x >> p2) & ((1U << n) - 1);

	set3 = (set1 ^ set2);
	set3 = (set3 << p1) | (set3 << p2);

	x = (x ^ set3);

	decimal_to_bin(x);
	return x;

}

int decimal_to_bin(unsigned int n)
{
	unsigned int i, mask=1;
	printf("the given number in terms of binary is \r\n");
	for(i=31;i>=0;i--)
	{
		mask=(1U << i);

		if(n & mask)
			printf("1\t");
		else
			printf("0\t");
	}
	printf("\n");
}

main()
{
	unsigned char x,p1,p2,n;
	printf("enter number and positions to swap the bits \r\n");
	scanf("%X%X%X%X",&x,&p1,&p2,&n);
	
	decimal_to_bin(x);
	printf("after swap %X\r\n",swap_bits(x,p1,p2,n));
	
}


