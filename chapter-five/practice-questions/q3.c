// find square of a number using library function.
#include<stdio.h>
#include<math.h>
int main(){
    int a, store;
    printf("enter a number: ");
    scanf("%d",&a);
    store = pow(a,2);
    printf("the square of %d is : %d\n", a, store);
    return 0;
}