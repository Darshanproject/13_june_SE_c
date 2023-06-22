
/*
there are 5 types of controller statement
1) simple if
2) if else 
3) else if leadder
4) nested if 
5) Switch 
*/


#include<stdio.h>
main()
{
	int num;
	printf("Enter your values :");
	scanf("%d",&num);
//	printf("Enter your second value :");
//	scanf("%d",&num1);
//	printf("This is your addtion %d + %d = %d",num,num1,num+num1);
//	printf("\n %d",sizeof(char));
if(num>35)
{
	printf("Pass");
}else{
	printf("Fail");
}
}
