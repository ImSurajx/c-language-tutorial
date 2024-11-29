//wap to print the smallest number.
#include<stdio.h>
int main(){
    float num_one, num_two, num_three;
    printf("enter number one: ");
    scanf("%f",&num_one);
    printf("enter number two: ");
    scanf("%f",&num_two);
    printf("enter number three: ");
    scanf("%f",&num_three);
    if (num_one < num_two && num_one < num_three)
    {
        printf("the smallest digit is: %f",num_one);
    } else if (num_two < num_one && num_two < num_three){
        printf("the smallest digit is:  %f",num_two);
    } else{
        printf("the smallest digit is: %f", num_three);
    }
    return 0;
}