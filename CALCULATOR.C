// Program to perform basic arithmetic operations.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("\n Enter the value of A & B: ");
	scanf("%d %d",&a,&b);
	printf("\n Enter the no. for operation");
	printf("\n 1.ADD \n 2.SUB \n 3.MULTIPLY \n 4.DIVIDE\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			d = a + b;
			printf("A + B = %d",d);
			break;
		case 2:
			d = a - b;
			printf("A - B = %d",d);
			break;
		case 3:
			d = a*b;
			printf("A * B = %d",d);
			break;
		case 4:
			d = a/b;
			printf("A / B = %d",d);
			break;
		default:
			printf("Inavlid Input");
	}
	getch();
}
