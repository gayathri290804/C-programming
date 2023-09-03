#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	printf("The factors of the given number are");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\n",i);
		
	}
	
	return 0;
}
