#include<stdio.h>
int main()
{
	int i,n,min=0,x[100];
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter %d elements of array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		

		if(x[i]<min)
		{
			min=x[i];
		}
	}
	printf("minimum=%d",min);
	return 0;
}
