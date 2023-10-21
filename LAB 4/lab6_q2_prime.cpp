#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number to be checked: ");
	scanf("%d",&n);
	if(n==2)
	{
		printf("Number is prime");
	}
	if(n%2==0)
	{
		printf("Number is not prime");
	}
	else
	{
	
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				printf("Number is not prime");
				break;
			}
			else
			{
				printf("Number is prime");
				break;
			}
		}
   }
	return 0;
}
