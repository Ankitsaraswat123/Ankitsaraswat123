#include<stdio.h>
int main()
{
	int i,x[100],j,n,sum=0;
	printf("enter the order of matrix:\n");
	scanf("%d",n);
	printf("enter the elements of matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("the matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	printf("rowwise sum:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+x[i][j];
		}
		printf("%d",sum);
	}
}
