/*
Write a program to find greatest of four numbers entered by the user.
*/
#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("enter first number: ");
    scanf("%d",&num1);
    printf("enter second number: ");
    scanf("%d",&num2);
    printf("enter third number: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("number one is the greatest\n");
    } else if(num2>num1 && num2>num3){
        printf("number two is the greatest\n");
    } else if(num3>num1 && num3>num1){
        printf("number three is the greatest\n");
    }
    return 0;
}