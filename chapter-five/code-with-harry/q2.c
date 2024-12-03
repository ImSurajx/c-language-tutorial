// write a function to convert celsius temprature into fahrenhit.
#include <stdio.h>
float convTem(float celsius);

int main()
{
    int c;
    printf("enter temp in celsius: ");
    scanf("%d", &c);
    printf("far : %f\n", convTem(c));
    return 0;
}

float convTem(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}