#include <stdio.h>
int main() 
{
  int i, n;
  int x =0,y=1;
  int z= x+y;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("FIBONNACI SERIES: %d, %d, ",x,y);
  for (i=3;i<= n;++i)
   {
    printf("%d ,",z);
    x=y;
    y=z;
    z=x+y;
   }

  return 0;
}
