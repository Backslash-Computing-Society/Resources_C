#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	int i,j,k,l;
	int spaces;
	for(i=1;i<=n;i++)
	{
		spaces=n-i;
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		char c='A';		
		for(l=1;l<=i;l++)
		{
			printf("%c",c);
			c++;
		}
		c='A';
		if(i>1)
		{
			int f=(int)c;
			int d=f+(i-2);
			for(k=d;k>=f;k--)
			{
				printf("%c",d);
				d--;
			}
		}
		
		printf("\n");
	}
	return 0;

}
