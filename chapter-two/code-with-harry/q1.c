/*
    which of the following is invalid in c.
    a. int a = 1; int b = a; -> valid
    b. int v = 3*3; -> valid
    c. char dt = '21 dec 2020' --> invalid
*/
#include<stdio.h>
int main(){
    int a = 1; int b = 1;
    int v = 3*3;
    printf("%d",v);
    // char dt = '21 dec 2020' //invalid
    return 0;
}