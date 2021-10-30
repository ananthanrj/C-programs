// Program name : sum_series.c
// Author : Anantha Krishnan R J
// Date written : 6/10/2021
// Date complied : 6/10/2021
#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
int n, i, NUM, DENO;
float sum=0.0;
printf(" Enter the value of n \n ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
NUM = pow(i,i);
DENO = Fact(i);
sum += (float)NUM/DENO;
}
printf("\n 1/1! + 4/2! + 27/3! + .... + %d/%d= %f",NUM,DENO ,sum);
getch();
return 0;
}
int Fact(int n)
{
int f=1, i;
for(i=n;i>=1;i--)
f=f*i;
return f;
}
