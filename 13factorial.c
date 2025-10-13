#include <stdio.h>

int main(){

    int num, factorial=1;
    printf("Enter the number:");
    scanf("%d",&num);
    

    if(num<0){
        printf("Factorial is not defined for negative numbers");
    }
    else if(num==0){
        printf("The factorial of zero is 1");
    
    }
    else{
        printf("The factorial of %d (%d!)= ",num, num);

    for (num; num>1; num--){
        factorial=factorial*num;

    }
    printf("%d",factorial);}
    
    return 0;
}