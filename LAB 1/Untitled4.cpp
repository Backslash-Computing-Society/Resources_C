#include <stdio.h>
int main()
{
	int basic;
	printf("Enter value of basic salary:");
	scanf("%d",&basic);
	int da=0.1*basic;
	int ta=0.12*basic;
	int gross_salary=basic+da+ta;
	printf("\nValue of da:%d",da);
	printf("\nValue of ta:%d",ta);
	printf("\nFinal Salary is:%d",gross_salary);
	
	return 0;
	
}

