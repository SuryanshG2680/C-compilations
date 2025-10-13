#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,e,sum;
    float perc;
    printf("Enter marks obtained in english (out of 100)=");
    scanf("%d",&a);
    printf("Enter marks obtained in comp. (out of 100)=");
    scanf("%d",&b);
    printf("Enter marks obtained in chemistry (out of 100)=");
    scanf("%d",&c);
    printf("Enter marks obtained in physics (out of 100)=");
    scanf("%d",&d);
    printf("Enter marks obtained in maths (out of 100)=");
    scanf("%d",&e);
    sum=a+b+c+d+e;
    perc=(float)sum/5;
    printf("percentage obtained is=%.2f %%\n",perc);
    printf("Your grade is=");

    perc>=90 ? printf("A\n")
            : perc>=80 ? printf("B\n")
                      : perc>=70 ? printf("C\n")
                                : printf("D\n");
     
                        

    return 0;                    

}