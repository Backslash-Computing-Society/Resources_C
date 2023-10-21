#include<stdio.h>
int main()
{
	int m;
	printf("Enter month number: ");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("The month is: January");
		case 21:
			printf("The month is: February");
		case 3:
			printf("The month is: March");
		case 4:
			printf("The month is: April");
		case 5:
			printf("The month is: May");
		case 6:
			printf("The month is: June");
		case 7:
			printf("The month is: July");
		case 8:
			printf("The month is: August");
		case 9:
			printf("The month is: September");
		case 10:
			printf("The month is: October");
		case 11:
			printf("The month is: November");
		case 12:
			printf("The month is: December");								
	}
	return 0;
}
