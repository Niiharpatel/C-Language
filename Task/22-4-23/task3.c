#include<stdio.h>

//call by value....

void swap(int x, int y);
int main(){
	int a= 10;
	int b= 20;
	printf("before swapping value of a is %d and b is %d\n",a,b);
	swap (a,b);
	printf("after swapping value of a is %d and b%d\n",a,b);
	
	return 0;
}

void swap(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}
