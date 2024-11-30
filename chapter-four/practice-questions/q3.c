// print the sum of first n natural numbers.
#include <stdio.h>
int main()
{
    float n;
    printf("enter a number: ");
    scanf("%f", &n);
    float i = 1;
    float sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("the sum of n natural numbers will be: %f \n", sum);
    for(float i=n; i>=1; i--){
        printf("%f ",i);
    }
    return 0;
}