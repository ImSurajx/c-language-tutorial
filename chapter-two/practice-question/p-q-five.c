// write a program to check if a number is divisible by 2 or not.
// if output return 1 that mean number is divisible by 2 otherwise it's not.
#include<stdio.h>
int main(){
    int number;
    printf("enter a number: ");
    scanf("%d", &number);
    printf("the following number is: %d" ,number % 2 ==0);
    return 0;
}