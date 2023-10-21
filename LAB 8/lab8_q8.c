#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter size of first array: ");
	scanf("%d",&n1);
	int a[n1];
	int i,j,val;
	for(i=0;i<n1;i++)
	{
		printf("Enter %d th value:\n",i+1);
		scanf("%d",&val);
		a[i]=val;
	}
	printf("Enter size of second array: ");
	scanf("%d",&n2);
	int b[n2];
	for(j=0;j<n2;j++)
	{
		printf("Enter %d th value:\n",j+1);
		scanf("%d",&val);
		b[j]=val;
	}
	int n3=n1+n2;
	int c[n3];
	int k,l,m;
	for(k=0;k<n1;k++)
	{
	    c[k]=a[k];

	}
	m=0;
	for(l=k;l<n3;l++)
	{
		
		c[l]=b[m];
		m++;
	}
	int p;
	printf("Merged array:\n");
	for(p=0;p<n3;p++)
	{
		printf("%d\n",c[p]);
	}
	return 0;
}

