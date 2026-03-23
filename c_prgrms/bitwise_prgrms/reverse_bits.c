#include<stdio.h>
#include<stdint.h>
#define MAX 32

int reverse_bits(uint32_t n)
{
	uint32_t rev=0;

	for(int i=0;i<MAX;i++)
	{
		if((n&1) == 1)
			rev = rev | 1 << (MAX-1-i);

		n>>=1;
	}
	return rev;

}

main()
{
	uint32_t x;
	printf("enter number\r\n");
	scanf("%d",&x);
	printf("After reverse the number is %d\r\n",reverse_bits(x));
}
