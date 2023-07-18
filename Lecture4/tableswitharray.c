/*
how many tables do you want to print. 8
which tables do you want to print. 12345678
this is your choice  1,2,3,4,5,6,7,8
1*1=1
1*1=1
1*1=1
1*1=1
1*1=1
1*1=1
1*1=1
1*1=1
1*1=1
1*1=1
*/
#include<stdio.h>
main(){
	int choice,table[100],i,j,k=0;
	printf("Please eneter your choice : ");
	scanf("%d",&choice);
	printf("Enter your tables here :");
	for(i=0;i<choice;i++)
	{
		scanf("%d",&table[i]);
		
	}
	printf("This is your choice :");
	for(i=0;i<choice;i++)
	{
		printf(" %d \t",table[i]);
		
	}
	printf("\n");
	for(j=0;j<choice;j++){
	
	for(k=1;k<=10;k++){
		printf("%d * %d = %d\n",table[i],k,table[i]*k);
	}
	printf("****************************************");
	}
}
