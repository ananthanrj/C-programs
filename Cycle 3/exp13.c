//************************************************************************ //
Program name : copystr.c
// Author : Anantha Krishnan R J
// Date Written : 15/06/2021
// Date Compiled : 15/06/2021
// Aim of the Program : To copy the contents of a string to another without using library
functions.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
#include<string.h>
int main()
{
 int i, len;
 char a[100], b[100], temp;
 printf("Enter the string to be copied:\n");
 fgets(a, 100, stdin);
 len=strlen(a);
 for(i=0; i<len; i++)
 {
 temp=a[i];
 a[i]=b[i];
 b[i]=temp;
 }
 printf("Copied string is:\n %s", b);
}
