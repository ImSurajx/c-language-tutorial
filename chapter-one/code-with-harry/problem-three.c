/* calculate the area of circle and modify the same program to calculate the volume of cylinder given its radius and height*/
#include<stdio.h>
int main(){
    // int radius, area;
    // printf("enter radius of circle: ");
    // scanf("%d",&radius);
    // area = (3.14 * radius * radius);
    // printf("the area of circle is: %d unit ^ 2" , area);
    // modification
    int radius, area, height;
    printf("enter radius of cylinder: ");
    scanf("%d",&radius);
    printf("enter height of cylinder: ");
    scanf("%d",&height);
    area = (3.14 * radius * radius * height);
    printf("the volume of cylinder is: %d unit ^ 3" , area);
    return 0;
}