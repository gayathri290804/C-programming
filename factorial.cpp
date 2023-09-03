#include<stdio.h>
int main()
{
	int n,fact;
	scanf("%d",&n);
	while(n>=1)
	{
		fact=n*(n-1);
		n++;
	}
	printf("The factorial of %d is %d",n,fact);
	return 0;
}
