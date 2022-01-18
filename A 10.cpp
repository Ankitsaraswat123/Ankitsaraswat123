#include<stdio.h>
int main()
{
	int i,n,x[10],del,j;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter %d element of array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("enter the element which you want to delet:\n");
	scanf("%d",&del);
	
	for(i=0;i<n;i++)
	{
		if(x[i]==del)
		break;
	}
	for(j=i;j<n;j--)
	{
		x[j]=x[j+1];
	
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d",x[i]);
	}
	return 0;
}
