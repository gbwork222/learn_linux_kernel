#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

char * (*fptr)(char *, char*);

int mystr_len(char *str)
{
	int i,cnt=0;
	for(i=0;str[i]!='\0';i++)
		cnt++;
	printf("len=%d\r\n",cnt);
	return cnt;
}
char *mystr_cat(char *src, char *dst)
{
	int i, len;
	len=mystr_len(src);
	for(i=0,len;dst[i]!='\0';i++)
		src[len+i]=dst[i];
	
	src[len+i]='\0';
	printf("src=%s",src);

	return src;
}
	
main()
{
	char s1[20]="my name is";
	char s2[20]="gayathri";
	fptr=mystr_cat;
	printf("after my own string concatination the string is %s\r\n", (fptr)(s1,s2));
}

