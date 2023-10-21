#include<stdio.h>
swap(int a,int b){
	int c;
	c=a;
	printf("First value is now %d\n",c);
	c=b;
	printf("First value is now %d",c);
}
int main()
{
	int x,y;
	printf("Enter first value: ");
	scanf("%d",&x);
	printf("Enter second value: ");
	scanf("%d",&y);
	swap(x,y);
	return 0;
}
