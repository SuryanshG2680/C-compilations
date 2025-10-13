#include <stdio.h>

int main(){
    int Num1, Num2;
    printf("Enter first number:");
    scanf("%d",&Num1);
    printf("Enter second number:");
    scanf("%d",&Num2);
    
    if (Num1>Num2){
        printf("Greatest among the two is: ");
        printf("%d\n",Num1);

    }
    else if(Num2>Num1) {
        printf("Greatest among the two is: ");
        printf("%d\n",Num2); 
    }
    else{
        printf("Both numbers are equal: %d\n",Num1);
    }
    return 0;
}