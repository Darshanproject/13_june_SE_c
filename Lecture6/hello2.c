#include<stdio.h>
main()
{
	int age;
	char name[20];
	
	printf("Enter your age :");
	scanf("%d",&age);	
	printf("Enter your name :");
	scanf("%s",&name);

	printf("This is your age %d this is your name %s",age,name);
}
