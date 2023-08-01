#include<stdio.h>
union demo {
	int age;
	char name[20];
}u1;
main()
{
	u1.age=25;
//	u1.name="Chirag";
	printf("%d",u1.age);
	printf("%s",u1.name);
}
