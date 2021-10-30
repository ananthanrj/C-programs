//*************************************************************************
// Program name : Transpose.c
// Author : Anantha Krishnan R J
// Date written : 08/09/2021*
// Date complied : 08/19/2021*
// Aim of the program : To transpose a 3 x 3 matrix.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
#include<conio.h>
main()
{
int a[10][10],i,j,m=0,n=0;
printf(" Enter the number of rows and columns\n");
scanf("%d %d",&m,&n);
printf("\n Enter the elements");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n The matrix is : \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d \t",a[i][j]);
}
printf("\n");
}
printf("\n the transpose of the matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}
}

