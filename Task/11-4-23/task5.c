#include<stdio.h>

// swapping without variable

int main(){
	
	int a,b;
	
	printf("enter the value of a=");
	scanf("%d",&a); //a=10
	
	printf("\nenter the value of b=");
	scanf("%d",&b);  //b=20
	
	printf("\nbefore swapping value of a=%d",a);
    printf("\nbefore swapping value of b=%d",b);	
	a=a+b;  //a=30
	b=a-b;  //b=10
	a=a-b;  //a=20
	
	printf("\n\nafter swapping value of a=%d\n",a);  //a=20
	printf("after swapping value of b=%d",b);  //b=10
	
	return 0;
	
}
