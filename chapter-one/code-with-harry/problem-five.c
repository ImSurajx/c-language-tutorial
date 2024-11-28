// write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest;
#include<stdio.h>
int main(){
    int priciple, rate, time, interest;
    printf("enter the principle amount: ");
    scanf("%d",&priciple);
    printf("enter the rate: ");
    scanf("%d",&rate);
    printf("enter the time: ");
    scanf("%d",&time);
    interest = (priciple * rate * time)/100;
    printf("the simple interest will be: %d", interest);
    return 0;
}