#include<stdio.h>
main()
{  
int ans;
	ans=sum();
	printf("This is your addtion %d",ans);
}
int sum()
{
	int a,b;
	printf("Enter your values :");
	scanf("%d%d",&a,&b);
	return a+b;
}
