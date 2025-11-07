#include<stdio.h>
int main(){
    int a[50], n,i,L1=a[0], L2=a[0];
    printf("Enter number of elements:");
   scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(L1<a[i]){
            L1=a[i];
        }
    }
    for(i=0; i<n; i++){
        if(L2<a[i]){
            if(a[i] == L1){
                continue;
            }
            else{
            L2=a[i];
            }
        }
    }
    printf("Second Largest among them is %d",L2);
    return 0;

}
