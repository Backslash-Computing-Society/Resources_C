#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	char a[n];
	int i,val;
	for(i=0;i<n;i++)
	{
		printf("Enter %d th element: ",i+1);
		scanf("%c",&val);
		a[i]=val;
	}
	int j;
	char b[n];
	for(j=0;j<n;j++)
	{
		b[j]=a[j];
	}
	int p;
	printf("First array:\n");
	for(p=0;p<n;p++)
	{
		printf("%c\n",a[p]);
	}
	printf("Second array:\n");
	for(p=0;p<n;p++)
	{
		printf("%c\n",b[p]);
	}
	return 0;
	
	
}
