#include<stdio.h>
fact(int a){
	if(a>=1)
	{
		return a*fact(a-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int f=fact(n);
	printf("Factorial of %d is %d",n,f);
	return 0;
}
