#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *ptr= fopen("text.txt","w");
	char a[100];
	printf("Enter string: ");
	gets(a);
	fprintf(ptr,"%s",a);
	fclose(ptr);
	return 0;
}
