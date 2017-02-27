//Program to reverse the string using stack.
#include<conio.h>
#include<stdio.h>
#include<string.h>
char stack[20];
int top = -1;
void push(char);
char pop();
void main(){
	char s[20];
	int l,i;
	clrscr();
	printf("\nEnter the string: ");
	gets(s);
	l = strlen(s);
	for(i=0;i<l;i++){
		push(s[i]);
	}
	for(i=0;i<l;i++){
		s[i]=pop();
	}
	printf("\nReverse of the entered string: ");
	puts(s);
	getch();
}
void push(char c){
	top++;
	stack[top] = c;
}
char pop(){
	char ch;
	ch = stack[top];
	top--;
	return ch;
}

