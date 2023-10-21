#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter a string:");
	scanf("%s",a);
	int j;
	char b[100];
	for(j=0;j<100;j++)
	{
		b[j]=a[j];
	}
	int p;
	printf("First array: %s\n",a);
	printf("Second array: %s\n",b);
	return 0;
}
