#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of arrays: ");
	scanf("%d",&n);
	int a[n];
	int i,j,val;
	printf("Enter elements of first array:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter %d th value: ",i+1);
		scanf("%d",&val);
		a[i]=val;
	}
	int b[n];
	printf("Enter elements of second array:\n");
	for(j=0;j<n;j++)
	{
		printf("Enter %d th value: ",j+1);
		scanf("%d",&val);
		b[j]=val;
	}
	int add[n];
	int k,sum=0;
	for(k=0;k<n;k++)
	{
		sum=a[k]+b[k];
		add[k]=sum;
		sum=0;
	}
	int p;
	printf("Resultant array:\n");
	for(p=0;p<n;p++)
	{
		printf("%d\n",add[p]);
	}
	return 0;
	
}
