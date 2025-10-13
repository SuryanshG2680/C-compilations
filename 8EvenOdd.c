#include <stdio.h>
int main(){
   int a;
   printf("Enter number ");
   scanf("%d",&a);
   a%2==0 ? printf("This is an even number")
         : printf("This is an odd number");
}