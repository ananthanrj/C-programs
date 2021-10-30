// Program name : minutes.c
// Author : Anantha Krishnan R J
// Date written : 5/10/2021
// Date complied : 5/10/2021
#include <stdio.h>
#include <conio.h>
int convert_time_in_mins(int hrs, int minutes);
main()
{
int hrs, minutes, total_mins;
printf("\n Enter hours and minutes: ");
scanf("%d %d", &hrs, &minutes);
total_mins = convert_time_in_mins(hrs, minutes);
printf("\n Total minutes = %d", total_mins);
getch();
return 0;
}
int convert_time_in_mins(int hrs, int minutes)
{
int mins;
mins = hrs*60 + minutes;
return mins;
}