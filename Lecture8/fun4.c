#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the values :");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
void sum(int a,int b){
	printf("This is your addtion %d",a+b);
}
