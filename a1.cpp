#include<stdio.h>
int main()
{
	int i,x[10],sum=0;
	printf("enter the elements of array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d\n",&x[i]);
	}
	printf("even array:\n");
	for(i=0;i<10;i++)
	{
	if(x[i]%2==0)
	{
		printf("%d\t",x[i]);
	}
	}
	printf("\n");
	printf("odd array:\n");
	for(i=0;i<10;i++)
	{
		if(x[i]%2!=0)
		{
			printf("%d\t",x[i]);
		}
	}
	return 0;
	
}
