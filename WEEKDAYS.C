// Program to use switch statement to display Monday to Sunday.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter the no. between 1 to 7\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\nMonday");
			break;
		case 2:
			printf("\nTuesday");
			break;
		case 3:
			printf("\nWednesday");
			break;
		case 4:
			printf("\nThursday");
			break;
		case 5:
			printf("\nFriday");
			break;
		case 6:
			printf("\nSaturday");
			break;
		case 7:
			printf("\nSunday");
			break;
		default:
			printf("\nInvalid Input");
	}
	getch();
}