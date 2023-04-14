#include<stdio.h>
int main(){
	
	//to find out grade
	
	int a;
	int gradea;
	int gradeb;
	int gradec;
	
	printf("enter your percentage = ");
	scanf("%d",&a);
	
	if(a>=90){
		printf("\nyou get Grade-A");
	}else if(a>=80){
		printf("\nyou get Grade-B");
	}else if(a>=70){
		printf("\nyou get Grade-C");
	}else{
	     printf("\nyou get Grade-D");
	}
	
	return 0;
}
