#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
int *ptr, n,i;
printf("Size of array? "); scanf("%d",&n);
ptr = (int*)malloc(n*sizeof(int));
for(i=0;i<n;i++) ptr[i]=i;
for(i=0;i<n;i++) printf(" %d",ptr[i]);
free (ptr);
}

