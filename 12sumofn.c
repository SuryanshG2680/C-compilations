#include <stdio.h>

int main (){

    int num, sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The sum of all the numbers from 1 to %d is = ",num);

    for(num; num>0; num--){
        sum=sum+num;
    }
    printf("%d",sum);
    return 0;
}