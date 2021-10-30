//*************************************************************************
// Program name : Info.c
// Author : Anantha Krishnan R J
// Date written : 22/09/2021
// Date complied : 22/09/2021
// Aim of the program: Store Information of 10 Students Using Structure[ ID ,Name,marks
of //five subjects] and display total marks of each student with all information
//*************************************************************************
//*************************************************************************
#include <stdio.h>
struct student {
 char name[50];
 int id;
 float marks[5];
} s[10];
void main() {
 int i;
 for (i = 0; i < 10; i++)
 {
 printf("Enter information of student %d :\n\n", i+1);
 printf("Enter the ID number : ");
 scanf("%d", &s[i].id);
 printf("\nEnter Name: ");
 scanf("%s", &s[i].name);
 printf("\nEnter marks of the following \n");
 for(int j=0;j<5;j++)
 {
 printf("\nSubject %d : ",j+1);
 scanf("%f", &s[i].marks[j]);
 }
 }
 printf("Displaying Information:\n\n");
 for (i = 0; i < 10; ++i)
 {
 printf("\nID number: %d\n", s[i].id);
 printf("Name: ");
 puts(s[i].name);
 printf("\nMarks in :\n");
 for(int j=0;j<5;j++)
 printf("Subject %d %.1f \t",j+1,s[i].marks[j]);
 printf("\n\n");
 }
}