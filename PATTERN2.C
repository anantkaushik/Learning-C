/* Program to following pattern:
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19
	20 21 22
	23 24
	25
*/
#include<conio.h>
#include<stdio.h>
void main(){
	int i,j,a=1,loop=1;
	clrscr();
	for(i=1;i<=5;){
		for(j=1;j<=i;j++){
			printf("%d ",a);
			a++;
		}
		printf("\n");
		loop++;
		if(loop<=5){
			i++;
		}
		else if(loop>=6 && loop<=9){
			i--;
		}
		else if(loop==10){
			break;
		}
	}
	getch();
}