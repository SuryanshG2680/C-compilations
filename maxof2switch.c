#include <stdio.h>
 #include <stdbool.h>
int main(){

    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    if(a!=b){
    switch(a>b){
        case 0: printf("a<b");
        break;
        case 1: printf("a>b");
        break;
        default: printf("thanks");
    }}
    else{ printf("both equal");}
     return 0;  
}