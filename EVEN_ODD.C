// Program to find whether given no. is even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&a);
	if(a%2==0)
		printf("\nThe entered number is a Even number.");
	else
		printf("\nThe entered number is a Odd number.");
	getch();
}