#include<stdio.h>
main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		printf("Enter the numbers :");
		scanf("%D",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
}
