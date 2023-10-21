#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,s,k;
	for(i=n;i>=0;i--)
	{
		s=n-i;
			for(k=1;k<=s;k++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("*");
		}
	
		printf("\n");
	}
	return 0;
}
