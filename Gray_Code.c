// C program to output the number of Gray Code
// It is significant in genetic algorithm theory.

#include<stdio.h>

int g (int n) {
    return n ^ (n >> 1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",g(n));
    return 0;
}