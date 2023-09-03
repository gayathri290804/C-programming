#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],arrR[3][3],i,j;
	printf("Enter matrix1 elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter matrix2 elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arrR[i][j]=arr1[i][j]+arr2[i][j];
	} 
}
printf("Addition of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arrR[i][j]);
		}
		printf("\n");
	}
	return 0;
}
