#include <stdio.h>
 
int main(){

    int N,r;

    scanf("%d",&N);
    r=N%2;
    switch(r){
        case 0: printf("even");
        break;
        case 1: printf("odd");
        break;
        default: printf("thanks");
    }
       return 0;
}