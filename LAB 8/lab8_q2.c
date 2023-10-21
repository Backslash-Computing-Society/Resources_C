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
	int b[n];
	i=0;
	for(j=n-1;j>=0;j--)
	{
		b[j]=a[i];
		i++;
	}
	int p;
	printf("Reversed array:\n");
	for(p=0;p<n;p++)
	{
		printf("%d\n",b[p]);
	}
	return 0;
}
