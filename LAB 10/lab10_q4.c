#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	float b[6]={1.0,1.2,1.4,1.6,1.8,2};
	char c[5]={'a','e','i','o','u'};
	int i,j,k;
	printf("INTEGER ARRAY:-\n");
	for(i=0;i<10;i++)
	{
		printf("Address of %d th element: %u\n",i+1,&a[i]);
	}
	
	printf("FLOAT ARRAY:-\n");
	for(j=0;j<6;j++)
	{
		printf("Address of %d th element: %u\n",j+1,&b[j]);
	}
	
	printf("CHARACTER ARRAY:-\n");
	for(k=0;k<5;k++)
	{
		printf("Address of %d th element: %u\n",k+1,&c[k]);
	}
	return 0;
}
