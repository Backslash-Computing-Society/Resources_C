#include<stdio.h>
int main()
{
    int n,;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	int i,j,val;
	for(i=0;i<n;i++)
	{
		printf("Enter %d th value: ",i+1);
		scanf("%d",&val);
		a[i]=val;
	}
    int k,b;
    for(k=0;k<n;k++) 
    {
    	for(j=k+1;j<n;j++)
        {
        	if(a[k]>a[j]) 
            {
            	b=a[k];
                a[k]=a[j];
                a[j]=b;
			}
        }
    }
    int p;
	printf("Resultant array:\n");
	for(p=0;p<n;p++)
	{
		printf("%d\n",a[p]);
	}
	return 0;
}
