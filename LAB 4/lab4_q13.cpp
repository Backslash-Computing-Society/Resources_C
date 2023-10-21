#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	int i;
	int f=1;
	if(a==2)
	{
		printf("Entered number is a prime number\n");
	}
	else if(a%2==0)
	{
		printf("\nEntered number is not a prime number\n");
	}
	else
	{
		for(i=3;i<a;i++)
		{
			if(a%i==0)
			{
				printf("Entered number is not a prime number\n");
				break;
				
			}
			else
			{
				printf("Entered number is a prime number\n");
				break;
			}
	    }
	
		
	}
	
	
	return 0;
}
