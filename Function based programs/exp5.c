// Program name : even_odd.c
// Author : Anantha Krishnan R J
// Date written : 2/10/2021
// Date complied : 2/10/2021
#include <stdio.h>
int evenodd(int);
int main()
{
int num, flag;
printf("\n Enter the number: ");
scanf("%d", &num);
flag = evenodd(num);
if (flag == 1)
printf("\n %d is EVEN", num);
else
printf("\n %d is ODD", num);
return 0;
}
int evenodd(int a)
{
if(a%2 == 0)
return 1;
else
return 0;
}