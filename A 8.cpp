/*swapping of to array
*/
#include<stdio.h>
int main()
{
	int x[100],y[100],z[100],i,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter %d elements of array x:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("enter %d elements of array y:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&y[i]);
	}
     printf("elements of array x is:\n");
     for(i=0;i<n;i++)
     {
     	printf("%d\t",x[i]);
	 }
	 printf("\n");
	 printf("elements of array y is:\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\t",y[i]);
	 }
	 printf("\n");
	 for(i=0;i<n;i++)
	 {
	 	z[i]=x[i];
	 	x[i]=y[i];
	 	y[i]=z[i];
	 }
	 printf("array x after swapping is:\n");
	 for(i=0;i<n;i++)
	 {
	 printf("%d\t",x[i]);
	 	
	 }
	 printf("\n");
	 printf("array y after swapping is:\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\t",y[i]);
	 }
	 return 0;
}
