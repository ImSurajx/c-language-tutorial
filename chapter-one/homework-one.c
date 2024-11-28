#include<stdio.h>
int main(){
    // wap to calculate perimeter of rectangle.
    float length, bredth, perimeter;
    printf("enter length of rectangle: ");
    scanf("%f", &length); // for taking input of length variable from user.

    printf("enter bredth of rectangle: ");
    scanf("%f", &bredth); // for taking input of bredth variable from user

    printf("the perimeter of rectangle is: %f unit \n", (2 * (length + bredth))); // give out of perimeter.
    return 0;
}