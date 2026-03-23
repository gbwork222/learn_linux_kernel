#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<string.h>


main()
{
	char str[]="my name is gayathri";
	char *s1;
	printf("str=%s\r\n",str);
	s1=(char *)malloc(10*sizeof(char));
	scanf("%s",s1);
	printf("%s",s1);
}

	
