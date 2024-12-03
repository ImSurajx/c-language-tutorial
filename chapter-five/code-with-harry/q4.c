// waf to print n terms of the fibonacci sequence.
// 0 1 1 2 3 5 8 13 21  fib(2) = fib(0) + fib(1), fib(3) = fib(1) + fib(2)
#include <stdio.h>
int fibo(int n);

int main()
{
    printf("%d",fibo(6));
    return 0;
}

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibNm1 = fibo(n - 1);
    int fibNm2 = fibo(n - 2);
    int fibN = fibNm1 + fibNm2;
    //printf("fib of %d is : %d \n", n, fibN);
    return fibN;
}
