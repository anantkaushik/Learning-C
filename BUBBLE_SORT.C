// Program to perform bubble sort.
#include<conio.h>
#include<stdio.h>
void main(){
	int n,i,a[100],j,m;
	clrscr();
	printf("Enter the length of the array:");
	scanf("%d",&n);
	printf("\nEnter %d integers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				m = a[j];
				a[j] = a[j+1];
				a[j+1] = m;
			}
		}
	}
	printf("\nSorting:\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	getch();
}

