// wap to check if a number is prime or not.
// take help of copilet ai
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // Assume the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i < num; i++) {  // Check divisibility from 2 to num-1
            if (num % i == 0) {
                isPrime = 0;  // Found a divisor, not prime
                break;  // Exit loop early
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
