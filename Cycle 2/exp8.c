//************************************************************************ //
//Program name : Checknum.c
// Author :Anantha Krishnan R J
// Date Written : 09/06/2021
// Date Compiled : 09/06/2021
// Aim of the Program : To check whether the given number is prime or not
//*************************************************************************
//*************************************************************************
PROGRAM
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,n,chk=0;
 printf("Enter the number \n");
 scanf("%d",&n);
 for(i=2;i<n;i++)
{
 if(n%i==0){
 chk=1;
 break;
}
 }
if(chk==0)
{
 printf("Entered number %d is prime \n",n);
}
else
{
 printf("Entered number %d is not prime \n",n);
}
 return 0;
}