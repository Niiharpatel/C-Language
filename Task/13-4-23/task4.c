#include<stdio.h>
int main(){
	
	
	//to find out minimum number
	
	int a;
	int b;
	
	printf("enter the value of a = ");
	scanf("%d",&a);
	
	printf("enter the value of b = ");
	scanf("%d",&b);
	
	if(a<b){
		printf("\nminimum number is a ",a);
	}else{
		printf("\nminimum number is b ",b);
		
	}
	return 0;
}
