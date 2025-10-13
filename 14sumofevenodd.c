#include <stdio.h>

int main(){
     int num, k, EvenSum, OddSum;
    printf("Enter the number:");
    scanf("%d",&num);

     if(num%2==0) {
        printf("This is an even number\n");
        k=num;
        printf("Sum of all even numbers from 0 to %d = ",num);
                for (num; num>0; num=num-2){
                    EvenSum= EvenSum+num;
                }
                printf("%d\n",EvenSum);
        printf("Sum of all odd numbers from 0 to %d = ",k);
        k=k-1;
                for (k; k>0; k=k-2){
                    OddSum= OddSum+k;
                }
                printf("%d\n",OddSum);
     }
     else{printf("This is an odd number\n");
        k=num;
        num=num-1;
        printf("Sum of all even numbers from 0 to %d = ",num);
                for (num; num>0; num=num-2){
                    EvenSum= EvenSum+num;
                }
                printf("%d\n",EvenSum);
        printf("Sum of all odd numbers from 0 to %d = ",k);
                for (k; k>0; k=k-2){
                    OddSum= OddSum+k;
                }
                printf("%d\n",OddSum);
     }
    
    return 0;
}