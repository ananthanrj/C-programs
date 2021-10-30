// Program name : perm.c
// Author : Anantha Krishnan R J
// Date written : 5/10/2021
// Date complied : 5/10/2021
#include <stdio.h>
#include <conio.h>
main()
{
int n, r;
float result;
printf("\n Enter the value of n: ");
scanf("%d", &n);
printf("\n Enter the value of r: ");
scanf("%d", &r);
result =Fact(n)/Fact(r);
printf("\n P(n/r): P(%d)/(%d) = %f", n, r, result);
getch();
return 0;
}
int Fact(int num)
{
int f=1, i;
for(i=num;i>=1;i--)
f = f*i;
return f;
}
