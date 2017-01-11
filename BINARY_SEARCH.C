// Program to perform Binary Search.
#include<conio.h>
#include<stdio.h>
void main(){
	int n,i,array[100],search,first,last,middle;
	clrscr();
	printf("Enter the length of the array:");
	scanf("%d",&n);
	printf("\nEnter %d integers",n);
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("\nEnter the no. you want to search:");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last){
		if(array[middle]<search)
			first = middle + 1;
		else if(array[middle]==search){
			printf("\n%d is found at %d",search,middle+1);
			break;
		}
		else{
			last = middle - 1;
		}
		middle = (first+last)/2;
	}
	if(first>last)
		printf("\n%d is not present in the list",search);
	getch();
}

