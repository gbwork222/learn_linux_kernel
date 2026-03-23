#include<stdio.h>
#include<stddef.h>
#include<stdint.h>


uint32_t swap_endiness(uint32_t val)
{
	return ((val & 0xFF000000) >> 24 | (val & 0x000000FF) << 24 | (val & 0x00FF0000) >> 8 | (val & 0x0000FF00) << 8);

}

main()
{
	uint32_t le_val=0x12345678;
	uint32_t be_val;
	
	be_val=swap_endiness(le_val);
	printf("after swap the val = %x\r\n",be_val);
}
