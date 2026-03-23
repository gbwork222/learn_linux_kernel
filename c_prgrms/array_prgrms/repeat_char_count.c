#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

main()
{
	char a[]="aaabbccccd";
	int i,j,repeat=0;

	for(i=0;a[i]!='\0';i++)
	{
		repeat=1;
		for(j=0;a[j]!='\0';j++)
		{
			if((i!=j) && (a[i]==a[j]))
				repeat++;
		}
		printf("the character %c is repeated %d many times\r\n",a[i],repeat);
	}
}

