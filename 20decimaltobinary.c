#include <stdio.h>

int main(){
    int i, N, k, bi, num, comp=1, ans=0;
    

    printf("Enter the number:");
    scanf("%d",&N);
    num=N;

    while(N>0){
        k=N%2;
        
        
        bi=comp*k;
        ans=ans+bi;
        N=N/2;
        comp=comp*10;
    }
    printf("The binary %d is in decimal is %d",num, ans);
}
