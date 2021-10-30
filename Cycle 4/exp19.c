//*************************************************************************
// Program name : Sumatrices.c
// Author : Anantha Krishnan R J
// Date written : 08/09/2021
// Date complied : 08/09/2021
// Aim of the program : To input two m x n matrices and then calculate the sumof their
corresponding elements and store it in a third
m x n matrix.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
#include<process.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
printf("\nenter the rows and columns of first matrix\n"); scanf("%d%d",&m,&n);
printf("\n enter the rows and columns of second matrix\n"); scanf("%d%d",&p,&q);
if(m!=p&&n!=q)
{
printf("\n addition of matrix is not possible\n");
exit(0);
}
printf("\n enter the elements of first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n enter the elements of second matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\n first matrix is\n"); for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n second matrix is\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\n the sum of two matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
