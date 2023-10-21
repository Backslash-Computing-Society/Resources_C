#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	a+=b;
	printf("Sum of a and b using shorthand assignment:%d\n",a);
	a-=b;
	printf("Difference of a and b using shorthand assignment:%d\n",a);
	a*=b;
	printf("Product of a and b using shorthand assignment:%d\n",a);
	a/=b;
	printf("Division of a and b using shorthand assignment:%d\n",a);
	a%=b;
	printf("Remainder when a is divided by b using shorthand assignment:%d",a);
	return 0;
	
}
