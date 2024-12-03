// write a function to find square root of a number.
#include<stdio.h>
#include<math.h>
int squRoot(int n);
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("the square is: %d \n",squRoot(n));
    return 0;
}
int squRoot(int n){
    return pow(n,2);
}