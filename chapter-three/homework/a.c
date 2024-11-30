// wap to check if a given number is armstrong number or not.
// An Armstrong number (also known as a narcissistic number or pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. For example:
// For 3-digit numbers, 153 is an Armstrong number because 
// 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.
// note : this code is only valid for three digit armstrong number.
#include<stdio.h>
int main(){
    int number, dig_one, dig_two, dig_three, store;
    printf("enter a number: ");
    scanf("%d",&number);
    store = number;

    dig_one = number % 10;
    number = number/10;
    dig_one = dig_one * dig_one * dig_one;

    dig_two = number % 10;
    number = number/10;
    dig_two = dig_two * dig_two * dig_two;

    dig_three = number % 10;
    number = number/10;
    dig_three = dig_three * dig_three * dig_three;

    if((dig_one + dig_two + dig_three) == store ){
        printf("the following number is armstrong number.");
    } else{
        printf("the following number is not a armstrong number.");
    }
    return 0;
}