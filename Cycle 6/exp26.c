//*************************************************************************
// Program name : Complex.c
// Author : Anantha Krishnan R J
// Date written : 22/09/2021
// Date complied : 22/09/2021
// Aim of the program: Add Two Complex Numbers by Passing Structure to a Function.
//*************************************************************************
//*************************************************************************
#include <stdio.h>
typedef struct complex {
 float real;
 float imag;
}complex;
complex add(complex n1, complex n2);
void main() {
 complex n1, n2, result;
 printf("Enter the real and imaginary parts of the first complex number: ");
 scanf("%f %f", &n1.real, &n1.imag);
 printf("\nEnter the real and imaginary parts of the second complex number: \n");
 scanf("%f %f", &n2.real, &n2.imag);
 result = add(n1, n2);
 printf("Sum = %.1f + %.1fi", result.real, result.imag);
}
complex add(complex n1, complex n2) {
 complex a;
 a.real = n1.real + n2.real;
 a.imag = n1.imag + n2.imag;
 return (a);
}
