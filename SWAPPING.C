//Program to swap the values of two variables without using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the values of A & B:");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
/*There is one more way
a=a*b;
b=a/b;
a=a/b;*/
printf("After swapping values of A is %d & B is %d",a,b);
getch();
}