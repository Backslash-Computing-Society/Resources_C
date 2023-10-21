#include<stdio.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("PROGRAM TO CALCULATE GAIN PERCENTAGE \n\n");
	int a,b,c;
	float p;
	printf("Price of old scooter: ");
	scanf("%d",&a);
	printf("Repair amount: ");
	scanf("%d",&b);
	printf("Selling price: ");
	scanf("%d",&c);
	int n=c-a-b;
	int d=a+b;
	p=(float)n/d;
	printf("Gain percentage is %.2f",p*100);
	return 0;
}
	
