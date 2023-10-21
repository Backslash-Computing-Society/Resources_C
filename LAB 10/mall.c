#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Not enough memory available");
	}
	for(i=0;i<n;i++)
	{
		printf("Enter %d th element",i+1);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
	return 0;
}
