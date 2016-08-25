// Program to swap two numbers using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the values of A & B:");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("\nAfter swapping A=%d & B=%d",a,b);
getch();
}
