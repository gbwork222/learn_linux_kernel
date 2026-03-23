#include<stdio.h>
#define MAX 32

int get_bits_m_to_n(unsigned int num, int m, int n)
{
	int num_of_bits= (n - m) + 1;
	unsigned int mask = (1 << num_of_bits) - 1;
	return ((num >> m) & mask);
}

main()
{
	unsigned int num, m, n;
	printf("enter number and positions to extract the bits\r\n");
	scanf("%d%d%d", &num,&m,&n);
	printf("the extracted bit value is %d\r\n",get_bits_m_to_n(num,m,n));
}

