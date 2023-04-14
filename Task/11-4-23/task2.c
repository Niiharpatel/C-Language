#include<stdio.h>

//to find area of rectangular

int main(){
	
	float l,b,area;
	
	printf("enter the value of length=");
	scanf("%f",&l);
	
	printf("\nenter the value of width=");
	scanf("%f",&b);
	
	area=l*b;  //equation to find area of rectangular
	
	printf("\narea of rectangular is=%f",area);
	
	return 0;
	
}
