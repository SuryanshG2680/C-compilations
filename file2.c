#include<stdio.h>
int main(){
    int n;
    int evensum=0,oddsum=0;

    printf("enter a number");
    scanf("%d", &n);

    for(int i=0; i<=n; i=i+1){
        if(i%2==0){
            evensum+=i;
            
        }

        else{
            oddsum+=i;
            
        }
        
    }
    printf("the sum of even numbers is:%d\n",evensum);
    printf("the sum of odd numbers is:%d\n",oddsum);

    return 0;
}