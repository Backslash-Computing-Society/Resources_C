#include <stdio.h>

int main()
{
	int rows,j;
	printf("Enter rows");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++)
	{
		int s=rows-i;
		for(int m=1;m<=s;m++)
		{
			printf(" ");
		}
		for(int j=1;j<=(2*i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int k=rows-1;k>0;k--)
	{
		for(j=k;j>=(2*k)-1;j--)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
