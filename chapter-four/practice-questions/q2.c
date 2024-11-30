// print the numbers from 0 to n, if n is given by user.
#include <stdio.h>
int main()
{
    float n;
    printf("enter the value of n: ");
    scanf("%f", &n);
    int i = 0;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}