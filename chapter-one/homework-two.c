#include<stdio.h>
int main(){
    // take a number n from user & output it's cube n * n * n.
    int number;
    printf("enter a number: ");
    scanf("%d", &number); // take input under number variable addresser 
    printf("the cube of following number is: %d \n", number * number * number); // give output cube of output number.
    return 0;
}