// Write a program to print multiplication table of 10 in reversed order.
#include<stdio.h>
int main(){
    int num, table;
    printf("enter a number: ");
    scanf("%d",&num);
    for(int i = 10; i >= 1; i-- ){
        table = num * i;
        printf("%d ",table);
    }
    return 0;
}