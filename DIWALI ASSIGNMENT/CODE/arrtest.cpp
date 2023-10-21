#include<stdio.h>
int main()
{
	int a[2][3]={{1,1,1},{2,2,2}};
	int b[3][2]={{1,1},{2,2},{3,3}};
	int c[2][2];
	int i,j,sum1,sum2,sum3;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			sum1=0;
			sum2=0;
			sum3=0;
			sum1+=a[i][j]*b[j][i];
			sum2+=a[i][j]*b[j][i+1];
			sum3+=a[i][j]*b[j][i+2];
		    if(j==0)
		    {
		    	c[i][i]=sum1;
			}
		    
			c[i][j]=sum2;
			c[j][i]=sum3;
			
		}
		
		
		
		printf("\n sum is %d, element is %d\n",sum1,c[i][i]);
		printf("i is %d\n",i);
		
		
		
	}
	for(int k=0;k<=1;k++)
	{
		for(int l=0;l<=1;l++)
		{
			printf("%d ",c[k][l]);
		}
		printf("\n");
	}
}
