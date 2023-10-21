#include<stdio.h>
int main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("%d\n",&a);
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",&a);
	printf("%d\n",ptr);
	return 0;
}
