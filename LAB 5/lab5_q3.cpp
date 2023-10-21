#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%5==0&&n%8==0)
	{
		printf("Number is divisible by both 5 and 8");
	}
	else if(n%5==0&&n%8!=0)
	{
		printf("Number is divisible only by 5");
	}
	else if(n%5!=0&&n%8==0)
	{
		printf("Number is divisible only by 8 ");
	}
	else
	{
		printf("Number is not divisble by 5 or 8");
	}
	return 0;
}
