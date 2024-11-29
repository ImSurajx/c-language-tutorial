//wap to check weather a number is divisible by 97 or not;
#include<stdio.h>
int main(){
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    printf("%d",number % 97 == 0);
    return 0;
}