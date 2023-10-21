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
	printf("Enter the element to search: ");
	scanf("%d",&e);
	for(x=0;x<n;x++)
	{
		if(a[x]==e)
		{
			y=x;
			
		}
		
	}
	printf("\nThe element %d was found at %d th position",e,y+1);
	return 0;
}
