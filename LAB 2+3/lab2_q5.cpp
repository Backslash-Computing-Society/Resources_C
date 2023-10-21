#include<stdio.h>
#include<math.h>
int main()
{
	printf("PROGRAM TO CALCULATE COMPUND INTEREST\n\n");
	float p,r,t;
	printf("Enter principal amount:\n");
	scanf("%f",&p);
	printf("Enter rate of interest:\n");
	scanf("%f",&r);
	printf("Enter time:\n");
	scanf("%f",&t);
	float b=pow(1+r/100,t);
	float ci=p*b;
	printf("The compund interest calculated is: %f",ci);
	return 0;
}
	
