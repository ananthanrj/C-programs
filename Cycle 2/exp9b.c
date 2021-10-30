#include <stdio.h>
#include <stdlib.h>
void main()
{
 int i,n;
 float x,nr,dr,Inc,sum=0,val;
 printf("Enter the angle in degree \n");
 scanf("%f",&x);
 printf("Enter the number of terms required \n");
 scanf("%d",&n);
 val=x;
 x=x*(3.14159/180);
 sum=1;
 nr=1;
 dr=1;
 for(i=2;i<n;i=i+1){
 nr=(nr*x*x*(-1));
 dr=dr*i*(i-1);
 Inc=nr/dr;
 sum=sum+Inc;
 }
 printf("Cos(%f) = %f",val,sum);
}
