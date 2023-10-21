#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	int i;
	int f=1;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	printf("Factorial of entered number is: %d",f);
	return 0;
}
