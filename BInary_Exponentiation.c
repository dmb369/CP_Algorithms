// Binnary Exponentiation
// It is a trick which allows to calculate a^n using only O(logn) 
// Multiplication takes O(n) when using naive approach
#include <stdio.h>

long long binpow(unsigned long long a, unsigned long long b)
{
    if (b==0) return 1;
    unsigned long long res=binpow(a,b/2);
    if (b%2!=0) 
    {
        return res*res*a;
    }
    else 
    {
        return res*res;
    }
}

int main() {
    unsigned long long a,b;
    scanf("%llu %llu",&a, &b);
    unsigned long long c=binpow(a,b);
    printf("%llu",c);
    return 0;
}