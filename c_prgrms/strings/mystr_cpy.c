#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


char *(*fptr)(char *, char *);

char *mystr_cpy(char *src, char *dst)
{
	int i,len;
	for(i=0;dst[i]!='\0';i++)
		src[i]=dst[i];
	src[i]='\0';

	return src;
}
main()
{
	char s1[]="gayathri";
	char s2[]="bhavani";
	printf("before copy src=%s\r\n",s1);
	fptr=mystr_cpy;
	printf("after string copy src=%s\r\n",(*fptr)(s1,s2));
}

