#include<stdio.h>
nsum(int a){
	int i;
	int c=0;
	for(i=1;i<=a;i++)
	{
		c+=i;
	}
	return c;
}
int main()
{
	int n;
	printf("Enter the number of natural numbers: ");
	scanf("%d",&n);
	int sum=nsum(n);
	printf("Sum of first %d natural numbers is: %d",n,sum);
	return 0;
	
}
