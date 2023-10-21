#include<stdio.h>
int fact(int);
int main(){

long int n;
printf("Enter number: ");
scanf("%d",&n);
printf("Factorial = %d\n",fact(n));
}
int fact(int n){
if(n>1) return n*fact(n-1); //calling itself with n-1
else return 1;
}
