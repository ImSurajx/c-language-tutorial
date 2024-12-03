// make your own pow functions.
#include<stdio.h>
int power(int a, int b);
int main(){
    int a, b;
    printf("enter exponent: ");
    scanf("%d", &a);
    printf("enter base: ");
    scanf("%d", &b);
    printf("%d raise to power %d is = %d \n",a,b,power(a,b));
    return 0;
}
int power(int a, int b){
    int powe = 1;
    for(int i = 1; i<=b; i++){
        powe *= a;
    }
    return powe;
}