#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *ptr=fopen("line.txt","a+");
	char a[100];
	printf("Enter a line: ");
	gets(a);
	printf("%d\n",ftell(ptr));
	fputs(a,ptr);
	printf("%d\n",ftell(ptr));
	fputs(a,ptr);
	printf("%d\n",ftell(ptr));
	fputs(a,ptr);
	printf("%d\n",ftell(ptr));
	fclose(ptr);
	return 0;
}
