//************************************************************************ //
Program name : quadeq.c
// Author : Anantha Krishnan R J
// Date Written : 09/06/2021
// Date Compiled : 09/06/2021
// Aim of the Program : To solve a quadratic equation
//*************************************************************************
//************************************************************************* 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 float a,b,c,d,r1,r2;
 printf("Enter the value of A \n");
 scanf("%f",&a);
 printf("Enter the value of B \n");
 scanf("%f",&b);
 printf("Enter the value of C \n");
 scanf("%f",&c);
 d=(b*b)-(4*a*c);
 if(d>0){
 r1=(-b+sqrt(d))/(2*a);
 r2=(-b-sqrt(d))/(2*a);
 printf("The roots of the equation are %.2f , %.2f \n",r1,r2);
 }
else if(d==0){
 printf("Root of the equation is %.2f",-b/2*a);
 }
else{
 printf("Roots are imaginary");
 }
return 0;
}

