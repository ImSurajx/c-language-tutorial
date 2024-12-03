// wap using functions to find average of three numbers.
#include<stdio.h>
int average(int a, int b, int c);
int main(){
    int a,b,c;
    printf("enter first number: " );
    scanf("%d",&a);
    printf("enter second number: " );
    scanf("%d",&b);
    printf("enter third number: " );
    scanf("%d",&c);
    average(a,b,c);
    return 0;
}
int average(int a, int b, int c){
    int ave = (a + b + c)/3;
    printf("the average of three numbers is: %d\n",ave);
}