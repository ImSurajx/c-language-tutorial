#include<stdio.h>

void printHello();  // declaration/prototype

int main(){
    printHello(); // function call
    printHello();
    printHello();
    return 0;
}

void printHello(){
    printf("Hello Suraj\n"); // function definition
}