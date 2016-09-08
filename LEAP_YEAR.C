// Program to find that entered year is leap year or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	clrscr();
	printf("\nEnter the Year");
	scanf("%d",&y);
	if(y%4==0)
		printf("\nThe entered year is a Leap Year.");
	else
		printf("\nThe entered year is not a Leap Year.");
	getch();
}