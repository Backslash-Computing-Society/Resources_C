#include<stdio.h>
int main()
{
	int a=1;
	float b=3.14;
	char c='e';
	
	int *i = &a;
	float *f = &b;
	char *C = &c;
	printf("Size of int pointer: %u\n",sizeof(i)); // 8 bytes
	printf("Size of float pointer: %u\n",sizeof(b)); // 4 bytes
	printf("Size of char pointer: %u\n",sizeof(c)); // 1 byte
	
	return 0;
}
