#include<stdio.h>
int main()
{
	int arr[100],pos,c,n;
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(c=0;c<n;c++)
	scanf("%d",&arr[c]);
	printf("Enter location to delete:\n");
	scanf("%d",&pos);
	if (pos>=n+1)
	printf("Deletion not possible");
	
	else
	{
		for(c=pos-1;c<n-1;c++)
		arr[c]=arr[c+1];
		printf("Resultant array is:\n");
		for(c=0;c<n-1;c++)
		printf("%d\n",arr[c]);
	}
	return 0;
}
