#include<stdio.h>
int main()
{
	int n,p,i,a;
	a=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("\nEnter the power: ");
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		a*=n;
	}
	printf("%d to the power %d is: %d",n,p,a);
	return 0;
}
