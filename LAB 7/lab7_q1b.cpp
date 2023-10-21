#include<stdio.h>
varswap(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The first value is now: %d\n",a);
	printf("The second value is now: %d",b);
}
int main()
{
	int x,y;
	printf("Enter first value: ");
	scanf("%d",&x);
	printf("Enter second value: ");
	scanf("%d",&y);
	varswap(x,y);
}
