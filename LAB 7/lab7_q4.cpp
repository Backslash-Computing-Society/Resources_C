#include<stdio.h>
showprime(int a){
	int i=1,j=1;
	
	for(i=1;i<=a;i++)
	{
		if(i==2)
	    {
		    printf("2\n");
	    }
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				break;
			}
			else
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	showprime(n);
	return 0;
}
