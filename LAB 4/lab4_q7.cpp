#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	(a>b&&a>c) ? printf("The greatest number is: %d\n",a) : printf("%d is not the greatest number\n",a);
	(b>a&&b>c) ? printf("The greatest number is: %d\n",b) : printf("%d is not the greatest number\n",b);;
	(c>b&&c>a) ? printf("The greatest number is: %d\n",c) : printf("%d is not the greatest number\n",c);;
	return 0;
	
}
