#include<stdio.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("PROGRAM TO DISPLAY GRADE\n\n");
	int r,m;
	char name[50];
	printf("Enter the roll number of student:\n");
	scanf("%d",&r);
	printf("Enter the name of the student:\n");
	scanf("%s",&name);
	printf("Enter the total marks of the student:\n");
	scanf("%d",&m);
	char grade;
	if(m>=90&&m<=100)
	{
		grade='A';
	}
	else if(m>=80&&m<90)
	{
		grade='B';
	}
	else if(m>=70&&m<80)
	{
		grade='C';
	}
	else if(m>=60&&m<70)
	{
		grade='D';
	}
	else if(m>=40&&m<60)
	{
		grade='E';
	}
	else
	{
		grade='F';
	}
	if(grade!='F')
	{
	    printf("Grade details\n%d %s %d %c",r,name,m,grade);	
	}
	else
	{
		printf("Grade details\n%d %s %d Fail",r,name,m);
	}
	
	return 0;
}
