#include<stdio.h>
main()
{
	int arr2[3][3],k,i,j,arr[3][3],arr1[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the vales :[%d],[%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the vales :[%d],[%d]",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",arr1[i][j]);
		}
		printf("\n");
	}
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr2[i][j]=0;
			for(k=0;k<3;k++)
			arr2[i][j]+=arr[i][k]*arr1[k][j];
		
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			{
				printf("%d \t",arr2[i][j]);
			}
			printf("\n");
	
	}
		
}
