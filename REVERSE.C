// Program to reverse a no.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rev=0;
	clrscr();
	printf("Enter the no.");
	scanf("%d",&num);
	while(num>0)
	{
		rev = rev * 10;
		rev = rev + (num % 10);
		num = num / 10;
	}
	printf("Reversed no. is %d",rev);
	getch();
}
