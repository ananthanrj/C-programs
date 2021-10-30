//************************************************************************ //
Program name : cmpstr.c
// Author : Anantha Krishnan R J
// Date Written : 15/06/2021
// Date Compiled : 15/06/2021
// Aim of the Program : To compare two strings without any standard functions and if the
strings are not identical, display the position where the characters are different.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
#include<string.h>
int main()
{
 int len, i, diff=0;
 char a[100], b[100];
 printf("Enter the first string:\n");
 fgets(a, 100, stdin);
 printf("Enter the second string:\n");
 fgets(b, 100,stdin);
 len=strlen(a);
 for(i=0; i<len; i++)
 if(a[i]==b[i])
 {
 continue;
 }
 else
 {
 s++;
 printf("The point of difference is %d\n", i+1);
 }
if(s==0)
 {
 printf("The strings are same.\n");
 }
else
 {
 printf("The strings are different.\n");
 }
printf("The number of characters that are different : %d\n", diff);
}

