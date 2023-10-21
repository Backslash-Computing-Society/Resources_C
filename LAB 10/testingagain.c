#include<stdio.h>
#include<string.h>
int main()
{
	struct emp{
		char age[10];
		char name[20];
		char exp[35];
	};
	struct emp a,b,c;
	printf("Enter first employee's age: ");
	scanf("%s",&a.age);
	printf("Enter first employee's name: ");
	scanf("%s",&a.name);
	printf("Enter first employee's exp: ");
	scanf("%s",&a.exp);
	
	
	
	
	printf("Size of a: %d\nSize of b: %d\nSize of c: %d\n",sizeof(a),sizeof(b),sizeof(c));
	printf("\n");
	printf("Size of age: %d\nSize of name: %d\nSize of exp: %d\n",sizeof(a.age),sizeof(a.name),sizeof(a.exp));
	return 0;
	
	
}
