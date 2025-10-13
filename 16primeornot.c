#include <stdio.h>

int main(){
    int N, k;
    int c=0;
     printf("PRIME OR COMPOSITE\n Enter the number to be checked:");
    scanf("%d",&N);
    for (int i=2; i<N; i++){
        if (N%i==0){
            
            c++;
        
        }
    }

    if(c==0){
        printf("%d is prime.",N);
    }
    else{
        printf("%d is not a prime number.",N);
    }
    return 0;
}
