//*************************************************************************
// Program name : Dist.c
// Author : Anantha Krishnan R J
// Date written : 22/09/2021
// Date complied : 22/09/2021
// Aim of the program: Add Two Distances (in inch-feet) System Using Structures.
//*************************************************************************
//*************************************************************************
#include <stdio.h>
struct Distance
{
 int feet;
float inch;
};
void main()
{
 struct Distance firstDist, secondDist, sum;
 printf("Enter feet and inch for the first distance with a space : \n");
 scanf("%d %f", &firstDist.feet, &firstDist.inch);
 printf("Enter feet and inch for the second distance with a space : \n");
 scanf("%d %f", &secondDist.feet, &secondDist.inch);
 sum.feet = firstDist.feet + secondDist.feet;
 sum.inch = firstDist.inch + secondDist.inch;
 while (sum.inch >= 12)
 {
 sum.inch = sum.inch - 12;
 sum.feet+=1;
 }
 printf("Sum is %d feet, %.1f inches\n", sum.feet, sum.inch);
}
