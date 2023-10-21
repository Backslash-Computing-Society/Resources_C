#include<stdio.h>
isprime(int a){
	int i;
	if(a==2)
	{
		printf("Number is prime");
	}
	else
	{
		for(i=2;i<=(a/2);i++)
		{
			if(a%i==0)
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
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	isprime(n);
}
