// Implement 10 using other types of loops.
#include<stdio.h>
int main(){
    int num, i, isPrime = 1;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num <= 1){
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else{
        i = 2;
        while (i < num)
        {
             if (num % i == 0) {
                isPrime = 0;  // Found a divisor, not prime
                break;  // Exit loop early
            }
            i++;
        }
        
    }
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}