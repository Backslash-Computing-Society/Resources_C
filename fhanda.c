#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *ptr1= fopen("text.txt","a+");
	FILE *ptr2=fopen("yolo.txt","r");
	char ch1,ch2;
	char a[100];
	int i=0,c=0,word=0;
	while((ch1=fgetc(ptr2))!=EOF)
	{
		fprintf(ptr1,"%s",&ch1);
	}
	while((ch2=fgetc(ptr1))!=EOF)
	{
		a[i]=ch2;
		i++;
	}
	a[i]='\0';
	printf("%s",a);
	i=0;
	while(a[i]!='\0')
	{
		
		if(a[i]==' '&&a[i+1]!=' ')
		{
			c++;
		}
		i++;
	}
	word=c+1;
	printf("Number of words is %d",word);
	fclose(ptr1);
	fclose(ptr2);
	return 0;
}
