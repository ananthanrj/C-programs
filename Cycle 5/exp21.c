//*************************************************************************
// Program name : marks .c
//Author :Anantha Krishnan R J
// Date written : 15/09/21
// Date complied : 15/09/21
//*************************************************************************
//*************************************************************************
#include <stdio.h>
void main()
{
int i,j,mark[3][5],max=0;
for(i=1;i<=3;i++)
{
for(j=1;j<=5;j++)
{
 printf("Enter the marks of student %d in subject %d \n",j,i);
 scanf("%d",&mark[i][j]);
}
printf("\n");
}
for(i=1;i<=3;i++)
{
 max=mark[i][1];
 for(j=1;j<=5;j++)
 {
 if(mark[i][j] > max)
 max=mark[i][j];
 }
 printf("Highest Mark in Subject %d = %d",i,max );
 printf("\n");

}
}