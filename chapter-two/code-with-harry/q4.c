/*
    explain step by step evalution of 3*x/y-z+k, where x = 2, y = 2, z = 3, k = 1;
    step 1: 3*2 = 6
    step 2: 6/2 = 3
    step 3: 3-3 = 0
    step 4; 0+1 = 1
    so final answer will be 1.
*/
#include<stdio.h>
int main(){
    int x = 2, y = 2, z = 3, k = 1;
    printf("the evaluted value is: %d",3*x/y-z+k);
    return 0;
}