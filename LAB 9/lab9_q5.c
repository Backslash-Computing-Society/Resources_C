#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[100];
	printf("Enter a string: ");
	scanf("%s",&a);
	char b[100];
	printf("Enter another string: ");
	scanf("%s",&b);
	int  res=strcmp(a,b);
	if(res==0)
	{
		printf("Both strings are equal/same");
	}
	else if(res>0)
	{
		printf("Strings are not equal/same and first one is greater");
	}
	else
	{
		printf("Strings are not equal/same and second one is greater");
	}
    return 0;

}
