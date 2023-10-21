#include<stdio.h>
int main()
{
	printf("PROGRAM TO INTERCHANGE TWO NUMBERS WITHOUT THIRD VARIABLE\n\n");
	int c,d;
	printf("Enter the first number c:\n");
	scanf("%d",&c);
	printf("Enter the second number d:\n");
	scanf("%d",&d);
	c=c+d;
	d=c-d;
	c=c-d;
	printf("The value of c is now: %d\n",c);
	printf("The value of d is now: %d",d);
	return 0;
}
