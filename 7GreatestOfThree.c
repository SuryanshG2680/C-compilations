#include <stdio.h>

int main(){

    int a,b,c;
     printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
     printf("Enter third number:");
    scanf("%d",&c);

    if(a>=b&&a>c){
        printf("The greatest among them is %d",a);
    }
    else if (a>b && a<=c){
        printf("The greatest among them is %d",c);
    }
    else if(c>=a && c>=b){
        printf("The greatest among them is %d",c);    
    }
    else{
        printf("The greatest among them is %d",b);
    }
}