#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	int i,j,spaces,k,l;
	for(i=1;i<=n;i++)
	{
		spaces=n-i;
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		for(l=1;l<i;l++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
