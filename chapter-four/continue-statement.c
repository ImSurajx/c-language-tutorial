// keep taking numbers as input from user until user enters an odd number.
#include <stdio.h>
int main()
{
    int number;
    for (int i = 1; i <= 10; i++)
    {
        if(i==6){
            continue;
        }
        printf("%d \n",i);
    }
    
    return 0;
}