#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	int i=1;
	int f=1;
	while(i<=a)
	{
		f=f*i;
		i+=1;
	}
	printf("Factorial of entered number is: %d",f);
	return 0;
}
