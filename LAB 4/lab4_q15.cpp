#include<stdio.h>
#include<math.h>
int main()
{
	printf("PROGRAM TO CHECK IF ENTERED NUMBER IS ARMSTROMG NUMBER\n");
	int i;
	for(i=1;i<=500;i++)
	{
		int d=i;
		int sum=0;
		if(i>=100&&i<=500)
		{
			int un,te,th;
			un=d%10;
			th=d/100;
			te=th/10;
			sum=pow(un,3)+pow(te,3)+pow(th,3);
			if(sum==i)
			{
				printf("%d",d);
		    }
	    }
	    if(i>=10&&i<100)
		{
			int t,u;
			u=d%10;
			t=d/10;
			sum=pow(u,3)+pow(t,3);
			if(sum==d)
			{
				printf("%d",d);
			}
		}
		if(i>=1&&i<10)
		{
			int e;
			e=pow(i,3);
			if(d==e)
			{
				printf("%d",d);
			}
	    }
		
    }
    return 0;
}

