#include<stdio.h>
int main()
{
	printf("PROGRAM TO CALCULATE SIMPLE INTEREST\n\n");
	int p,r,t;
	printf("Enter principal amount:\n");
	scanf("%d",&p);
	printf("Enter rate of interest:\n");
	scanf("%d",&r);
	printf("Enter time:\n");
	scanf("%d",&t);
	int prt=p*r*t;
	printf("The simple interest calculated is: %d",prt/100);
	return 0;
}
	
