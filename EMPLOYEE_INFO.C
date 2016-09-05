// Program to ask the user for Empid, age, salary and dislay the same.
#include<stdio.h>
#include<conio.h>
void main()
{
int empid,age,salary;
clrscr();
printf("Enter your Employee I.D.:");
scanf("%d",&empid);
printf("\nEnter your Age:");
scanf("%d",&age);
printf("\nEnter your Salary:");
scanf("%d",&salary);
printf("\nEmployee's I.D. = %d",empid);
printf("\nEmployee's Age = %d",age);
printf("\nEmployee's Salary = %d",salary);
getch();
}