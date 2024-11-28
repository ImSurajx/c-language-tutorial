#include<stdio.h>
int main(){
    // wap to calculate are of square (side * side)
    int side, area;
    printf("enter a side of square: ");
    scanf("%d",&side);

    area = side * side;
    printf("the area of square is: %d unit^2\n" ,area );
    return 0;
}