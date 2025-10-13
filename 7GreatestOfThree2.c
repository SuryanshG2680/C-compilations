#include <stdio.h>

int main(){

    int a1,b,c;
     printf("Enter first number:");
    scanf("%d",&a1);
    printf("Enter second number:");
    scanf("%d",&b);
     printf("Enter third number:");
    scanf("%d",&c);

    if(a1>=b){
        if(a1>=c){
            printf("The greatest is %d",a1);
        }
        else {
            printf("the greatest is %d",c);
        }
    }
    else {
        if(b>=c){
            printf("the greatest is %d",b);
        }
        else {
            printf("the greatest is %d",c);
        }
    }    
    return 0;
}