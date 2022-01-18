//insert element in array
#include<stdio.h>
int main()
{
	int x[100],ins,pos,n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter %d elements of array:\n",n);
	
		for(i=0;i<n;i++)
		{
		scanf("%d",&x[i]);	
		}
		printf("enter the position of element of array whwre you want to insert the element:\n"); 
	scanf("%d",&pos);
	printf("eneter the element you want to insert:\n");
	scanf("%d",&ins);
	for(i=n;i>pos;i--)
	{
		x[i]=x[i-1];
	}
	x[pos]=ins;
	n++;
	printf("array after insertion\n");
	for(i=0;i<n;i++)
	{
		printf("%d",x[i]);
	}
	return 0;
}
