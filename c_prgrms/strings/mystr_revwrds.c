#include<stdio.h>
#include<string.h>


void rev_char(char *s, char *e)
{
	char t;
	while(s<e)
	{
		t = *s;
		*s++=*e;
		*e--= t;
	}
}

char *mywrds_rev(char *s)
{
	char *wb, *we;
	wb=we=s;
	while(*we)
	{
		we++;
		if(*we == ' ')
		{
			rev_char(wb,we-1);
			wb = we+1;
		}
		if(*we == '\0')
			rev_char(wb,we-1);
	}
	rev_char(s,we-1);
//	printf("s=%s\r\n",s);
	return s;
}


main()
{
	char s[]="banglore is beatiful city";
	printf("before reverse %s\r\n",s);
	printf("after reverse %s\r\n",mywrds_rev(s));

//	printf("after reverse %s\r\n",mywrds_rev(s));
}
