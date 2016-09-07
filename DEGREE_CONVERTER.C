// Program to convert temperature from degree Centigrade to Fahrenheit.
#include<stdio.h>
#include<conio.h>
void main()
{
float cel,fahren;
clrscr();
printf("\nEnter the temperature in Celcius:");
scanf("%f",&cel);
fahren=((cel*9)/5)+32;
printf("\nTemperature in Fahrenheit is %.1f",fahren);
getch();
}