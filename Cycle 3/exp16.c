//************************************************************************ //
Program name : revstr.c
// Author : Anantha Krishnan R J
// Date Written : 15/06/2021
// Date Compiled : 15/06/2021
// Aim of the Program : To reverse a given string.
//*************************************************************************
//*************************************************************************
int main()
{

 int i=0, len;
 char str[100], temp[100];
 printf("Enter the string:\n");
 scanf("%s", str);
 len=strlen(str);
 for(i=0; i<len/2; i++)
 {
 temp[i]=str[i];
 str[i]=str[len-1-i];
 str[len-1-i]=temp[i];
 }
printf("The reversed string is:\n%s", str);
}

