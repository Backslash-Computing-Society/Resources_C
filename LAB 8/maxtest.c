#include<stdio.h>
void min_max(int [],int);
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	int i,j,k,val;
	for(i=0;i<n;i++)
	{
		printf("Enter %d th value: ",i+1);
		scanf("%d",&val);
		a[i]=val;
	}
	min_max(a,n);
}







void min_max(int a[],int b){
	int max=0,min=0;
	int i;
	for(i=0;i<b;i++)
	{
		if(a[i+1]>a[i])
		{
			max=a[i+1];
		}
		else if(a[i+1]<a[i])
		{
			min=a[i+1];
		}
	}
	printf("Maximum is %d\n",max);
	printf("Minimum is %d\n",min);
	
}
