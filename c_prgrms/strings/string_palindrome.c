#include<stdio.h>
#include<string.h>

int mystr_len(char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++);
		return i;
}
int isstr_palindrome(char *str)
{
	int i,j;
	j=mystr_len(str)-1;
	for(i=0,j;i<j;i++,j--)
	{
		if(str[i]!=str[j])
			return -1;
	}
	return 0;

}


main()
{
	char s[100];
	printf("enter string\r\n");
	scanf("%s",s);
	if(isstr_palindrome(s) == 0)
		printf("the given string is palindrome\r\n");
	else
		printf("the given string is not a palindrome\r\n");
}
