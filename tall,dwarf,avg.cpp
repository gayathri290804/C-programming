#include<stdio.h>
int main()
{
	int n;
	printf("Enter the height:");
	scanf("%d",&n);
	if(n<150)
	printf("Dwarf");
	if(n>150)
	printf("Taller");
	if(n==150)
	printf("Average");
	return 0;
}
