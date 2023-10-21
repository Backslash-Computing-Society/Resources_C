#include<stdio.h>
main(){
int arr[] = { 10, 20, 30, 45, 67, 56, 74 };
int *i, *j;
i = &arr[0]; j = &arr[5];
printf("i address: %u\n",i);
printf("j address: %u\n",j);
printf("%u %d", j-i, *j-*i);
}
