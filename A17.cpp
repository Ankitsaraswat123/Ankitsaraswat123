#include<stdio.h>
int main()
{
	int i,j,x[3][3],sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	printf("rowise sum:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+x[i][j];
		}
		
		printf("%d\n",sum);
		
	}
}
