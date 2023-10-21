#include<stdio.h>
int main()
{
	printf("PROGRAM TO INTERCHANGE TWO NUMBERS WITH THIRD VARIABLE\n\n");
	int c,d;
	printf("Enter first number c :\n");
	scanf("%d",&c);
	printf("Enter second number d :\n");
	scanf("%d",&d);
	int p;
	p=d;
	printf("The first number c is now %d\n",p);
	p=c;
	printf("The second number d is now %d\n",p);
	return 0;
}
