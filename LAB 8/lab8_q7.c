#include<stdio.h>
int main()
{
    int n,first,last,mid,res;
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
    int tot=0,count=0,avg;
    for(j=0;j<n;j++)
	{
		tot+=a[j];
		count++;
	}
	avg=tot/count;
	printf("Sum of elements of array: %d\nAverage of elements of array: %d",tot,avg); 
  return 0;
}
