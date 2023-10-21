#include<stdio.h>
#include<math.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("PROGRAM TO CHECK IF ENTERED NUMBER IS SMITH NUMBER\n\n");
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int i,j,c,x,d,f,k;
	x=n;
	d=0,f=0;
	c=0;
	while(x>0)
	{
		d+=(x%10);
		x/=10;
	}
	x=n;	
	while(x>1)
	{
		for(i=2;i<=x;i++)
		{
			if(x%i==0)
			{
				break;
			}
    	}
		k=i;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c+=1;
			}
		}
		if(c>=2)
		{
			while(i>0)
			{
				if((i%10)!=0)
				{
					f+=(i%10);
				    i/=10;
				}
				else
				{
					break;
				}
			}
		}
		x=x/k;
		
	}
	
	if(d==f)
	{
		printf("%d is a Smith number",n);
	}
	else
	{
		printf("%d is not a Smith number",n);
	}
	return 0;
}
