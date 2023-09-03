#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j==1||j==i)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			if(j==i||j==5)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}
