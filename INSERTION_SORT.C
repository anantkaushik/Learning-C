//Program to perform insertion sort.
#include<stdio.h>
#include<conio.h>
void main(){
	int a[100],n,i,j,temp;
	clrscr();
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d integers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j]){
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
	printf("\nSorted Elements are");
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
	getch();
}