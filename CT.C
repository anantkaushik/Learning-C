// Program to Print Christmas Tree.
#include<conio.h>
#include<stdio.h>
void main(){
	int row,c,temp=7,temp1=8,row1,c1,c2,row2,temp2=9,r,a;
	clrscr();
	for(row=1;row<=7;row++){
		for(c=1;c<temp;c++)
			printf(" ");
		temp--;
		for(c=1;c<=2*row-1;c++)
			printf("*");
		printf("\n");
	}
	for(row1=3;row1<=8;row1++){
		for(c1=3;c1<temp1;c1++)
			printf(" ");
		temp1--;
		for(c1=3;c1<=2*row1-1;c1++)
			printf("*");
		printf("\n");
	}
		for(row2=4;row2<=9;row2++){
		for(c2=4;c2<temp2;c2++)
			printf(" ");
		temp2--;
		for(c2=3;c2<=2*row2-1;c2++)
			printf("*");
		printf("\n");
	}
	for(r=1;r<=4;r++){
		printf("      ");
		for(a=1;a<=3;a++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}