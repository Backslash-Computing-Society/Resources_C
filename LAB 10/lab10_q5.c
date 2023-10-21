#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	int *p,*q;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Numbers before swapping: %d and %d\n",a,b);
	swap(&a,&b);
	printf("Numbers after swapping: %d and %d\n",a,b);
}
void swap(int *c,int *d)
{
	int x;
	x=*c;
	*c=*d;
	*d=x;
}
