#include<stdio.h>
int main()
{
	int arr[100],i,n,min,max;
	printf("Enter number of elements:");
	scanf("%d",&n);
    printf("Enter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	min=max=arr[0] ;
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		min=arr[i];
		if(max<arr[i])
		max=arr[i];
	 } 
	 printf("\nMin value is %d",min);
	 printf("\nMax value is %d",max);
	 return 0;
}
