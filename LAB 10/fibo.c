#include<stdio.h>
int main()
{
	int x,y,z;
	x=0;
	y=1;
	int i,n;
	printf("Enter: ");
	scanf("%d",&n);
	printf("%d %d %d",x,y,y);
	for(i=1;i<=n;i++)
	{
		x=y;
		y=z;
		z=x+y;
		printf(" %d",z);
	}
	return 0;
}
