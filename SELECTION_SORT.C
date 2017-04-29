//Program to perform selection sort.
#include<conio.h>
#include<stdio.h>
void main(){
	int a[100],n,i,j,loc_min,swap;
	clrscr();
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d integers:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		loc_min=i;
		for(j=i+1;j<n;j++){
			if(a[loc_min] > a[j])
				loc_min = j;
		}
		if(loc_min != i){
			swap = a[i];
			a[i] = a[loc_min];
			a[loc_min] = swap;
		}
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
	getch();
}