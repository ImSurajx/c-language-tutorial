// write a program to check if the given number is a natural number.
#include<stdio.h>
int main(){
    float number;
    printf("enter a number: ");
    scanf("%f",&number);
    if (number>0)
    {
        printf("this is a natural number: %f\n",number);
    } else{
        printf("not a natural number");
    }
    
    return 0;
}