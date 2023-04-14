#include<stdio.h>


//swapping with variable

int main(){
	
	int a;  //a=10
	int b;  //b=20
	int swap;
	
	printf("enter the value of a=");
	scanf("%d",&a);
	
	printf("\nenter the value of b=");
	scanf("%d",&b);
	
	printf("\n10before swapping value of a=%d\n",a);  // a=10
	printf("before swapping value of b=%d\n",b);  // b=20
	
	swap=a; //swap=10
	a=b;  // a=20
	b=swap; // b=10
	
	printf("\n-------After Swapping-------");
	printf("\nafter swapping value of a=%d",a);
	printf("\nafter swapping value of b=%d",b);
	
	return 0;
}
