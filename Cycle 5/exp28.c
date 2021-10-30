//*************************************************************************
// Program name : Info_emp.c
// Author : Anantha Krishnan R J
// Date written : 22/09/2021
// Date complied : 22/09/2021
// Aim of the program: Program to Store and display Information of n employees Using
Structure.
//*************************************************************************
//*************************************************************************
#include<stdio.h>
#include<string.h>
struct org
{
 char name[50];
 int emp_id,salary;
};
void main()
{
 struct org employee[100];
 int n,i;
 printf("\nEnter the number of employees in your organization: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("\nEnter Person %d\n Name :",i+1);
 scanf("%s",&employee[i].name);
 printf("\nEmployee Id :");
 scanf("%d",&employee[i].emp_id);
 printf("\nEmployee Salary :");
 scanf("%d",&employee[i].salary);
 }
 printf("\nEmployees Information\n : ");
 for(i=0;i<n;i++)
 {
 printf("\nPerson %d\n Name : %s",i+1,employee[i].name);
 printf("\nEmployee Id : %d",employee[i].emp_id);
 printf("\nEmployee Salary : %d",employee[i].salary);
 }
}