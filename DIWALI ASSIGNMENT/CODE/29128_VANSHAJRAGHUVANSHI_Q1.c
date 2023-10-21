#include<stdio.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("PROGRAM TO CHECK IF A NUMBER IS EVEN OR ODD USING BITWISE &\n\n");
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	if((n&1)==1)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
	return 0;
	
}
