//*************************************************************************
// Program name : trace .c
//Author :Anantha Krishnan R J
// Date written : 15/09/21
// Date complied : 15/09/21
//*************************************************************************
//*************************************************************************
#include <stdio.h>
void main()
//*************************************************************************
// Program name : diagonal.c
//Author :Anantha Krishnan R J
// Date written : 15/09/21
// Date complied : 15/09/21
//*************************************************************************
//*************************************************************************
#include <stdio.h>
#include<stdlib.h>
void main()
{
int i,j,r,c,a[10][10];
printf("Enter the number of rows & coloumns \n");
scanf("%d %d",&r,&c);
if(r==c)
 printf(" This is a square matrix \n");
else
 {
 printf(" This is not a square matrix matrix \n");
 exit(0);
 }
printf("Enter the elements of the matrix \n");
for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 scanf("%d",&a[i][j]);
 printf("\n");
}
int t=0;
for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 if((i!=j) && (a[i][j]!=0))
 {
 printf("The matrix is NOT a Diagonal Matrix");
 exit(0);
 }
 }
 }
printf("The matrix is a Diagonal Matrix");
 }