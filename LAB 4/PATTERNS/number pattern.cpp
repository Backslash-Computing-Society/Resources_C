#include<stdio.h>
int main()
{
	int n,j;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
	    }
	printf("\n");
	}
	
	
}
