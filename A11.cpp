#include<stdio.h>
int main()
{
int i,j,n,x[10][10];
printf("enter the size of array matrix:\n");
scanf("%d",&n);
printf("enter the elements of matrix:\n",n);
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&x[i][j]);
	}
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d\t",x[i][j]);
	}
	printf("\n");
}
return 0;
}
