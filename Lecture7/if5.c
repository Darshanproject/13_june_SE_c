/*

Syntax:
switch(exp){
case 1:
sta;
break;
default:
sta;
break;

}
*/

#include<stdio.h>
main()
{
	int days;
	printf("Enter your day : ");
	scanf("%d",&days);
	switch(days){
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Sturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invalid input");
			break;
	}
}



