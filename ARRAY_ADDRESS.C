// Program to display the array elements with their addresses.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num[5]={1,2,3,4,5};
	clrscr();
	printf("\nnum[0] = %d Address : %u",num[0],&num[0]);
	printf("\nnum[1] = %d Address : %u",num[1],&num[1]);
	printf("\nnum[2] = %d Address : %u",num[2],&num[2]);
	printf("\nnum[3] = %d Address : %u",num[3],&num[3]);
	printf("\nnum[4] = %d Address : %u",num[4],&num[4]);
	getch();
}