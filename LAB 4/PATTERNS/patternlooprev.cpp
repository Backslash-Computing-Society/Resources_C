#include<stdio.h>
int main()
{
	int n,j;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	int i;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
	    }
	    printf("\n");
	}
	
	return 0;
}
