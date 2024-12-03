// search on whar a "nested loop" is & print this pattern using it.
/*
* * * * *
* * * * *
* * * * *
* * * * *
*/
int pattern(int n);
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
int pattern(int n){
     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}