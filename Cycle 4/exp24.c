//*************************************************************************
// Program name : lowertriangle.c
//Author : Anantha Krishnan R J
// Date written : 15/09/21
// Date complied : 15/09/21
//*************************************************************************
//*************************************************************************
#include <stdio.h>
void main()
{
int i,j,n,a[10][10];
printf("Enter the size of matrix \n");
scanf("%d" ,&n);
printf("Enter the elements of the matrix \n");
for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 scanf("%d",&a[i][j]);
 printf("\n");
 }
printf("The Matrix is : \n");
for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 printf("%d\t",a[i][j]);
 printf("\n");
 }
printf("The Lower triangular Matrix is : \n");
for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 if(i>=j)
 printf("%d\t",a[i][j]);
 else
 printf("0");
 }
 printf("\n");
 }
}