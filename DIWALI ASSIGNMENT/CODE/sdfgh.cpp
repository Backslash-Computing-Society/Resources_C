#include<stdio.h>
int main()
{
	int x=501;
	int i;
	for(i=1;i<=x;i++);
	{
		if(i%2==0)
		{
			printf("Even\n");
		}
		else
		{
			printf("Odd\n");
		}
	}
	return 0;
}
