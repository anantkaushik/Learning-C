// WAP to count no. b/w 1 to 100 not divisible by 2,3,5.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0;
	clrscr();
	for(i=1;i<=100;i++)
		{
			if(i%2!=0 && i%3!=0 && i%5!=0)
			{
				printf("%d \t",i);
				a++;
			}
		}
	printf("\nTotal Numbers:%d",a);
	getch();
}