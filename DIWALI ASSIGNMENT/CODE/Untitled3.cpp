#include <stdio.h>

int main()
{
	int rows,j;
	printf("Enter rows");
	scanf("%d",&rows);
	
	for(int i=rows;i>0;i--)
	{
		/*j=i;
		while(j<=rows)
		{
		    printf("%d",j);
			j++;	
		}*/
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		
		
		printf("\n");
	}
	return 0;

}
