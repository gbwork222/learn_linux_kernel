#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

char *(*fptr)(char *);

int mystr_len(char *s)
{
	int i,cnt=0;
	for(i=0;s[i]!='\0';i++)
		cnt++;
	return --cnt;
}

char *mystr_rev(char *s)
{
	int i,j;
	char c;
	j=mystr_len(s);
	for(i=0,j;i<j;i++,j--)
	{
		c=s[i];
		s[i]=s[j];
		s[j]=c;
		printf("%c\t%c\r\n",s[i],s[j]);
	}
	printf("%s\r\n",s);
	return s;
}


main()
{
 char s[20];
 printf("enter the string\r\n");
 scanf("%s",s);
 fptr=mystr_rev;
 printf("after reversing the string %s\r\n",(fptr)(s));
}
		 
