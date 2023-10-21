#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n+1];
	int i,j,val;
	for(i=0;i<n;i++)
	{
		printf("Enter %d th value: ",i+1);
		scanf("%d",&val);
		a[i]=val;
	}
	int x,e;
	printf("Enter the position where you wish to insert element: ");
	scanf("%d",&x);
	printf("Enter the element: ");
	scanf("%d",&e);
	for(j=x-1;j<=n;j++)
	{
		a[j+1]=a[j];
	}
	
	a[x-1]=e;
	int p;
	printf("New array:\n");
	for(p=0;p<n+1;p++)
	{
		printf("%d\n",a[p]);
	}
	return 0;
}
