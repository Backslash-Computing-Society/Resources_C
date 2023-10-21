#include<stdio.h>
digiadd(int a){
	int c=0;
	while(a!=0)
	{
		c+=(a%10);
		a/=10;
	}
	return c;
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int r=digiadd(n);
	printf("Sum of digits is: %d",r);
	return 0;
}
