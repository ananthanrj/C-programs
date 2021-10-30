//*************************************************************************
// Program name : Info_emp.c
// Author : Anantha Krishnan R J
// Date written : 22/09/2021
// Date complied : 22/09/2021
// Aim of the program: Program to Calculate Difference between Two Time Periods.
//*************************************************************************
//*************************************************************************
#include <stdio.h>
struct TIME {
 int seconds;
 int minutes;
 int hours;
};
void main() 
{
 struct TIME start, stop, diff;
 printf("Enter the start time. \n");
 printf("Enter hours, minutes and seconds: ");
 scanf("%d %d %d", &start.hours, &start.minutes, &start.seconds);
 printf("Enter the stop time. \n");
 printf("Enter hours, minutes and seconds: ");
 scanf("%d %d %d", &stop.hours,&stop.minutes, &stop.seconds);
 if(start.seconds > stop.seconds)
 {
 stop.seconds += 60;
 --stop.minutes;
 }
 if(start.minutes > stop.minutes)
 {
 stop.minutes += 60;
 --stop.hours;
 }
 diff.seconds = stop.seconds - start.seconds;
 diff.minutes = stop.minutes - start.minutes;
 diff.hours = stop.hours - start.hours;

 printf("Difference = %d : %d : %d", diff.hours, diff.minutes, diff.seconds);
}