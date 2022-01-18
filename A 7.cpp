#include<stdio.h>
int main()
{
	int x[100],y[100],z[100],n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter %d elements of array x:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
		printf("\n");
		printf("%d\t",y[i]);
	}
	
	
}
