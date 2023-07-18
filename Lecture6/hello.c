#include<stdio.h>
main()
{
	/*
	Data type:
	int  %d
	float %f
	double  %lf
	char  %c,%s
	
	data type <var_name>
	1) we can't use any keywords.
	2) We can't use white space here we can use _.
	3) we can't use numbers in statring of any var_name.
	4) we can only use alp cap sma
	*/
	int num=10;
	float num1=25.22;
	double num2=2587.258;
	char name='A';
	char name1[10]="Meet";
	
	
	printf("%d \n",num);
	printf("%f \n",num1);
	printf("%lf \n",num2);
	printf("\t%c \n",name);
	printf("\n%s",name1);
}
