//*************************************************************************
// Program name : Productmatrices.c
// Author : Anantha Krishnan R J
// Date written : 08/09/2021
// Date complied : 08/09/2021
// Aim of the program : To multiply two m x n matrices.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10][10],b[10][10],c[10][10],m,n,j,i,p,q,k,sum;
printf("\n Enter the number of rows and columns of first matrix\n");
scanf("%d%d",&m,&n);
printf("\n Enter the number of rows and columns of second matrix\n");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("\n Multiplication of two matrix is not possible\n");
exit(0);
}
printf("Enter the elements of first matrix\n"); for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Enter the elements of second matrix \n"); for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\n First matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n Second matrix is \n");
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
for(j=0;j<q;j++)
{
c[i][j]=0; sum=0;
for(k=0;k<n;k++)
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;
}
}
printf("\n The product of two matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
