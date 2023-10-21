#include<stdio.h>
int main()
{
	int n=5;
	long int N=123456789;
	float f=7.54;
	double d=78.14785236;
	char c='e';
	printf("Size of integer 5 is: %lu\n",sizeof(n));
	printf("Size of long int 123456789 is: %lu\n",sizeof(N));
	printf("Size of float 7.54 is: %lu\n",sizeof(f));
	printf("Size of double 78.14785236 is: %lu\n",sizeof(d));
	printf("Size of string hello is: %lu\n",sizeof(c));
	return 0;
	
	
}
