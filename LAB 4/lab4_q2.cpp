#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the dividend: ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the divisor: ");
	scanf("%d",&b);
	float q = (float)a/(float)b;
	printf("\nThe quotient is: %f",q);
	return 0;
}
