// Program to print the table of a no.
#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i;
	clrscr();
	printf("Enter the no. whose table you want ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}
	getch();
}
