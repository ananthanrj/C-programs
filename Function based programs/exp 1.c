// Program name : add.c
// Author : Anantha Krishnan R J
// Date written : 5/10/2021
// Date complied : 5/10/2021
#include <stdio.h>
int sum(int a, int b);
int main()
{
int num1, num2, total = 0;
printf("\n Enter the first number: ");
scanf("%d", &num1);
printf("\n Enter the second number: ");
scanf("%d", &num2);
total = sum(num1, num2);
printf("\n Total = %d", total);
return 0;
}
int sum (int a, int b)
{
int result;
result = a + b;
return result;
}