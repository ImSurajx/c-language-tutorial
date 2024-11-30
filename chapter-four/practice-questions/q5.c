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
        if (number % 2 != 0)
        {
            break;
        }
    } while (1);

    return 0;
}