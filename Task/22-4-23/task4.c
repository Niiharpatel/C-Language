#include<stdio.h>

//call by reference....

void swap(int *x, int *y);
int main(){
	int a= 5;
	int b= 10;	
	swap (&a,&b);	
	printf("a = %d \nb = %d ",a,b);	
	return 0;
}

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
