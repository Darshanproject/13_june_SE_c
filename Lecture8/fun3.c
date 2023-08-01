#include<stdio.h>
main()
{
	int a,b,ans;
	printf("Enter teh values");
	scanf("%d%d",&a,&b);
	ans=sum(a,b);
	printf("This is your ans %d",ans);
}

int sum(int a,int b){
	return a+b;
}
