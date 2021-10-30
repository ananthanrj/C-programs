//************************************************************************ //
Program name : concatstr.c
// Author : Anantha Krishnan R J
// Date Written : 15/06/2021
// Date Compiled : 15/06/2021
// Aim of the Program : To concatenate two strings.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
#include<string.h>
int main()
{
 int i=0, j=0;
 char a[100], b[100], c[100];
 printf("Enter the first string:\n");
 scanf("%s", a);
 printf("Enter the second string:\n");
 scanf("%s", b);
while(a[i]!='\0')
{
 c[i]=a[i];
 i++;
}
 while(b[j]!='\0')
 {
 c[i]=b[j];
 i++;
 j++;
 }
c[i]='\0';
printf("The concatenated string is:\n%s", c);
}

