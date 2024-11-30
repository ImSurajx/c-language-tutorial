/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 – 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include <stdio.h>
int main()
{
    float income, tax;
    printf("enter your income: ");
    scanf("%f", &income);
    if (income < 250000)
    {
        printf("no tax will be paid. \n");
    }
    else if (income >= 250000 && income < 500000)
    {
        tax = income * 5 / 100;
        printf("the tax will be paid: %f", tax);
    }
    else if (income >= 500000 && income < 1000000)
    {
        tax = income * 20 / 100;
        printf("the tax will be paid: %f", tax);
    }
    else if (income >= 1000000)
    {
        tax = income * 30 / 100;
        printf("the tax will be paid: %f", tax);
    }
    return 0;
}