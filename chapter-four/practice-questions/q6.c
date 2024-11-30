// keep taking numbers as input from user until user enters an odd number.
#include <stdio.h>
int main()
{
    int number;
    do
    {
        printf("enter a number: ");
        scanf("%d", &number);
        printf("%d\n", number);
        if (number % 7 == 0)
        {
            break;
        }
    } while (1);
    printf("thankyou\n");
    return 0;
}