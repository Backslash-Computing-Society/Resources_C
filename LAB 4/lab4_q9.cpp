#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	(num%2==0) ? printf("Entered number is even") : printf("Entered number is odd");
	return 0;
}
