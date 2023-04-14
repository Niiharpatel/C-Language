#include<stdio.h>

int main(){

    int a,b;

    printf("Enter the value of a= ");
    scanf("%d", &a);
    
    printf("Enter the value of b= ");
    scanf("%d", &b);

    //check if both are equal.
    if(a==b) {
        printf("\nboth are equal");
    }

    //checks if a is greater than b.
    else if (a>b) {
        printf("\na:%d > b:%d",a,b);
    }

    //checks if both above conditions are false
    else {
        printf("\na:%d < b:%d",a,b);
    }

    return 0;
}
