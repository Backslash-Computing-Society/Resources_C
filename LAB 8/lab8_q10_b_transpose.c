#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter rows of array: ");
	scanf("%d",&r);
	printf("Enter columns of array: ");
	scanf("%d",&c);
	int a[r][c];
	int b[c][r];
	
	int i,j,val;
	printf("Enter elements of first array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element of row %d column %d\n",i+1,j+1);
			scanf("%d",&val);
			a[i][j]=val;
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	int p,q;
	printf("Entered array:\n");
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("%d ",a[p][q]);
		}
		printf("\n");
		
	}
	printf("Transpose of array:\n");
	for(p=0;p<c;p++)
	{
		for(q=0;q<r;q++)
		{
			printf("%d ",b[p][q]);
		}
		printf("\n");
		
	}
	printf("\n\n");
	
	return 0;
	
}
