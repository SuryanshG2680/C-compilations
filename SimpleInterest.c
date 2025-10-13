#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, a, ci, A;
    printf("Enter principle amount:");
    scanf("%f",&p);
    printf("Enter Rate %%:");
    scanf("%f",&r);
    printf("Enter Time (in years):");
    scanf("%f",&t);

    si=p*r*t/100;
    printf("Your Interest in %.2f years= %.2f\n", t, si);
    a=si+p;
    printf("Your total amount after %.2f years will be $%.2f\n", t, a);
    A= p * pow((1+r/100), t);
    ci=A-p;
    printf("Your Interest in %.2f years= %.2f\n", t, ci);
    printf("Your total amount after %.2f years will be $%.2f\n", t, A);

    return 0;
}