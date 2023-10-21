#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *ptr= fopen("text.txt","r");
	char ch;
	int a[100];
	int i=0,c=0,word=0;
	while(!feof(ptr))
	{
		printf("%d",ftell(ptr));
		fscanf(ptr,"%d",&a[i]);
		i++;
		
	}
	a[i]='\0';
	
//	i=0;
//	while(a[i]!='\0')
//	{
//		
//		if(a[i]==' '&&a[i+1]!=' ')
//		{
//			c++;
//		}
//		i++;
//	}
//	word=c+1;
//	printf("Number of words is %d",word);
	fclose(ptr);
	return 0;
}
