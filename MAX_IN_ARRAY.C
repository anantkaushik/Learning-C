// Program to find the  max no. in an array.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[30],i,num,largest;
	clrscr();
	printf("\nEnter the no. of elements ");
	scanf("%d",&num);
	printf("\n Enter %d integer(s)",num);
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	largest=a[0];
	for(i=0;i<num;i++)
	{
		if(a[i]>largest)
		{
			largest = a[i];
		}
	}
	printf("\nLargest element is %d",largest);
	getch();
}