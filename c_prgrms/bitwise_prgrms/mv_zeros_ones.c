#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

main()
{
	uint32_t num, count_one,total_bits,result;
	printf("enter number\rn");
	scanf("%d",&num);
	count_one=result=0;
	total_bits=sizeof(uint32_t)*8;
	for(int i=0;i<total_bits;i++)
	{
		if((num>>i)&1)
			count_one++;
	}
	if(count_one>0)
		result=~0U << total_bits - count_one;
	printf("after num=%u\r\n",result);
}
