#include<stdio.h>
int main()
{
    int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	int i,j,k,val;
	for(i=0;i<n;i++)
	{
		printf("Enter %d th value: ",i+1);
		scanf("%d",&val);
		a[i]=val;
	}
    int max,min;
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
	printf("Maximum is %d\n",max);
	printf("Minimum is %d\n",min);	
    return 0;
}
