#include<stdio.h>
int hcf(int a,int b){
	int i;
	int c;
	for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
		    c=i;
		}
    }
    return c;
}
int main()
{
	int x,y;
	printf("Enter first number: ");
	scanf("%d",&x);
	printf("Enter second number: ");
	scanf("%d",&y);
	int r=hcf(x,y);
	printf("HCF of %d and %d is %d",x,y,r);
	return 0;
	
}
