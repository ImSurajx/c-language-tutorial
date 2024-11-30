// Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).
// Write a program to print multiplication table of a given number n.
#include<stdio.h>
int main(){
    int num, table, sum = 0;
    printf("enter a number: ");
    scanf("%d",&num);
    for(int i = 1; i <= 10; i++ ){
        table = num * i;
        printf("%d \n",table);
        sum += table;
    }
    printf("the sum of table is:%d \n", sum);
    return 0;
}