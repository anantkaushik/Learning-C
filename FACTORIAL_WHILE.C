// Program to calculate factorial of a no. using while loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fact=1;
	clrscr();
	printf("Enter the no. whose factorial you want.");
	scanf("%d",&n);
	while(n>0)
	{
		fact = fact * n;
		n--;
	}
	printf("\nFactorial of the given no. is %d",fact);
	getch();
}