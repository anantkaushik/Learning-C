// Program to calculate the area of a circle.
#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float ar;
clrscr();
printf("Enter the radius of the circle:");
scanf("%d",&r);
ar=3.14*r*r;
printf("\nArea of the Circle is %.2f",ar);
getch();
}