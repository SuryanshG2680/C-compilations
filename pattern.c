#include <stdio.h>

int main(){

    for (int i=0; i<=10; i++){
        for (int j=0; j<=10; j++){
            if (i==0 || (j==0 && i<=5) || i==5 ||(j==10&&i>=5)||i==10){
                printf("*");

            }
            else {printf(" ");}
        }
    }
}