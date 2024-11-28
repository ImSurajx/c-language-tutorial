// write a program to convert celsius (centigrade degrees temperature to fahrenheit)
#include<stdio.h>
int main(){
    // forumula is : f = c x (9/5) + 32
    // where f is fahrenheit & c is centigrade.
    int c , f;
    printf("enter temprature in centigrade: ");
    scanf("%d",&c);
    f = (c * 9/5) + 32;
    printf("the following temprature in fahrenheit will be: %d Degree F" ,f);
}