//************************************************************************ //
//Program name : Countspec.c
// Author :Anantha Krishnan R J
// Date Written :09/06/2021
// Date Compiled :09/06/2021
// Aim of the Program : To count numbers between 1 and 100 which are not divisible by 2, 3
and 5
//*************************************************************************
//*************************************************************************
//
#include <stdio.h>
#include <stdlib.h>
main()
{
 int i,count=0;

 for(i=1;i<=100;i++)
 {
 if(i%2!=0&&i%3!=0&&i%5!=0);
 {
 count=count+1;
 }
printf("The count of numbers between 1 to 100 and not divisible by 2,3,5 is %d \n",count);
}
