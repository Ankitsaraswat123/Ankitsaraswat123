#include<stdio.h>
int main()
{
	int max=0,i,n,x[100];
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter %d elements of array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	
	if(x[i]>max)
	{
		max=x[i];
	}
}
	printf("maximum=%d",max);
	return 0;
}
