#include<stdio.h>
main()
{
	int i,j,arr[5],a;
	for(i=0;i<5;i++)
	{
		printf("Enter the vale :");
		scanf("%d",&arr[i]);
	}
	printf("This is your normal array :");
	for(i=0;i<5;i++)
	{
		printf("%d \t",arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	printf(" \nThis is your shorted array :");

	for(j=0;j<5;j++)
	{
		printf("%d \t",arr[j]);
	}
}
