//Program for the Creation,Traversal in a Binary Search Tree.
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node{
	struct node *left;
	int info;
	struct node *right;
};
struct node *root=NULL;
void create(int);
void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);

void main(){
	int ch,no;
	clrscr();
	while(1){
		printf("\n1. Create Tree");
		printf("\n2. Preorder Traversal");
		printf("\n3. Inorder Traversal");
		printf("\n4. Postorder Traversal");
		printf("\n5. Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nEnter no. to insert: ");
				scanf("%d",&no);
				create(no);
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				exit(1);
		}
	}
}
void create(int no){
	struct node *q,*p,*temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> left = NULL;
	temp -> info = no;
	temp -> right = NULL;
	if(root==NULL)
		root = temp;
	else{
		p = q = root;
		while(q!=NULL){
			p = q;
			if(no < p -> info)
				q = p -> left;
			else
				q = p -> right;
		}
		if(no < p -> info)
			p -> left = temp;
		else
			p -> right = temp;
	}
}
void preorder(struct node *root){
	if(root != NULL){
		printf("\t%d",root->info);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(struct node *root){
	if(root != NULL){
		inorder(root->left);
		printf("\t%d",root->info);
		inorder(root->right);
	}
}
void postorder(struct node *root){
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		printf("\t%d",root->info);
	}
}
