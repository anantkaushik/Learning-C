//Program of Sparse matrix for 3-tuple method using array.
#include<conio.h>
#include<stdio.h>
#define srow 50
#define mrow 20
#define mcolumn 20
void main(){
	int a[mrow][mcolumn],sparse[srow][3];
	int i,j,mr,mc,sr,nz=0,s=1;
	clrscr();
	printf("\nEnter the size of the matrix:");
	scanf("%d %d",&mr,&mc);
	for(i=0;i<mr;i++){
		for(j=0;j<mc;j++){
			printf("\nEnter element for %d row, %d column",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix:\n");
	for(i=0;i<mr;i++){
		for(j=0;j<mc;j++){
			printf("%d ",a[i][j]);
			if(a[i][j]!=0)
				nz++;
		}
		printf("\n");
	}
	sr = nz + 1;
	sparse[0][0] = mr;
	sparse[0][1] = mc;
	sparse[0][2] = nz;
	for(i=0;i<mr;i++){
		for(j=0;j<mc;j++){
			if(a[i][j]!=0){
				sparse[s][0] = i+1;
				sparse[s][1] = j+1;
				sparse[s][2] = a[i][j];
				s++;
			}
		}
	}
	printf("\nSparse Matrix:\n");
	for(i=0;i<sr;i++){
		for(j=0;j<3;j++){
			printf("%d ",sparse[i][j]);
		}
		printf("\n");
	}
	getch();
}

