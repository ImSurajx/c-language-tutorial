// wap to print the average of 3 number.
#include<stdio.h>
int main(){
    float num_one, num_two, num_three;
    printf("enter number one: ");
    scanf("%f",&num_one);
    printf("enter number two: ");
    scanf("%f",&num_two);
    printf("enter number three: ");
    scanf("%f",&num_three);
    printf("the average of following three numbers is: %f\n ", (num_one + num_two + num_three)/3);
    return 0;
}