// Write a program to print multiplication table of a given number n.
#include<stdio.h>
int main(){
    int num, table;
    printf("enter a number: ");
    scanf("%d",&num);
    for(int i = 1; i <= 10; i++ ){
        table = num * i;
        printf("%d ",table);
    }
    return 0;
}