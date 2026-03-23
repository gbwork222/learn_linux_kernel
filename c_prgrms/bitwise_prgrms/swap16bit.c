#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


main()
{
	unsigned short int y;
	printf("enter number\r\n");
	scanf("%hx",&y);
	y = ((y & 0xFF00) >> 8 | (y & 0x00FF) << 8);
	printf("after swap x=%x\r\n",y);
}
