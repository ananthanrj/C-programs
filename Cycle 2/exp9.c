//************************************************************************ //
//Program name : sincos.c
// Author : Anantha Krishnan R J
// Date Written : 09/06/2021
// Date Compiled : 09/06/2021
// Aim of the Program : To evaluate sine and cosine series
//*************************************************************************
//*************************************************************************
#include <stdio.h>
#include <stdlib.h>
void main()
{
 int i,N;
 float X,nr,dr,Incr,sum=0,val;
 printf("Enter the angle in degree \n");
 scanf("%f",&X);
 printf("Enter the number of terms required \n");
 scanf("%d",&N);
 val=X;
 X=X*(3.14159/180);
 sum=X;
 nr=X;
 dr=1;
 val=X;
 X=X*(3.14159/180);
 sum=X;
 nr=X;
 dr=1;
 for(i=2;i<N;i=i+1){
 nr=(nr*(-1)*X*X);
 dr=dr*(i)*(i+1);
 Incr=nr/dr;
 sum=sum+Incr;
 }
 printf("Sin(%f) = %f",val,sum);
}
