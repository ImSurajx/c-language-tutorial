/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/

#include<stdio.h>
int main(){
    char ch;
    printf("enter a character: ");
    scanf("%s",&ch);
    if(ch >= 'a' && ch<='z'){
        printf("it's a lowercase alphabet\n");
    } else if(ch >= 'A' && ch<='Z'){
        printf("it's a upercase alphabet\n");
    } else{
        printf("it's not an alphabet\n");
    }
    return 0;
}