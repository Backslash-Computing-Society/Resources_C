#include<stdio.h>
#include<math.h>
int main()
{
	printf("PROGRAM TO FIND ROOTS OF AN EQUATION\n");
	printf("FORM OF THE EQUATION: ax^2+bx+c=0\n");
	int a,b,c;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	printf("Enter value of c:\n");
	scanf("%d",&c);
	int B=pow(b,2);
	int d=B-4*a*c;
	float D=sqrt(d);
	float p=-1*b+D;
	float n=-1*b-D;
	int ta=2*a;
	float r1=p/ta;
	float r2=n/ta;
	printf("Roots of the equation are\n %f \n %f",r1,r2);
	return 0;
}
