/*
Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.
*/
#include<stdio.h>
int main(){
    int year;
    printf("enter a year: ");
    scanf("%d",&year);
    year % 4 == 0? printf("it's a leap year\n"): printf("it's not a leap year\n");
    return 0;
}