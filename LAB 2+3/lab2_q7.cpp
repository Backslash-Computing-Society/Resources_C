#include<stdio.h>
#include<math.h>
int main()
{
	printf("PROGRAM TO DO MATH FUNCTIONS\n");
	float a,b,c;
	int p,d,e;
	printf("Enter the number you want to calculate the sin of:\n");
	scanf("%f",&a);
	printf("Enter the number you want to calculate the cos of:\n");
	scanf("%f",&b);
	printf("Enter the number you want to calculate the log of:\n");
	scanf("%f",&c);
	printf("Enter the number you want to calculate the power of:\n");
	scanf("%d",&d);
	printf("Enter the power:\n");
	scanf("%d",&p);
	printf("Enter the number you want to calculate the square root of:\n");
	scanf("%d",&e);
	printf("The sin of given number is: %f\n",sin(a));
	printf("The cos of given number is: %f\n",cos(b));
	printf("The log of given number is: %f\n",log(c));
	int power=pow(d,p);
	printf("The value of power of given number is: %d\n",power);
	int sq=sqrt(e);
	printf("The square root of given number is: %d\n",sq);
	return 0;
}
