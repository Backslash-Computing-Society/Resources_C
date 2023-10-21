#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter rows of arrays: ");
	scanf("%d",&r);
	printf("Enter columns of arrays: ");
	scanf("%d",&c);
	int a[r][c];
	int b[r][c];
	int s[r][c];
	
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
	printf("Enter elements of second array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element of row %d column %d\n",i+1,j+1);
			scanf("%d",&val);
			b[i][j]=val;
		}
	}
	int sum=0;
	int x,y;
	for(x=0;x<r;x++)
	{
		for(y=0;y<c;y++)
		{
			sum=a[x][y]+b[x][y];
			s[x][y]=sum;
			sum=0;
		}
	}
	
	int p,q;
	printf("Resultant array:\n");
	for(p=0;p<r;p++)
	{
		for(q=0;q<c;q++)
		{
			printf("%d ",s[p][q]);
		}
		printf("\n");
		
	}
	return 0;
	
}
