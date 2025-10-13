#include <stdio.h>
int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    year%4==0 ? printf("%d is a Leap year",year)
     : printf("%d is not a Leap year",year);
   
printf("\n");
return 0;

}