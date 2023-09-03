#include<stdio.h>
int main()
{
	int n,n1,sum=0,d;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		d=n%10;
		sum=sum+d+1;
		n=n/10;
	}
	printf("Sum of digits=%d",sum);
	return 0;
}
