#include <stdio.h>

int main()
{ 
    //Ques. multiply two numbers

    int  FirstNumber, SecondNumbers, remainder;

    printf("Enter the first number=");
    scanf("%d", & SecondNumbers);
    
    printf("Enter the second number=");
    scanf("%d", & FirstNumber);

    //formula
    remainder= SecondNumbers%FirstNumber;
    
    printf("The remainder after division is= %d",remainder);

    return 0;
}