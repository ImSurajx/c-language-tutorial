// by do while
#include<stdio.h>
int main(){
    int i = 1, sum = 0;
    do
    {
       sum += i;
       i++;
    } while (i<=10);
    
    printf("the sum of first 10 natural number will be: %d\n",sum);
    return 0;
}