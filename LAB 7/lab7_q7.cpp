#include<stdio.h>
fibo(int a){
    int i;
    int x =0,y=1;
    int z= x+y;
    printf("FIBONNACI SERIES: %d, %d, ",x,y);
    for (i=3;i<=a;i++)
     {
        printf("%d ,",z);
        x=y;
        y=z;
        z=x+y;
     }
}
int main()
{
	int n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	fibo(n);
	return 0;
}
