#include <stdio.h>
 
int main(){

    char a;
    printf("enter a letter=");

    scanf("%c",&a);
    
    switch(a){
        case 'a': printf("v");
        break;
        case 'e': printf("v");
        break;
        case 'i': printf("v");
        break;
        case 'o': printf("v");
        break;
        case 'u': printf("v");
        break;
        case 'A': printf("v");
        break;
        case 'E': printf("v");
        break;
        case 'I': printf("v");
        break;
        case 'O': printf("v");
        break;
        case 'U': printf("v");
        break;
        default: printf("c");
    }
       return 0;
}