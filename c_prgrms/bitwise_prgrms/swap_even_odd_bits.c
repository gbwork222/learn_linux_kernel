#include<stdio.h>
#include<stdint.h>

main()
{
uint32_t x;
printf("enter number\r\n");
scanf("%d",&x);

x = (x & 0xAAAAAAAA) >> 1 | (x & 0X55555555) << 1;

printf("after swap of even odd bits %d\r\n", x);
}
