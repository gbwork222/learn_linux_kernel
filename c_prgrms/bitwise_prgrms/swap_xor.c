#include<stdio.h>
#include<stdint.h>

main()
{
	uint32_t x,y;
	printf("enter values\r\n");
	scanf("%d%d",&x,&y);
	printf("before swapping using bitwise x=%d\ty=%d\r\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("after swapping using bitwise x=%d\ty=%d\r\n",x,y);
}




