#include<stdio.h>
int fibo(int a) {
   if(a==0)
   {
      return 0;
   } 
   else if(a==1)
   {
      return 1;
   } 
   else
   {
      return (fibo(a-1)+fibo(a-2));
   }
}
int main()
{
	int n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		int f=fibo(i);
		printf("%d",f);
	}
	return 0;

}
