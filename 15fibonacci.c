#include <stdio.h>

int main (){
    int N, sum, t1=0, t2=1, k;
    printf("FIBONACCI SERIES\n Enter the number of terms to be printed:");
    scanf("%d",&N);
    printf("\n%d , %d ",t1,t2);

for (k; k<N-2; k++){
    sum=t1+t2;
    t1=t2;
    t2=sum;
    printf(", %d ",sum);
}
return 0;
}