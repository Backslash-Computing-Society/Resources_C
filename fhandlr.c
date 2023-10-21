#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *ptr=fopen("line.txt","a+");
	char a[100];
	printf("%d",ftell(ptr));
	printf("%s",fgets(a,100,ptr));
	printf("%d",ftell(ptr));
	printf("%s",fgets(a,100,ptr));
	printf("%d",ftell(ptr));
	fclose(ptr);
	return 0;
}
