// wap a program to print prime number in a range.
// this code is writen by ai.
#include <stdio.h>

int main() {
    int low, high, num, i, isPrime;

    printf("Enter the lower limit of the range: ");
    scanf("%d", &low);

    printf("Enter the upper limit of the range: ");
    scanf("%d", &high);

    printf("Prime numbers between %d and %d are:\n", low, high);

    for (num = low; num <= high; num++) {
        if (num <= 1) {
            continue; // Skip numbers less than or equal to 1
        }
        isPrime = 1; // Assume the number is prime
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, so it's not prime
                break; // Exit inner loop early
            }
        }
        if (isPrime) {
            printf("%d ", num); // Print the prime number
        }
    }
    printf("\n");

    return 0;
}
