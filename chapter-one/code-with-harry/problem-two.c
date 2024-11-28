/* write a c program to calculate are of rectangle 
    b. using inputs supplied by the user.
*/
#include<stdio.h>
int main(){
    int length, bredth;
    printf("enter length of rectangle: ");
    scanf("%d",&length);
    printf("enter bredth of rectangle: ");
    scanf("%d",&bredth);
    printf("the area of rectangle is: %d unit ^ 2 \n" ,length * bredth);
    return 0;
}