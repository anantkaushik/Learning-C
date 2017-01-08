/* Program to print following pattern:
	1
	2 3
	4 5 6
	7 8 9 10
	4 5 6
	2 3
	1
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
	for(i=3;i>=1;i--){
		if(i==3){
			a=4;
		}
		else if(i==2){
			a=2;
		}
		else{
			a=1;
		}
		for(j=1;j<=i;j++){
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	getch();
}