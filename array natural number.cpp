#include<stdio.h>
int main()
{
	int n,i,arr[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<=n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
