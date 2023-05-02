#include<stdio.h>
int main(){
	int a[5][5],r,c,i,j;
	printf("enter the row: ");
	scanf("%d",&r);
	printf("enter the column: ");
	scanf("%d",&c);
	
	
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){
			printf("Enter the element: ");
			scanf("\n%d",&a[i][j]);
		}
	
	}
	
	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){
		printf("  %d",a[i][j]);
		}
		printf("\n");
	
	}
	
   	
	return 0;
}
