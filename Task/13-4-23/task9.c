#include<stdio.h>
int main(){
	
	//to find number is odd or even
	
	int a;
	
    printf("Enter the number= ");
    scanf("%d", &a);

    if  (a%2 == 0) //here a variable is divided by 2 if its true than print even 
	 {
        printf("\n%d is even number.",a);
    }
    else 
	{
        printf("\n%d is odd number.",a);
    }

    return 0;
}
