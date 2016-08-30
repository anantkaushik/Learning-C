//Program to calculate Percentage of five subjects.
#include<stdio.h>
#include<conio.h>
void main()
{
float mths,eng,bst,eco,acc,total,per;
clrscr();
printf("Enter the marks of Five Subjects:");
scanf("%f %f %f %f %f",&mths,&eng,&bst,&eco,&acc);
total=mths+eng+bst+eco+acc;
per=total/5;
printf("\nTotal marks obtained %.0f",total);
printf("\nYour Percentage is %.2f",per);
getch();
}