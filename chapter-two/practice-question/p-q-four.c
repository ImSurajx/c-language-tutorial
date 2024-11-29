// operator precedence 
    // *,/,%  --> +,- --> =
    // x = 4 + 9 * 10
    // x = 4 * 3 / 6 * 2 // associativity rule (left --> right)
#include<stdio.h>
int main(){
    int a = 5, b = 2;
    printf("%d\n", 5 * 2 - 2 * 3);
    printf("%d\n", 5 * 2 / 2 * 3);
    printf("%d\n", 5 * (2 / 2) * 3);
    printf("%d\n", 5 + 2 / 2 * 3);
    return 0;
}