// Program to calculate Simple Interest.
#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,si;
clrscr();
printf("Enter the Principal amount,Rate and Time:");
scanf("%f %f %f",&p,&r,&t);
si=(p*r*t)/100;
printf("\n Simple Interest is %.2f",si);
getch();
}