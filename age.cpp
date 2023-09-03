#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=18)
	printf("eligible");
	else
	printf("still he/she has %d years to vote",18-n);
	return 0;
}
