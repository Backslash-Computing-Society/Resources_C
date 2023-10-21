#include<stdio.h>
int main()
{
	int r,c,val;
	int arr[r][c];
	printf("Enter number of rows: ");
	scanf("%d",&r);
	printf("Enter number of columns: ");
	scanf("%d",&c);
	for(int i=0;i<=r-1;i++)
	{
		for(int j=0;j<=c-1;j++)
		{
			printf("Enter the element of row %d column %d\n",i+1,j+1);
			scanf("%d",&val);
			arr[i][j]=val;
		}
	}
	for(int k=0;k<=r-1;k++)
	{
		for(int l=0;l<=c-1;l++)
		{
			printf("%d ",arr[k][l]);
		}
		printf("\n");
	}
	return 0;
}
