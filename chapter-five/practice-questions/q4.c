// write function to calculate area of circle, rectangle or squar.
#include <stdio.h>
float calAreaCircle(float r);
float calAreaRec(float l, float b);
float calAreaSqu(float a);

int main()
{
    char c, r, s, input;
    printf("enter c == circle, r == rectangle, s == square: ");
    scanf("%s", &input);
    if (input == 'c')
    {
        float r, area;
        printf("enter radius of a circle: ");
        scanf("%f", &r);
        printf("the area of circle is: %f", calAreaCircle(r));
    }
    else if (input == 'r')
    {
        float l, b, area;
        printf("enter length of rectangle: ");
        scanf("%f", &l);
        printf("enter bredth of rectangle: ");
        scanf("%f", &b);
        printf("the area of rectangle is: %f", calAreaRec(l, b));
    }
    else if (input == 's')
    {
        float s, area;
        printf("enter side of square: ");
        scanf("%f", &s);
        printf("the area of square is: %f", calAreaSqu(s));
    }
    return 0;
}

float calAreaCircle(float r)
{
    return 3.1415 * r * r;
}

float calAreaRec(float l, float b)
{
    return l * b;
}

float calAreaSqu(float a)
{
    return a * a;
}