//Program to perform various operations on matrix.
#include<conio.h>
#include<stdio.h>
void main(){
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j,n,k;
	clrscr();
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Transpose");
	printf("\nEnter the choice: ");
	scanf("%d",&n);
	printf("\nEnter the size of first matrix: ");
	scanf("%d %d",&r1,&c1);
	printf("\nEnter the elements of first matrix: ");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	if(n == 1 || n == 2 || n == 3){
		printf("\nEnter the size of second matrix: ");
		scanf("%d %d",&r2,&c2);
		printf("\nEnter the elements of second matrix: ");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
			}
		}
	}
	switch(n){
		case 1:
			printf("\nAddition:\n");
			if(r1 == r2 && c1 == c2){
				for(i=0;i<r1;i++){
					for(j=0;j<c2;j++){
						c[i][j] = a[i][j] + b[i][j];
						printf("%d\t",c[i][j]);
					}
					printf("\n");
				}
			}
			else{
				printf("\nAddition is not possible.");
			}
			break;
		case 2:
			printf("\nSubtraction:\n");
			if(r1 == r2 && c1 == c2){
				for(i=0;i<r1;i++){
					for(j=0;j<c2;j++){
						c[i][j] = a[i][j] - b[i][j];
						printf("%d\t",c[i][j]);
					}
					printf("\n");
				}
			}
			else{
				printf("\nSubtraction is not possible.");
			}
			break;
		case 3:
			printf("\nMultiplication:\n");
			if(c1 == r2){
				for(i=0;i<r1;i++){
					for(j=0;j<c2;j++){
						c[i][j]=0;
						for(k=0;k<r1;k++){
							c[i][j] = c[i][j] + a[i][k] * b[k][j];
						}
						printf("%d\t",c[i][j]);
					}
					printf("\n");
				}
			}
			else{
				printf("\nMultiplication is not possible.");
			}
			break;
		case 4:
			printf("\nTranspose:\n");
			for(i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					c[j][i] = a[i][j];
				}
			}
			for(i=0;i<c1;i++){
				for(j=0;j<r1;j++){
					printf("%d ",c[i][j]);
				}
				printf("\n");
			}
			break;
		default:
			printf("\nInvalid Input");
	}
	getch();
}
