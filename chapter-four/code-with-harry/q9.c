//Repeat 8 using while loop.
//Write a program to calculate the factorial of a given number using a for loop.
#include<stdio.h>

int main() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i = 1;
    while (i <= num)
    {
        factorial *= i;
        i++;
    } 
    printf("Factorial is: %d\n", factorial);
    
    return 0;
}
