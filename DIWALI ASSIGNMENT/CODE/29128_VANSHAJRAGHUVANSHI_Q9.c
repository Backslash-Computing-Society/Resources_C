#include<stdio.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("MENU DRIVEN CALCULATOR\n\n");
	int n,x,y;
	printf("Enter the first value:\n");
	scanf("%d",&x);
	printf("Enter the second value:\n");
	scanf("%d",&y);
	printf("Enter choice from the menu:-\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("The value after Addition is %d",x+y);
			break;
		case 2:
			printf("The value after Subtraction is %d",x-y);
			break;
		case 3:
			printf("The value after Multiplication is %d",x*y);
			break;
		case 4:
			printf("The value after Division(Quotient) is %d",x/y);
			break;
		default:
			printf("WELCOME TO CALCULATOR");
		
	}
	return 0;
}
