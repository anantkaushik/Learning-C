// Program to shift input data by two bits to the left.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n Enter the value of x:");
	scanf("%d",&x);
	y = x<<2;
	printf("\n The left shifted data is %d",y);
	getch();
}