// write a function to find sum of digit of a number.
#include <stdio.h>
int sumOfDigit(int n);
int main()
{
    printf("the sum of digit is: %d ", sumOfDigit(99999));
    return 0;
}
int sumOfDigit(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int store = n % 10;
        sum += store;
        n /= 10;
    }
    return sum;
}