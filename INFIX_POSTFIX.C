//Program to convert infix expression to postfix expression.
#include<stdio.h>
#include<conio.h>
#include<string.h>
char stack[30];
int top = -1;
void push(char x){
	top++;
	stack[top] = x;
}

char pop(){
	if(top == -1)
		return -1;
	else
		return stack[top--];
}

int priority(char x){
	if(x == '(')
		return 0;
	else if(x == '+' || x == '-')
		return 1;
	else if(x == '*' || x == '/')
		return 2;
	else if(x == '^')
		return 3;
}
void main(){
	char exp[30];
	char symbol,x;
	int length,i=0;
	clrscr();
	printf("Enter the infix expression: ");
	gets(exp);
	printf("\nAfter converting infix to postfix expression:\n");
	length = strlen(exp);
	while(i < length){
		symbol = exp[i];
		if(isalnum(symbol))
			printf("%c",symbol);
		else if(symbol == '(')
			push(symbol);
		else if(symbol == ')'){
			while((x = pop()) != '(')
				printf("%c",x);
		}
		else{
			while(priority(stack[top]) >= priority(symbol))
				printf("%c",pop());
			push(symbol);
		}
		i++;
	}
	while(top != -1){
		printf("%c",pop());
	}
	getch();
}
