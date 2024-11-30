// print the table of a number input by the user.
#include<stdio.h>
int main(){
    int n, table = 1;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 10; i >=1; i--)
    {
        table = n * i;
        printf("2 x %d = %d\n",i,table);
    }
    
    return 0;
}