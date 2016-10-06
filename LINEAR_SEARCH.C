// Program to perform linear search.
#include<stdio.h>
#include<conio.h>
void main()
{
	int array[100],search,c,n;
	clrscr();
	printf("\n Enter the size of an array: ");
	scanf("%d",&n);
	printf("\n Enter %d integers\n",n);
	for(c=0;c<n;c++)
		scanf("%d",&array[c]);
	printf("\n Enter a no. to search\n");
	scanf("%d",&search);
	for(c=0;c<n;c++)
	{
		if(array[c]==search)
		{
			printf("\n %d is present at location %d",search,c+1);
			break;
		}
		if(array[c]==n)
		{
			printf("\n %d is not present in the array.",search);
		}
	}
	getch();
}