#include <stdio.h>

int main()
{ 
    //Ques. multiply two numbers

    int  FirstNumber, SecondNumbers, product;

    printf("Enter the first number=");
    scanf("%d", & SecondNumbers);
    
    printf("Enter the second number=");
    scanf("%d", & FirstNumber);

    product= SecondNumbers*FirstNumber;
    printf("The product of your numbers is= %d",product);

    return 0;
}