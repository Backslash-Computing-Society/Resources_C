#include <stdio.h>

int main()
{
	int rows,j;
	printf("Enter rows");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++)
	{
		int c=0;
		/*j=i;
		while(j<=rows)
		{
		    printf("%d",j);
			j++;	
		}*/
		int spaces=rows-i;
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=(2*i)-1;k++)
		{
			printf("*");
			c+=1;
		}
		for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
		
		
		printf("\n");
	}
	return 0;

}
