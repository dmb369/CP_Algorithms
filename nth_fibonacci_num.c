// C program to print the nth fibonacci numbers.
// Time Complexity: O(n)

#include <stdio.h>

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
    int n;
    scanf("%d",&n);
    int fibo=fib(n);
    printf("%d",fibo);
    return 0;
}