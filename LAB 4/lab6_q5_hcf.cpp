#include <stdio.h>
int main()
{
    int a,b,i,hcf;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    for(i=1;i<=a && i<=b;++i)
    {
        if(a%i==0 && b%i==0)
            hcf = i;
    }

    printf("HCF of %d and %d is %d",a,b,hcf);

    return 0;
}
