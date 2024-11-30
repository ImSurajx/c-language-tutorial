// print the factoria of a number n;
#include<stdio.h>
int main(){
    int number, factorial;
    printf("enter a number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        factorial *= number;
        number--;
    }
    printf("the factorial is: %d\n", factorial);
    
    return 0;
}