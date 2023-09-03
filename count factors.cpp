#include<stdio.h>
int main()
{
	int i,n,c=0;
	scanf("%d",&n);
	printf("The total number of factors of the given number are\n");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	printf("%d",c);
	
	return 0;
}
