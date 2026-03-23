#include<stdio.h>
#include<stddef.h>
#include<string.h>

int mystr_len(char *str)
{
	int i, count=0;
	for(i=0;str[i]!='\0';i++)
		count++;
	return count;
}


int mystr_cmp(char *s1,char *s2)
{
	int l1,l2;
	l1=mystr_len(s1);
	l2=mystr_len(s2);
	if(l1!=l2)
		return -1;
	if(l1 ==l2)
	{
		while((*s1 == *s2) && (*s1!='\0'))
		{
			s1++;
			s2++;
		}
		if((*s1 == '\0') && (*s2 == '\0'))
			return 0;
	}
	return -1;
}



main()
{
	int res;
	char s1[100],s2[100];
	printf("enter strings\r\n");
	scanf("%s%s",s1,s2);
	if(mystr_cmp(s1,s2) == 0)
		printf("the given strings are same\r\n");
	else
		printf("the string are not same\r\n");

}
