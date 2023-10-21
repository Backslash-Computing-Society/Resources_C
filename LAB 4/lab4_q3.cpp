#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char b[20]="123456";
	float f = atof(b);
	printf("Float value of string: %f\n",f);
	int i = atoi(b);
	printf("Integer value of string: %d\n",i);
	long int l = atol(b);
	printf("Long integer value of string: %ld\n",l);
	char a[20];
	int x=852;
	itoa(x,a,2);
	printf("The binary value of string for given integer is: %s\n",a);
	itoa(x,a,10);
	printf("The decimal value of string for given integer is: %s\n",a);
	itoa(x,a,16);
	printf("The hexadecimal value of string for given integer is: %s\n",a);
	return 0;
}
