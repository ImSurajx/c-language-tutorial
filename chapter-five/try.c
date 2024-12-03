#include <stdio.h>

int sum(int a, int b);
void printTable(int n);

int main()
{
    int a, b, n;
    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter first num : ");
    scanf("%d", &b);
    n = sum(a, b);
    printTable(n);
}

int sum(int a, int b)
{
    return a + b;
}

void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }
}