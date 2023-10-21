#include<stdio.h>
int main()
{
	int days;
	printf("Enter number of days: ");
	scanf("%d",&days);
	if(days<=5&&days<6)
	{
		printf("Your fine is 50 paisa");
	}
	else if(days>=6&&days<=10)
	{
		printf("Your fine is Rs 1");
	}
	else if(days>10&&days<30)
	{
		printf("Your fine is Rs 5");
	}
	else
	{
		printf("Your membership is cancelled.");
	}
}
