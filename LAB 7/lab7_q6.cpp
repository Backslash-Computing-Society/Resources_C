#include<stdio.h>
lcm(int a,int b){
	int m;
	m=(a>b)?a:b;
	int i=1;
	int l;
	while(i=1)
	{
		if((m%a==0)&&(m%b==0))
		{
			l=m;
			break;
		}
		m++;
	}
	return l;
	
}
int main()
{
	int x,y;
	printf("Enter first number: ");
	scanf("%d",&x);
	printf("Enter second number: ");
	scanf("%d",&y);
	int r=lcm(x,y);
	printf("LCM of %d and %d is %d",x,y,r);
	return 0;
}
