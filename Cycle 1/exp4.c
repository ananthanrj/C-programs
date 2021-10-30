//************************************************************************
// Program name :swapnum.c
// Author :Anantha Krishnan R J
// Date Written : 01/06/2021
// Date Compiled : 01/06/2021
// Aim of the Program :To swap the values of two variables.
//*************************************************************************
//*************************************************************************
#include <stdio.h>
main ()
{
 int a,b;
 printf ("Enter the Numbers\n");
 scanf ("%d %d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nThe reverse of %d & %d is %d & %d",b,a,a,b);
}

