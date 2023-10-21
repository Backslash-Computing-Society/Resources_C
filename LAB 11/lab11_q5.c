#include<stdio.h>
#include<string.h>
int main()
{
	struct emp{
		int age;
		char name[70];
		int exp;
	};
	struct emp* a;
	printf("Enter first employee's age: ");
	scanf("%d",&a->age);
	printf("Enter first employee's name: ");
	scanf("%s",&a->name);
	printf("Enter first employee's exp: ");
	scanf("%d",&a->exp);
	return 0;
	
}
