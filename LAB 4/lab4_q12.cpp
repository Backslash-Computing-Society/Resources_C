#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	int i=1;
	int f=1;
	do
	{
		f=f*i;
		i+=1;
	}while(i<=a);
	printf("Factorial of entered number is: %d",f);
	return 0;
}
