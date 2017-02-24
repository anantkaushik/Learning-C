//Program to perform various operations on static stack.
#include<conio.h>
#include<stdio.h>
#include<process.h>
#define MAX_SIZE 10
int stack[MAX_SIZE];
void push();
int pop();
void traverse();
int top = -1;
void main(){
	int ch,element;
	clrscr();
	while(1){
		printf("\n\nStack Operations:");
		printf("\n1.Insert into stack");
		printf("\n2.Delete from stack");
		printf("\n3.Traverse stack");
		printf("\n4.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(top==MAX_SIZE-1)
					printf("\nStack is full.");
				else{
					printf("\nEnter the element you want to insert: ");
					scanf("%d",&element);
					push(element);
				}
				break;
			case 2:
				if(top==-1)
					printf("'\nStack is empty.");
				else{
					element = pop();
					printf("\nElement removed from the stack is %d",element);
				}
				break;
			case 3:
				traverse();
				break;
			case 4:
				exit(0);
			default:
				printf("\nInvalid Input");
		}
	}
}
void push(int item){
	top++;
	stack[top] = item;
}
int pop(){
	int item;
	item = stack[top];
	top--;
	return item;
}
void traverse(){
	int i;
	if(top==-1)
		printf("\nStack is empty.");
	else{
		printf("\nThere are %d elements in stack.",top+1);
		for(i=top;i>=0;i--)
			printf("\n%d",stack[i]);
	}
}


