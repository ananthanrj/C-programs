//************************************************************************ //
Program name : Arthim.c
// Author :Anantha Krishnan R J
// Date Written :09/06/2021
// Date Compiled :09/06/2021
// Aim of the Program : To perform various arithmetic functions such as Addition,
Subtraction,Multiplication, Division, Remainder Calculation etc
//*************************************************************************
//*************************************************************************
/
/
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 int n1,n2,ans;
 char ch;
 printf(" \n + for addition \n - for substraction \n * for
multiplication \n / for division \n @ for finding the
remainder \n Enter your choice\n ");
 scanf("%c",&ch);
 printf("Enter the first number \n");
 scanf("%d",&n1);
 printf("Enter the second number \n");
 scanf("%d",&n2);
 switch(ch){
 case('+'):
 ans=n1+n2;
 printf("The sum of %d and %d is
%d",n1,n2,ans);
 break;
 case('-'):
 ans=n1-n2;
 printf("The difference of %d and %d is
%d",n1,n2,ans);
 break;
 case('*'):
 ans=n1*n2;
 printf("The product of %d and %d is
%d",n1,n2,ans);
 break;
 case('/'):
 ans=n1/n2;
 printf("The product of %d and %d is
%d",n1,n2,ans);
 break;
 case('@'):
 ans=n1%n2;
 printf("The product of %d and %d is
%d",n1,n2,ans);
 break;
 default :
 printf("Invalid entry \n");
 }
 return 0;
}

