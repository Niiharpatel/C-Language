#include<stdio.h>
#include<math.h>

//to find compound intrest

int main(){
	
	float p;
	float r;
	float t;	
	float ci;
	
	printf("enter the value of p=");
	scanf("%f",&p);
	
	printf("enter the value of r=");
	scanf("%f",&r);
	
	printf("enter the value of t=");
	scanf("%f",&t);
	
	ci=p*((1+r/100),t); //here,p=principal amount,r=rate,t=time
	
	printf("ans is=%f",ci);
	

	return 0;
}
