#include<stdio.h>
int main()
{
	int x[100],y[100],z[100],i,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter %d elements of array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",x[i]);
		printf("%d\n",y[i]);
	}
	for(i=0;i<n;i++)
	{
		x[i]=y[i];
		z[i]=x[i];
		x[i]=y[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",x[i]);
		printf("%d\n",y[i]);
	}
	return 0;
}
