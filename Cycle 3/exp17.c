//************************************************************************ //
Program name : palinchk.c
// Author : Anantha Krishnan R J
// Date Written : 15/06/2021
// Date Compiled : 15/06/2021
// Aim of the Program : To check whether the given string is a palindrome or not.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
#include<string.h>
int main()
{
 int i=0, len, s=0;
 char str[100];
 printf("Enter the string:\n");
 scanf("%s", str);
 len=strlen(str);
 for(i=0; i<len/2; i++)
 {
 if(str[i]==str[len-i-1])
 {
 continue;
 }
 else
 {
 s++;
 }
 }
 if(s==0)
 {
 printf("It is a palindrome.");
 }
 else
 {
 printf("It is not a palindrome.");
 }
}

