//************************************************************************ //
//Program name : Ascend.c
// Author : Anantha Krishnan R J
// Date Written : 15/06/2021
// Date Compiled : 15/06/2021
// Aim of the Program : To sort an array of N integers in ascending order.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
int main()
{
 int n, i, a[100], temp, j;
 printf("Enter the number of integers to be arranged:\n");
 scanf("%d", &n);
printf("Enter the numbers\n");
for(i=0; i<n; i++)
{
 scanf("%d", &a[i]);
}
for(i=0; i<(n-1); i++)
 {
 for(j=0; j<(n-1-i); j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
}
printf("The numbers in ascending order are:\n");
 for(i=0; i<n; i++)
 printf("%d\n", a[i]);
}