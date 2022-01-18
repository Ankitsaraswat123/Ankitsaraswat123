#include<stdio.h>
int main()
{
	int i,size;
	printf("enter the size of array");
	scanf("%d",&size);
	int array[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("[%d]",array[i]);
	}
	return 0;
}
