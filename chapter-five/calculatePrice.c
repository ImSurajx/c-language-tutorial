#include <stdio.h>
void calPrice(float value);
int main()
{
    float value;
    printf("enter price of product : ");
    scanf("%f", &value);
    calPrice(value);
}
void calPrice(float value)
{
    value += (0.18 * value);
    printf("the price of product with tax: %f", value);
}