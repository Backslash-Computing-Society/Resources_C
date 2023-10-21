#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter a string:");
	scanf("%s",a);
	char b[10]={'A','E','I','O','U','a','e','i','o','u'};
	int j,i=0,c=0;
	while(a[i]!='\0')
	{
		for(j=0;j<10;j++)
		{
			if(a[i]==b[j])
			{
				c++;
			}
		}
		i++;
	}
	printf("There are %d vowels",c);
	return 0;
}
