#include<stdio.h>
#include<math.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("PROGRAM TO CHECK IF ENTERED NUMBER IS KAPREKAR NUMBER\n\n");
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int i,sum,c,x,y,d;
	x=pow(n,2);
	c=0;
	sum=0;
	while(x!=0)
	{
		c+=1;
		x/=10;
	}
	y=n*n;
	for(i=1;i<c;i++)
	{
		d=pow(10,i);
	 
		sum=y/d+y%d;
		if(sum==n)
		
	    {
		    printf("Kaprekar Number");
		    break;
	    }
	    
	}
	if(sum!=n)
	{
		printf("Not A Kaprekar Number");
	}
	
	return 0;
}
