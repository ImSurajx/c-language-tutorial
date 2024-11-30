// search on whar a "nested loop" is & print this pattern using it.
/*
* * * * *
* * * * *
* * * * *
* * * * *
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}