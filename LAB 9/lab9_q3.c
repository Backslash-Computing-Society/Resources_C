#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter a string:");
	scanf("%s",a);
	char b[100];
	printf("Enter another string:");
	scanf("%s",b);
	int len=0;
	while(a[len]!='\0')
	{
		len++;
	}
	int j;
	for(j=0;b[j]!='\0';j++,len++)
	{
		a[len]=b[j];
	}
	a[len]='\0';

    printf("After concatenation: ");
    printf("\n%s\n",a);

    return 0;
}
