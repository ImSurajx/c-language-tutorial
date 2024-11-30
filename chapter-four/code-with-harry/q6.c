// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
// by for
#include<stdio.h>
int main(){
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }   
    printf("the sum of first 10 natural number will be: %d\n",sum);
    return 0;
}