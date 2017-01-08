/* Program to print the following pattern:
	1
	2 3
	4 5 6
	7 8 9 10
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,a=1;
	clrscr();
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	getch();
}