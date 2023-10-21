#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);
	int val = (int)c;
    if (val >= 65 && val <= 90)
    {
        printf("%c is an uppercase letter",c);
    }

    else if (val >= 97 && val <=122)
    {
        printf("%c is a lowercase letter",c);
    }

    else if (val >=48 && val <= 57)
    {
        printf("%c is a digit",c);
    }

    else if (val>=0 && val<=47 || val>=58 && val<=64 || val>=91 && val<=96 || val>=123 && val<=127)
    {
        printf("%c is a special symbol",c);
    }
	
}
