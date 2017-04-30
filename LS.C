//Program to perform insertion and deletion on linked list.
#include<conio.h>
#include<stdio.h>
#include<malloc.h>

struct node{
	int info;
	struct node *next;
}*start=NULL;

void insert_start();
void insert_middle();
void insert_end();
void del_start();
void del_middle();
void del_end();
void display();

void main(){
	int ch;
	clrscr();
	while(1){
		printf("\n1.Insertion in start");
		printf("\n2.Insertion in between");
		printf("\n3.Insertion in end");
		printf("\n4.Deletion in start");
		printf("\n5.Deletion in between");
		printf("\n6.Deletion in end");
		printf("\n7.Display");
		printf("\n8.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insert_start();
				break;
			case 2:
				insert_middle();
				break;
			case 3:
				insert_end();
				break;
			case 4:
				del_start();
				break;
			case 5:
				del_middle();
				break;
			case 6:
				del_end();
				break;
			case 7:
				display();
				break;
			case 8:
				exit(1);
		}
	}
}
void insert_start(){
	struct node *ptr;
	int no;
	printf("\nEnter the no. to be inserted at the start: ");
	scanf("%d",&no);
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->info = no;
	if(start==NULL){
		start=ptr;
		ptr->next=NULL;
	}
	else{
		ptr->next=start;
		start=ptr;
	}
}
void insert_middle(){
	struct node *ptr,*cpt;
	int data;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the no. you want to insert: ");
	scanf("%d",&ptr->info);
	printf("\nEnter info of node after which insertion will be made: ");
	scanf("%d",&data);
	cpt=start;
	while(cpt->info!=data)
		cpt=cpt->next;
	ptr->next = cpt->next;
	cpt->next = ptr;
}
void insert_end(){
	struct node *ptr,*cpt;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the no. you want to insert at the end: ");
	scanf("%d",&ptr->info);
	ptr->next=NULL;
	cpt=start;
	while(cpt->next!=NULL)
		cpt=cpt->next;
	cpt->next = ptr;
}
void del_start(){
	struct node *ptr;
	printf("\nDeleted element is %d",start->info);
	ptr = start;
	start = start -> next;
	free(ptr);
}
void del_middle(){
	struct node *cpt,*ptr;
	int data;
	printf("\nEnter element to be deleted: ");
	scanf("%d",&data);
	ptr=start;
	while(ptr->info!=data){
		cpt=ptr;
		ptr=ptr->next;
	}
	cpt->next=ptr->next;
	free(ptr);
}
void del_end(){
	struct node *ptr,*cpt;
	ptr=start;
	while(ptr->next!=NULL){
		cpt=ptr;
		ptr=ptr->next;
	}
	cpt->next=NULL;
	printf("\nElement deleted from the last is %d",ptr->info);
	free(ptr);
}
void display(){
	struct node *ptr;
	if(start==NULL)
		printf("\nList contains no node");
	else{
		ptr=start;
		printf("\nElements are: \n");
		while(ptr!=NULL){
			printf("\t%d",ptr->info);
			ptr=ptr->next;
		}
	}
}