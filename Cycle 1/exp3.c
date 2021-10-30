//**********************************************************************
// Program name :square_num.c
// Author :Anantha Krishnan R J
// Date Written :01/06/2021
// Date Compiled :01/06/2021
// Aim of the Program : To calculate square of a number.
//***********************************************************************
//***********************************************************************
#include <stdio.h>
main ()
{
int a,lsb,sq;
 printf ("Enter the Number\n");
scanf ("%d ",&a);
lsb = a % 10;
 if(lsb==5)
 {
 sq=a*a;
 printf("%d",sq);
 }
 else
 printf("LSB is not 5 ");
}

