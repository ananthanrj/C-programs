//************************************************************************ //
Program name : stringlen.c
// Author : Anantha Krishnan R J
// Date Written : 15/06/2021
// Date Compiled : 15/06/2021
// Aim of the Program : To find the length of a given string.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int len;
 printf("Enter the string whose length is to be calculated:\n");
 scanf("%s", str);
 len=strlen(str);
 printf("The length of the entered string is = %d",len);
}
