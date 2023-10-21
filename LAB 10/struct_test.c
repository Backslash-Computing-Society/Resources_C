#include<stdio.h>
#include<string.h>
int main()
{
	struct emp{
		int age;
		char name[70];
		int exp;
	};
	struct emp a,b,c;
	printf("Enter first employee's age: ");
	scanf("%d",&a.age);
	printf("Enter first employee's name: ");
	scanf("%s",&a.name);
	printf("Enter first employee's exp: ");
	scanf("%d",&a.exp);
	
	printf("\nEnter second employee's age: ");
	scanf("%d",&b.age);
	printf("Enter second employee's name: ");
	scanf("%s",&b.name);
	printf("Enter second employee's exp: ");
	scanf("%d",&b.exp);
	
	printf("\nEnter third employee's age: ");
	scanf("%d",&c.age);
	printf("Enter third employee's name: ");
	scanf("%s",&c.name);
	printf("Enter third employee's exp: ");
	scanf("%d",&c.exp);
	
	printf("Emp 1:-\nAge: %d\nName: %s\nExp: %d\n",a.age,a.name,a.exp);
	printf("Emp 2:-\nAge: %d\nName: %s\nExp: %d\n",b.age,b.name,b.exp);
	printf("Emp 3:-\nAge: %d\nName: %s\nExp: %d\n",c.age,c.name,c.exp);
	
	
	printf("Size of a: %d\nSize of b: %d\nSize of c: %d\n",sizeof(a),sizeof(b),sizeof(c));
	printf("\n");
	printf("Size of age: %d\nSize of name: %d\nSize of exp: %d\n",sizeof(a.age),sizeof(a.name),sizeof(a.exp));
	return 0;
	
	
}
