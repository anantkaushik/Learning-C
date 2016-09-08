// Program to show the use of conditional operator.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter the values of A & B:");
	scanf("%d %d",&a,&b);
	printf("Is value A is greater than value of B?");
	c=a>b? 0:1;
	if(c==0)
		printf("\nTrue");
	else if(c==1)
		printf("\nFalse");
	getch();
}