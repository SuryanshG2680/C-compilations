#include<stdio.h>
int main(){
float a,b,c,d,e,sum;
float per;
printf("enter marks of five subjects:a,b,c,d,e:");
scanf("%f%f%f%f%f", &a ,&b ,&c ,&d ,&e );

sum=a+b+c+d+e;
per=(sum/500)*100;

printf("Percentage of 5 sub is:%f%%\n",per);

if(per>=90){
    printf("grade 'a'");
}

else if(per>=80 && per<=90){
    printf("grade 'b'");
}

else if(per>=60 && per<=80){
    printf("grade 'c'");
}

else{
    printf("grade 'd'");
}

return 0;

}
