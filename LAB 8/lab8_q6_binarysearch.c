#include<stdio.h>
int main()
{
    int n,first,last,mid,res;
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
    printf("Enter value to find: ");
    scanf("%d", &res);
    
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

    first=0;
    last=n-1;
    mid=(first+last)/2;

    while(first<=last) 
	{
        if(a[mid]<res)
        {
        	first=mid+1;
		}
            
        else if(a[mid]==res) 
		{
            printf("%d found at position %d\n",res,mid+1);
            break;
        }
        else
        {
        	last=mid-1;
		}
            

    mid=(first+last)/2;
   }
   if(first>last)
   {
   	printf("%d isn't in the array",res);
   }
    
  return 0;
}
