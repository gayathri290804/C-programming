#include<stdio.h>
int main()
{
	int i,j,c=1;
	for(i=0;i<=4;i++)
	{
		for(j=i;j<=4;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
			c=1;
			else
			c=c*(i-j+1)/j;		
			printf("%d ",c );
		}
		printf("\n");
	}
	return 0;
}
