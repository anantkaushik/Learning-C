// Program to insert an element in an array.
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
	printf("\nEnter the location at which you want to insert the element: ");
	scanf("%d",&loc);
	printf("\nEnter the element you want to insert: ");
	scanf("%d",&num);
	for(i=n-1;i>=loc-1;i--){
		a[i+1] = a[i];
	}
	a[loc-1] = num;
	printf("\nNew Array:\n");
	for(i=0;i<=n;i++){
		printf("\n%d",a[i]);
	}
	getch();
}
