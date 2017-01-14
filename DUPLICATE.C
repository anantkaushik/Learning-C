// Program to delete duplicate elements from an array.
#include<stdio.h>
#include<conio.h>
void main(){
	int a[100],n,loc,i,k,j,loop=1,m;
	clrscr();
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d integers:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	m = n - loop;
	for(i=0;i<=m;i++){
		for(j=i+1;j<=m;){
			if(a[i] == a[j]){
				loc = j;
				m = n - loop;
				loop++;
				for(k=loc;k<m;k++)
					a[k] = a[k+1];
			}
			else{
				j++;
			}
		}
	}
	printf("\nNew Array:\n");
	for(i=0;i<=m;i++){
		printf("\n%d",a[i]);
	}
	getch();
}
