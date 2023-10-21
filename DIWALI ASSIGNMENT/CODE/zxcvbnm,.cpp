#include<stdio.h>
int main()
{
	int r1,c1,val1,r2,c2,val2,R=0,C=0;
	
	printf("Enter number of rows: ");
	scanf("%d",&r1);
	printf("Enter number of columns: ");
	scanf("%d",&c1);
	int arr1[r1][c1];
	
	for(int z=0;z<r1;z++)
	{
		for(int x=0;x<c1;x++)
		{
			printf("Enter the element of row %d column %d\n",z+1,x+1);
			scanf("%d",&val1);
			arr1[z][x]=val1;
		}
	}
	printf("Enter number of rows: ");
	scanf("%d",&r2);
	printf("Enter number of columns: ");
	scanf("%d",&c2);
	int arr2[r2][c2];
	for(int m=0;m<r2;m++)
	{
		for(int n=0;n<c2;n++)
		{
			printf("Enter the element of row %d column %d\n",m+1,n+1);
			scanf("%d",&val2);
			arr2[m][n]=val2;
		}
	}
	R=r1;
	C=c2;
	int res[R][C];
	for(int s=0;s<R;s++)
	{
		for(int t=0;t<C;t++)
		{
			res[s][t]=0;
		}
	}
	
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
		    
			for(int k=0;k<c1;k++)
			{
				res[i][j]+=arr1[i][k]*arr2[k][j];
				
			}	
		}
		
		
	}
	printf("\n ARR1 \n");
	for(int a=0;a<r1;a++)
	{
		for(int b=0;b<c1;b++)
		{
			printf("%d ",arr1[a][b]);
		}
		printf("\n");
	}
	printf("\n ARR2\n");
	for(int p=0;p<r2;p++)
	{
		for(int l=0;l<c2;l++)
		{
			printf("%d ",arr2[p][l]);
		}
		printf("\n");
	}
	printf("\n ARR RESULT\n");
	for(int g=0;g<R;g++)
	{
		for(int h=0;h<C;h++)
		{
			printf("%d ",res[g][h]);
		}
		printf("\n");
	}
}
