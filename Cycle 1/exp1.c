//**************************************************************************
// Program name : Conversion.c
// Author : Anantha Krishnan R J
// Date Written :01/06/2021
// Date Compiled :01/06/2021
// Aim of the Program :To convert the temperature in degree Celsius to degree Fahrenheit
//**************************************************************************
//**************************************************************************
#include <stdio.h>
main()
{
 int C,F;
 printf("Enter the temperature in Degree Celsius : ");
 scanf("%d",&C);
 F = (1.8*C) + 32;
 printf("The Temperature in Degree Fahrenheit is : %d ",F);
}
