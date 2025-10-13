#include <stdio.h>


int main(){
    double a=0.0;
    double b=0.0;
    printf("Enter first number:");
    scanf("%lf",&a);
    printf("Enter second number:");
    scanf("%lf",&b);
    if(a==b){
        printf("The values are equal");
    }
    else{
        printf("The values aren't equal");
    }
    return 0;
}