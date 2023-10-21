#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr, n,i,u;
    printf("Enter size of array: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
    	printf("Enter %d th element: ",i+1);
    	scanf("%d",&u);
    	ptr[i]=u;
	} 
    
    for(i=0;i<n;i++) 
	{
    	printf(" %d",ptr[i]);
    	
	}
    free (ptr);
    return 0;

}
