#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    int sum=0;
    for(int i=0; i<=n; i=i+1){
        sum=sum+i;

    }

    printf("the sum of of numbers are:%d",sum);



    return 0;
}