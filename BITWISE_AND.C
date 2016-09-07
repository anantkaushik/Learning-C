// Program to use bitwise AND operator between two integers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter the values of A and B:");
	scanf("%d %d",&a,&b);
	c = a & b;
	printf("Answer after using bitwise AND operator is %d",c);
	getch();
}