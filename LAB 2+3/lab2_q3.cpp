#include<stdio.h>
int main()
{
	printf("PROGRAM TO CALCULATE AREA OF A CIRCLE\n\n");
	float const pi=3.14;
	float r;
	printf("Enter the value of radius:");
	scanf("%f",&r);
	printf("The area of the circle is: %f",pi*r*r);
	return 0;
}
