#include<stdio.h>
int main()
{
	printf("PROGRAM TO REVERSE A 5 DIGIT NUMBER\n\n");
	int a;
	printf("Enter a 5 digit number:\n");
	scanf("%d",&a);
	int d1=a%10;
    a=a/10;
	int d2=a%10;
	a=a/10;
	int d3=a%10;
	a=a/10;
	int d4=a%10;
	a=a/10;
	int d5=a%10;
	int num=d1*10000+d2*1000+d3*100+d4*10+d5;
	printf("Number after being reversed: %d",num);
	return 0;
}
