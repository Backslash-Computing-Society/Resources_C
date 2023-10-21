#include<stdio.h>
void ab(int);
int main()
{
	int n;
	printf("Enter number of letters: ");
	scanf("%d",&n);
	ab(n);
}
void ab(int n){
	char c='A';
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%c",c);
		printf("  ");
		c++;
	}
}
