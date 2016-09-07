// Program to find the Area and the Circumference of cirlce.
#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float ar,circum;
clrscr();
printf("\nEnter the Radius of the Circle:");
scanf("%d",&r);
ar=3.14*r*r;
circum=2*3.14*r;
printf("\nArea of the Circle is %.2f",ar);
printf("\nCircumference of the Circle is %.2f",circum);
getch();
}
