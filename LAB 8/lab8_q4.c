#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	int i,j,val;
	for(i=0;i<n;i++)
	{
		printf("Enter %d th value: ",i+1);
		scanf("%d",&val);
		a[i]=val;
	}
	int x,e,y;
	printf("Enter the element to delete: ");
	scanf("%d",&e);
	for(x=0;x<n;x++)
	{
		if(a[x]==e)
		{
			y=x;
			
		}
		
	}
	for(j=y;j<n;j++)
	{
		a[j]=a[j+1];
	}
	
	int p;
	printf("New array:\n");
	for(p=0;p<n-1;p++)
	{
		printf("%d\n",a[p]);
	}
	return 0;
}
