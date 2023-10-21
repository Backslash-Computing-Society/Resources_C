#include<stdio.h>
int fact(int a){
	int c=1;
	int i=1;
	while(i<=a)
	{
		c*=i;
		i++;
	}
	return c;
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int f=fact(n);
	printf("The factorial of %d is %d",n,f);
	return 0;
}
