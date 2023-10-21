#include<stdio.h>
int main()
{
	char a;
	int x,y;
	printf("Enter + to add, - to subtract, * to multiply and / to divide: ");
	scanf("%c",&a);
	printf("Enter first number: ");
	scanf("%d",&x);
	printf("Enter sceond number: ");
	scanf("%d",&y);
	switch(a)
	{
		case '+':
			printf("Sum of numbers: %d",x+y);
			break;
		case '-':
			printf("Difference of numbers: %d",x-y);
			break;
		case '*':
			printf("Product of numbers: %d",x*y);
			break;
		case '/':
			printf("Division of numbers: %d",x/y);
			break;
		default:
			printf("WELCOME TO CALCULATOR");
		
	}
	return 0;
}
