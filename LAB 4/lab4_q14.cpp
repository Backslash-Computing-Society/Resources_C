#include<stdio.h>
#include<math.h>
int main()
{
printf("ARMSTRONG NUMBERS FROM 1 TO 500\n");	
int sum,i,d,x;
for(i=1;i<=500;i++)
    {
        d=i;
        sum=0;
        while(d!=0)
        {
            x=d%10;
            sum+= pow(x,3);
            d=d/10;
        }

        if(sum==i)
        printf("%d\n",i);
    }

    return 0;
}
