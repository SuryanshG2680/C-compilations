#include <stdio.h>
int main(){
   int a;
   printf("Enter number ");
   scanf("%d",&a);
   a>0 ? printf("This is a positive number")
         : a==0 ? printf("You Entered zero ")  
                :  printf("This is a negative number");
        
                return 0;
}