#include<stdio.h>
AreaPeri(int r, float *x, float *y){
*x = 3.14*r*r; *y = 2*3.14*r;
}
main( ){
int r; float A,P;
printf("\nEnter radius: " ); scanf("%d",&r);
AreaPeri(r,&A,&P); printf("Area = %f, Peri = %f",A,P);
}
