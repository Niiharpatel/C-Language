#include<stdio.h>
int main(){
	
	//to find out applicable for vot or not
	
	int year;
	int limit=18;
	
	printf("Enter your age = ");
	scanf("%d",&year);
	
	if(year>=limit){
		printf("\nyou are eligible for vote");
	}else{
		printf("\nyou are not eligible for vote");
	}
	
	return 0;
}
