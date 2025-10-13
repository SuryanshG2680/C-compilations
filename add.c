#include <stdio.h>

int main()
{
    int  SecondNumbers, FirstNumber, Sum;

    printf("Enter the first number=");
    scanf("%d", & SecondNumbers);

    printf("Enter the second number=");
    scanf("%d", & FirstNumber);

    Sum= SecondNumbers+ FirstNumber;
    printf("The sum of your numbers is= %d",Sum);

    return 0;
}