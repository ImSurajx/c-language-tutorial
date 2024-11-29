/*
    print t(true) or 0(false) for the following statements:asm
    1. if it's sunday &  it's snowing -> true
    b. if it's monday or raining -> true
    c. if a number is greator than 9 & less than 100 -> true
*/
#include<stdio.h>
int main(){
    int sunday = 1, snowing = 1, monday = 0, raining = 1, number;
    printf("enter a number: ");
    scanf("%d", &number);
    printf("if it's sunday &  it's snowing: %d \n", sunday && snowing);
    printf("if it's monday or raining: %d \n", monday || raining);
    printf("if a number is greator than 9 & less than 100: %d", number >= 9 && number <= 100);
    return 0;
}