#include<stdio.h>
#include<stdio_ext.h>

struct student{
	char name[100];
	int id;
	int grade;
};
main()
{
	int x;
	char y;
	char str[20];
	char *str1;
	struct student s1;
	int arr[10];
	x=10;
	scanf("enter integer constant %d\r\n",&x);
	printf("my integer constant is %d\r\n",x);
	//int status=fpurge(stdin);
	/*y='s';
	printf("my character constant is %c\r\n",y);
	scanf("enter character constant %c\r\n",&y);
	printf("my character constant is %c\r\n",y);
	str[20]="my_string";
	printf("my string constant is %s\r\n",str);
	str1="character string";
	printf("my pointer string is %s\r\n",str1);
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<10;i++)
		printf("%d",arr[i]);
	scanf("%s",&s1.name);
	scanf("%d",&s1.id);
	scanf("%d",&s1.grade);
	printf("%s",s1.name);
	printf("%d",s1.id);
	printf("%d",s1.grade);*/

}
