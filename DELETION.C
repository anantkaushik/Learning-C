// Program to delete an element from an array.
#include<stdio.h>
#include<conio.h>
void main(){
	int a[100],n,loc,num,i;
	clrscr();
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d integers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter the element you want to delete: ");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		if(a[i] == num){
			loc = i;
			break;
		}
	}
	for(i=loc;i<n-1;i++){
		a[i] = a[i+1];
	}
	printf("\nNew Array:\n");
	for(i=0;i<n-1;i++){
		printf("\n%d",a[i]);
	}
	getch();
}
