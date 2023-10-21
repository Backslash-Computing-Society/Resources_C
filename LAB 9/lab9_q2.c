#include<stdio.h>
int main()
{
	char a[10]={'U','N','I','V','E','R','S','I','T','Y'};
	int i,j,n=0;
	int r=0;
	int x=4;
	for(i=0;i<10;i++)
	{
		if(i<=5)
		{
			for(n=0;n<i*2;n++)
			{
				printf("%c",a[n]);
			}
			printf("\n");

		}
		else
		{
			for(j=0;j<2*x;j++)
				{
					printf("%c",a[j]);
				}
				x--;
				printf("\n");
				
		}
	}
	return 0;
}
