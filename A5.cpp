#include<stdio.h>
int main()
{
	int i,n,x[100],pos=0,neg=0,zero=0;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter %d elements of array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",x[i]);
		
	}
	for(i=0;i<n;i++)
	{
	if(x[i]>0)
	{
		pos++;
	}
	else if(x[i]<0)
	{
		neg++;
	}
	else
	{
		zero++;
	}
}
	
	printf("count of positive elements is =%d\n",pos);
	printf("count of negative elements is =%d \n",neg);
	printf("count of zero elements is= %d \n",zero);

return 0;
}
