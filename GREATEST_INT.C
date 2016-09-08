// Program to find greatest in three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter the value of A,B and C:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
		printf("A is the greatest number");
	else if(b>a && b>c)
		printf("B is the greatest number");
	else if(c>a && c>b)
		printf("C is the greatest number");
	else
		printf("Invalid Input");
	getch();
}