#include<stdio.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("CAN I PLAY?\n\n");
	int a;
	printf("Age:");
	scanf("%d",&a);
	if(a>=0&&a<=100)
	{
		if(a>=0&&a<=3)
		{
			printf("TODDLER\n");
		}
		else if(a>=4&&a<=12)
		{
			printf("JUNIOR\n");
		}
		else if(a>=13&&a<18)
		{
			printf("TEENAGER\n");
		}
	}
	else
	{
		printf("INVALID\n");
	}
	if(a>=0&&a<18)
	{
		printf("ALLOWED");
	}
	else
	{
		printf("NOT ALLOWED");
	}
	return 0;
}
