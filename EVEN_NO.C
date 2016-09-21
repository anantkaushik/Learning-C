//Program to display first ten even no.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("First ten even natural no. are");
	for(i=2;i<=20;i+=2)
	{
		printf("\n%d",i);
	}
	getch();
}