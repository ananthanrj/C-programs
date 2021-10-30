// Program name : swap.c
// Author : Anantha Krishnan R J
// Date written : 1/10/2021
// Date complied : 1/10/2021
// Aim of the program: Write a function to swap the
value of two variables
#include <stdio.h>
void swap_call_by_val(int, int);
void swap_call_by_ref(int *, int *);
int main()
{
int a=1, b=2, c=3, d=4;
printf("\n In main(), a = %d and b = %d", a, b);
swap_call_by_val(a, b);
printf("\n\n In main(), c = %d and d = %d", c, d);
swap_call_by_ref(&c, &d);
return 0;
}
void swap_call_by_val(int a, int b)
{
int temp;
temp = a;
a = b;
b = temp;
printf("\n In function (Call By Value Method) a = %d and b = %d \n", a, b);
}
void swap_call_by_ref(int *c, int *d)
{
int temp;
temp = *c;
*c = *d;
*d = temp;
printf("\n In function (Call By Reference Method) c = %d and d = %d \n", *c, *d);
}