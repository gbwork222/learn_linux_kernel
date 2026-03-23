#include<stdio.h>


main()
{
	int i;
	char s1[]="this is test string1";
	printf("%p-%s",s1,s1);
	for(i=0;s1[i]!='\0';i++)
		printf("%c-%p\r\n",s1[i],&s1[i]);

	printf("enter a different string into s1\r\n");
	scanf("%s",s1);
	printf(s1);
	printf("%p-%s",s1,s1);
}
