#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	int i,j,spaces,k;
	for(i=1;i<=n;i++)
	{
		char c='A';
		spaces=n-i;
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			printf("%c",c);
			c++;
		}
		
		printf("\n");
	}
	return 0;
}
