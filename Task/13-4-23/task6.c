#include<stdio.h>
int main(){
	
	int a;
	
	printf("Enter the value a = ");
	scanf("%d",&a);
	
	if(a>10){
		printf("\nHello user Good Morning");
	}else if(a<10){
		printf("\nHello user Good Noon");		
	}else{
		printf("\nHello user Good Night");
	}	
	
	return 0;
}
