// Program to find whether given no. is a prime no. or not.
#include<conio.h>
#include<stdio.h>
void main(){
	int num,x,flag=0;
	clrscr();
	printf("Enter the no. ");
	scanf("%d",&num);
	for(x=2;x<=num/2;x++){
		if(num%x==0){
			flag = 1;
			break;
		}
		else
			flag == 0;
	}
	if(flag==1){
		printf("\n%d is not a prime no.",num);
	}
	else
		printf("\n%d is a prime no.",num);
	getch();
}


