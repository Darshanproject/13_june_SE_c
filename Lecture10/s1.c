/*
struct{
mem fun;
}s1;

s1.mem fun
*/

#include<stdio.h>
struct demo{
	int age;
	char name[20];
}s1;
main()
{
	struct demo s2 = {35,"Jeet"};
	s1.age = 20;
	strcpy(s1.name,"Meet");
	printf("%d \n",s1.age);
	printf("%s",s1.name);
	printf("%d",s2.age);
	printf("%s",s2.name);
//	printf(s1.name("Meet"));s
}
