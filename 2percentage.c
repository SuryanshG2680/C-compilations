#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,d,e,f;
    float g;

    printf("Marks of English:");
    scanf("%f",&a);
    printf("Marks of Maths:");
    scanf("%f",&b);
    printf("Marks of Hindi:");
    scanf("%f",&c);
    printf("Marks of Physics:");
    scanf("%f",&d);
    printf("Marks of Chemistry:");
    scanf("%f",&e);

    f=a+b+c+d+e ;
    g=f/500*100;
    printf("Your total marks is: %.2f/500\n",f);
    printf("Your percentage is: %.2f%%\n",g);

    return 0;
}