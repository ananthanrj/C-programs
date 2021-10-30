//**********************************************************************
// Program name :largestnumber.c
// Author :Anantha Krishnan R J
// Date Written :01/06/2021
// Date Compiled :01/06/2021
// Aim of the Program :To find the largest of three numbers entered by the user.
//**********************************************************************
//**********************************************************************
#include <stdio.h>
main ()
{
 int a,b,c,large;
 printf ("Enter the three Numbers\n");
 scanf ("%d %d %d", &a,&b,&c);
 large=a;
 if(b>large)
 large=b;
 if(c>large)
 large=c;
 printf ("%d is the greatest of the three Numbers",large);
}

