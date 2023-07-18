//if else
/*
Syntax:
if(condtion){
	statement;
}esle{
	statement;
}
*/
#include<stdio.h>
main()
{
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	if(age > 18)
	{
		printf("You have approved");
	}else{
		printf("You are not allowed");
	}
}
