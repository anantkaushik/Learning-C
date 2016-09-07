// Program to find the area of the right angled triangle.
#include<stdio.h>
#include<conio.h>
void main()
{
int b,h,ar;
clrscr();
printf("\nEnter the Base of the Triangle:");
scanf("%d",&b);
printf("\nEnter the Height of the Triangle:");
scanf("%d",&h);
ar=0.5*b*h;
printf("\nArea of the Triangle is %d",ar);
getch();
}
