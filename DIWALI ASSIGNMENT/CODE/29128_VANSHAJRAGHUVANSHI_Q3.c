#include<stdio.h>
int main()
{
	printf("NAME: VANSHAJ RAGHUVANSHI\nROLL/APP. NO.: 29128\n");
	printf("PROGRAM TO CENTER A BED IN A SQUARE ROOM \n\n");
	int x,y,a;
	printf("Enter the x-coordinate of the left bottom vertex:\n");
	scanf("%d",&x);
	printf("Enter the y-coordinate of the left bottom vertex:\n");
	scanf("%d",&y);
	printf("Enter the length of a side:\n");
	scanf("%d",&a);
	int x1=x+(a/2);
	int y1=y+(a/2);
	printf("The centre of the room is at (%d,%d)",x1,y1);
	return 0;
}
