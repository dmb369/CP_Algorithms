// C program to print the gcd of the mth and nth fibonacci number.

#include <stdio.h>

int gcd (int a, int b)
{
    if (b==0) return a;
    else return gcd(b ,a%b);
}

int fib(int n) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++) {
        int tmp = a + b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int fibo_m=fib(m);
    int fibo_n=fib(n);
    printf("%d",gcd(fibo_m, fibo_n));
    return 0;
}