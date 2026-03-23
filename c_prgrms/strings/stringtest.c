#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

main()
{
	char s1[]="this is characher array";
	char s2[]={'i','n','d','i','v','i','d','u','a','l','\0'};
	char *s3="this is character pointer array";
	char s4[100];
	char *s5=NULL;
	printf("s1=%s\r\n",s1);
	printf("s2=%s\r\n",s2);
	printf("s3=%s\r\n",s3);
	for(int i=0;i<20;i++)
	scanf("%s",&s4[i]);
	scanf("%s",&s5);
	printf("s4=%s\r\n",s4);
	printf("s5=%s\r\n",s5);


}
