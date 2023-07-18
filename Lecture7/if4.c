/*
nested if 
if(){

if(condtion)
{
	statement;
}else{
	statement;
}
}else{
}
*/
#include<stdio.h>
main(){
	
int marks;
	printf("Enter your marks here:");
	scanf("%d",&marks);
	if(marks <100)
	{
			if(marks >90 && marks <100)
	{
		printf("A grade !!!");
	}else if(marks > 80 && marks <=90)
	{
		printf("B garde !!");
	}else if(marks > 70 && marks <=80)
	{
		printf("C grade !");
	}else if(marks > 60 && marks <=70)
	{
		printf("D garde ");
	}else if(marks > 35 && marks <=60)
	{
		printf("Just pass ");
	}else{
		printf("Fail");
	}
	}else{
		printf("Invalid input ");
	}
}

