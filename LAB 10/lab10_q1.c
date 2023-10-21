#include<stdio.h>
int main()
{
	int a=7;
	float b=3.14;
	char c='e';
	printf("Adrress of int i: %u\n",&a);
	printf("Adrress of float b: %u\n",&b);
	printf("Adrress of char c: %u\n",&c);
	
	printf("Value of int i: %d\n",*(&a));
	printf("Value of float b: %f\n",*(&b));
	printf("Value of char c: %c\n",*(&c));
	
	return 0;
}
