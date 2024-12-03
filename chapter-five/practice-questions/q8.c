#include <stdio.h>

int calPer(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("enter marks of science: ");
    scanf("%d", &a);
    printf("enter marks of maths: ");
    scanf("%d", &b);
    printf("enter marks of sanskrit: ");
    scanf("%d", &c);
    printf("the percentage of marks is: %d \n", calPer(a, b, c));
    return 0;
}

int calPer(int a, int b, int c)
{
    int per = (a + b + c) / 3;
    return per;
}