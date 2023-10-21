#include<stdio.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("PROGRAM TO DIVIDE STUDENTS INTO TEAMS\n\n");
	int a,b;
	printf("Number of sudents:\n");
	scanf("%d",&a);
	printf("Number of teams:\n");
	scanf("%d",&b);
	printf("The number of students in each team is %d and left out is %d",a/b,a%b);
	return 0;
}
